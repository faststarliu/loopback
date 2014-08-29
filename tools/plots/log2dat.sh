for file in *.log;
do
	sort -n $file  >> $(basename $file .log).dat;
done
