cd $(dirname $0)
rm -rf unittest_build
mkdir  unittest_build
cd     unittest_build
fuse -incremental -prj ../osnt_timestamp_tb.prj -o osnt_timestamp_tb.exe work.testbench 
./osnt_timestamp_tb.exe -gui -tclbatch ../osnt_timestamp_tb.tcl
