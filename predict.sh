#!/bin/sh
./darknet/darknet classifier predict cfg/number.dataset cfg/number_lenet.cfg ./backup/number_lenet_5965.weights  #./backup/number_lenet.weights $1 #data/number/images/v_00000_c7.png 
