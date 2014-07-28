#!/bin/bash

for tvalue in 2 3 4 5 6  
do
	make clean

	sed s/T_VALUE/$tvalue/ xflow.tmp > xflow.test

	\cp ./xflow.test ./hw/nf10/xflow.opt

	make

	\cp ./hw/implementation/xflow.log ./xflow_$tvalue.log
	\cp ./hw/implementation/system.bit ./system_$tvalue.bit
done 

