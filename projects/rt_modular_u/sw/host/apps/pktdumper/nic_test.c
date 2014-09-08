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


char  *logfile = 0;
pcap_dumper_t* file;
const u_char *packet;
struct pcap_pkthdr hdr;
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

void ex_programm(int sig){

	printf("Received Packets: %d\n",counter);
	if(logfile!=NULL)
    		pcap_dump_close(file);
    	//(void)signal(SIGINT, SIG_DFL);
	exit(0);
}


/*************************************************************************
    Function: pcap_my_callback
 
    Description:
        PCAP callback.

**************************************************************************/



void pcap_my_callback(unsigned char* arg, const struct pcap_pkthdr * pkt_hdr, unsigned char const* packet) 
{
    struct pcap_pkthdr h;   
    int size;
    int len;  

    (void)signal(SIGINT,ex_programm);
  

    len = pkt_hdr->caplen+4;

    
    size = min(SR_PACKET_DUMP_SIZE, len);
    h.ts.tv_sec = pkt_hdr->ts.tv_sec;
    h.ts.tv_usec = pkt_hdr->ts.tv_usec;  
    h.caplen = pkt_hdr->caplen;
    h.len = (size < SR_PACKET_DUMP_SIZE) ? size : SR_PACKET_DUMP_SIZE;
 
    counter++;

    if(logfile!=NULL)
    	pcap_dump((u_char*)file,&h,(unsigned char const*)(packet));
}

//----------------------------------------------------------------------------
void another_callback(u_char *arg, const struct pcap_pkthdr* pkthdr, const u_char* packet);

int main(int argc, char *argv[])
{
	
	char errbuf[PCAP_ERRBUF_SIZE];
	pcap_t *descr;
	u_char *p, *pack;
	int c;
        char  *interface = "interface";
	struct bpf_program fp;		/* The compiled filter */
	char filter_exp[] = "port 23";	/* The filter expression */
	bpf_u_int32 mask;		/* The netmask of our sniffing device */
	bpf_u_int32 net;		/* The IP of our sniffing device */
	struct pcap_pkthdr header;	/* The header that pcap gives us */
	const u_char *packet;		/* The actual packet */
	int colpack;

    	(void)signal(SIGINT,ex_programm);

        while ((c = getopt(argc, argv, "i:l:")) != EOF)
        {
         switch (c)
         {
            case 'i':
                interface = optarg;
                break;
            case 'l':
                logfile = optarg;
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

   
        if(strcmp(interface,"interface")==0){
		printf("ERROR: no interface is selected!\n");
                return 1;
        }

        
        printf("\n\n------------------------------\n");
        printf("Reference Nic Performance Test\n");
        printf("------------------------------\n\n\n");

        if(logfile!=NULL)
                printf("The received packets will be logged in %s\n\n\n",logfile);
        else
                printf("The received packets will not be logged.\n\n\n");

	/* Open the session in promiscuous mode */
        descr = pcap_open_live(interface, 65536, 1, 0, errbuf);
        if(descr == NULL){
                printf("pcap_open_live(): %s\n", errbuf);
                exit(1);
        }

        if(logfile!=NULL){
                file = pcap_dump_open(descr, logfile);
                if(file == NULL){
                        printf("pcap_dump_open(): %s\n", errbuf);
                        exit(1);
                }
        }	

	/* Compile and apply the filter
	if (pcap_compile(descr, &fp, filter_exp, 0, net) == -1) {
		fprintf(stderr, "Couldn't parse filter %s: %s\n", filter_exp, pcap_geterr(descr));
		return(2);pcap_t *p
	}

	if (pcap_setfilter(descr, &fp) == -1) {
		fprintf(stderr, "Couldn't install filter %s: %s\n", filter_exp, pcap_geterr(descr));
		return(2);
	}*/

	/* Grab a packet */


        pcap_loop(descr,  30, another_callback, NULL);
	packet = pcap_next(descr, &header);
	/* Print its length */
	printf("Jacked Packet Length [%d]\n", header.len);

	/* And close the session */
	pcap_close(descr);
	return(0);


	pcap_loop(descr,-1,pcap_my_callback, NULL);

	return 0;
}

void another_callback(u_char *arg, const struct pcap_pkthdr* pkthdr, const u_char* packet)
{
    unsigned long int i, exp_seq, arr_seq, time_start, time_stop;
    double latency;
    static int count=0;
    printf("Batch Count: %d\n", ++count);    /* Number of Packets */
//    printf("Recieved Packet Size: %d\n", pkthdr->len);    /* Length of header */
    for (i = 34; i<pkthdr->len; i += 32)
    {
        exp_seq = (((packet[i+3])*0x1000000)+((packet[i+2])*0x10000)+((packet[i+1])*0x100)+(packet[i])) ;
        arr_seq = (((packet[i+7])*0x1000000)+((packet[i+6])*0x10000)+((packet[i+5])*0x100)+(packet[i+4]));
        time_stop =  ((packet[i+15]*0x100000000000000)+(packet[i+14]*0x1000000000000)+(packet[i+13]*0x10000000000)+(packet[i+12]*0x100000000)+(packet[i+11]*0x1000000)+(packet[i+10]*0x10000)+(packet[i+9]*0x100)+(packet[i+8]));
	time_start = ((packet[i+23]*0x100000000000000)+(packet[i+22]*0x1000000000000)+(packet[i+21]*0x10000000000)+(packet[i+20]*0x100000000)+(packet[i+19]*0x1000000)+(packet[i+18]*0x10000)+(packet[i+17]*0x100)+(packet[i+16]));
        if (exp_seq == arr_seq)
	{printf("Packet Number: %d\n",exp_seq);}
	else{
	printf("Expected Packet Seq: %d\n", exp_seq);
	printf("Arrived Packet Seq: %d\n", arr_seq);}
	latency= (time_stop - time_start)*6.1;
        printf("Latency: %f ns\n\n", latency);
    }
    
   /* printf("Payload:\n");                     /* And now the data 
    for(i=34;i<pkthdr->len;i++) {
            printf("%x ",packet[i]);          /* Print it
    }*/
}

