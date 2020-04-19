#!/bin/sh
cd darknet
make
cd ..
cd data/mnist
python download_and_convert_mnist.py
cd ../..
mkdir -p /tmp/backup
