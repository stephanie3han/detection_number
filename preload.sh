#!/bin/sh
cd darknet
make
cd ..
#cd data/mnist
#python download_and_convert_mnist.py
#cd ../..
cd data
wget www.aiforu.com/image_static/number.zip
unzip number.zip
cd ..
mkdir -p /tmp/backup
