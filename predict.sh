#!/bin/sh
./darknet/darknet classifier predict cfg/number.dataset cfg/number_lenet.cfg ./backup/number_lenet.weights data/number/images/v_00000_c7.png
