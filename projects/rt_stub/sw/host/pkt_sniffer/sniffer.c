#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <errno.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <signal.h>
#include <sys/types.h>
#include <string.h>
#include <pcap/pcap.h>

#define MAX_BUF_SIZE    255

#define min(a,b) ( (a) < (b) ? (a) : (b) )
#define SR_PACKET_DUMP_SIZE 1514

void process_packet(u_char *arg, const struct pcap_pkthdr* pkthdr, const u_char* packet);
pcap_dumper_t* file = NULL;
uint32_t counter = 0;


/**************************************************************************
Function: Print Usage

Description:
Output the command-line options for this program.

Params:
@argc - Standard argument count
@argv - Standard argument array
dev
Returns:
returns void alwaysh
 **************************************************************************/
void PrintUsage(int argc, char *argv[]) {
    if (argc >=1) {
        printf("\nUsage: %s", argv[0]);
        printf("\n  Options:\n");
        printf("      -i select the interface to use to capture packets\n");
        printf("      -l select the file where to save the captured packets\n");
        printf("\n");
    }
}

/**************************************************************************
Function: ex_programm

Description:
handle the closing of the program when NON daemonize is requested.

 **************************************************************************/

void
ex_programm(int sig) {
    if(file != NULL)
        pcap_dump_close(file);
    //(void)signal(SIGINT, SIG_DFL);
    exit(0);
}

//----------------------------------------------------------------------------
void another_callback(u_char *arg, const struct pcap_pkthdr* pkthdr, const u_char* packet);

struct processing_state {
    uint16_t prev_port;
    uint64_t prev_rx_ts;
    uint16_t curr_port;
    uint32_t count;
    int search_mode;
    FILE *file;
};


int
main(int argc, char *argv[]) {
    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_t *descr;
    u_char *p, *pack;
    int c;
    char  *interface = NULL, *tracefile = NULL, *logfile = NULL;

    struct processing_state *state =
        (struct processing_state *) malloc(sizeof(struct processing_state));
    bzero(state, sizeof(*state));
    state->file = fopen("test.log", "w");
    if (state->file == NULL) {
        printf("cannot write to logfile\n");
        return -1;
    }

    (void)signal(SIGINT,ex_programm);

    while ((c = getopt(argc, argv, "i:l:r:")) != EOF)
    {
        switch (c)
        {
            case 'i':
                interface = malloc(strlen(optarg) + 1);
                strcpy(interface, optarg);
                break;
            case 'r':
                tracefile = malloc(strlen(optarg) + 1);
                strcpy(tracefile, optarg);
                break;
            case 'l':
                logfile = malloc(strlen(optarg) + 1);
                strcpy(logfile, optarg);
                break;
            case 'h':
                PrintUsage(argc, argv);
                exit(0);
                break;
            default :
                PrintUsage(argc, argv);
                exit(0);
                break;
        } /* switch */
    } /* -- while -- */

    printf("\n\n------------------------------\n");
    printf("Reference Nic Performance Test\n");
    printf("------------------------------\n\n\n");

    /* Open the session in promiscuous mode */
    if (interface != NULL) {
        descr = pcap_open_live(interface, 65536, 1, 0, errbuf);
        if(descr == NULL){
            printf("pcap_open_live(): %s\n", errbuf);
            exit(1);
        }
        if ((logfile != NULL)  && ( (file = pcap_dump_open(descr, logfile)) != NULL) ) {
            printf("The received packets will be logged in %s\n\n\n", logfile);
        } else if (logfile == NULL)
            printf("The received packets will not be logged.\n\n\n");
        else {
            printf("failed to open dumpfile %s : %s\n", logfile, errbuf);
            return -1;
        }
    } else if (tracefile != NULL) {
        descr = pcap_open_offline(tracefile, errbuf);
        if (descr == NULL) {
            printf("Error opening trace %s\n", errbuf);
            return -1;
        }
    } else {
        printf("ERROR: no interface or tracefile is selected!\n");
        return -1;
    }

    /* Grab a packet */
    pcap_loop(descr,  -1, process_packet, (u_char *)state);

    printf("Jacked Packet Length [%d]\n", state->count);
    /* And close the session */
    pcap_close(descr);
    fclose(state->file);
    return(0);
}

struct __attribute__((__packed__)) ts_record {
    uint16_t last_padding;
    uint32_t rx_seq;
    uint32_t tx_seq;
    uint64_t rx_ts;
    uint64_t tx_ts;
    uint32_t upper_padding;
    uint16_t port;
};

void
process_packet(u_char *arg, const struct pcap_pkthdr* pkthdr, const u_char* packet) {
    struct ts_record *rec = NULL;
    int ix = 32;
    struct processing_state *state = (struct processing_state *) arg;
    state->count++;
    uint16_t temp;


    if (ix + sizeof(struct ts_record) < pkthdr->caplen) {
        ix += sizeof(struct ts_record);
        rec = (struct ts_record *) (packet + ix);
    }

    if (rec == NULL) return;

    if ((state->curr_port != 0) && (state->curr_port != rec->port) &&
            (state->curr_port != 0xaaaa) && (rec->port != 0xaaaa)) {
        printf("[%d] packet change from %x to %x\n", state->count, state->curr_port, rec->port);
        state->search_mode = 1;
    }
    state->prev_port = state->curr_port;
    state->curr_port = rec->port;

    if (state->search_mode) {
//        printf("[%d] searching packet ....\n", state->count);
        ix = pkthdr->caplen;
        while (ix - sizeof(*rec) > 32) {
            ix -= sizeof(*rec);
            rec = (struct ts_record *) (packet + ix);
            if (rec->upper_padding != 0xcafecafe) {
                // TODO check that we are not in last record still
                if (ix + sizeof(*rec) >= pkthdr->caplen) {
//                    printf("[%d] discarding switch measurement\n", state->count);
                    state->search_mode = 0;
                    break;
                }
                //
                rec = (struct ts_record *) (packet + ix + sizeof(*rec));
                printf("[%d] prev_rx_ts  = 0x%016lx, rx_ts = 0x%016lx\n", state->count, state->prev_rx_ts, rec->rx_ts);
                fprintf(state->file, "%u %016lx %016lx %lu %.09f\n",
                        state->count, state->prev_rx_ts, rec->rx_ts,
                        (rec->rx_ts - state->prev_rx_ts),
                        ((double)(rec->rx_ts - state->prev_rx_ts)) * ((double)(625 * 1e-8)));
                state->search_mode = 0;
                break;
            }
        }
    } else {
        ix = pkthdr->caplen;
        while (ix - sizeof(*rec) > 32) {
            ix -= sizeof(*rec);
            rec = (struct ts_record *) (packet + ix);
            if (rec->upper_padding == 0xcafecafe) {
                state->prev_rx_ts = rec->rx_ts;
                break;
            }
        }
    }
    return;
}
