#!/bin/bash

for tvalue in 3 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 38 40 45 50 55 60 65 70 75 80 85 90 95 98 
do
	make clean

	sed s/T_VALUE/$tvalue/ xflow.tmp > xflow.test

	\cp ./xflow.test ./hw/nf10/xflow.opt

	make

	\cp ./hw/implementation/xflow.log ./xflow_$tvalue.log
	\cp ./hw/implementation/system.bit ./system_$tvalue.bit
done 

