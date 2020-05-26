#!/bin/sh

./darknet/darknet classifier demo cfg/number.dataset cfg/number_lenet.cfg ./backup/number_lenet_5965.weights 

#./darknet/darknet classifier predict cfg/number.dataset cfg/number_lenet.cfg ./backup/number_lenet_5965.weights 

# -idir /home/hanxia/下载/a_object/darknet_mnist/data/test/ -odir /home/hanxia/下载/a_object/darknet_mnist/darknet/results/ #./backup/number_lenet.weights $1 #data/number/images/v_00000_c7.png 
