all:	dat run	pdf	

dat:
	sh log2dat.sh
run:
	gnuplot run_65
	gnuplot run_127
	gnuplot run_129

pdf:	
	sh ps2pdf.sh

clean:
	rm -f *.ps 
	rm -f *.pdf
	rm -f *.dat
