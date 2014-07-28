setMode -bs
setMode -bs
setMode -bs
setMode -bs
setCable -port auto
Identify -inferir 
identifyMPM 
assignFile -p 1 -file "/root/Documents/ya240/phyloopback/ver2507_2014/loopback-master/projects/loopback_2ports/bitfiles/july25_nt.bit"
Program -p 1 
setMode -bs
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -bs
saveProjectFile -file "/root/Documents/ya240/phyloopback/ver1206_2014/loopback-master/projects/loopback_1port/default.ipf"
setMode -bs
setMode -bs
deleteDevice -position 1
deleteDevice -position 1
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
