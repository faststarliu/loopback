cd $(dirname $0)
rm -rf unittest_build
mkdir  unittest_build
cd     unittest_build
fuse -incremental -prj ../simple_tx_tb.prj -o simple_tx_tb.exe work.testbench 
./simple_tx_tb.exe -gui -tclbatch ../simple_tx_tb.tcl
