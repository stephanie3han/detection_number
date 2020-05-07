# -*- coding: utf-8 -*
import os
paths="/home/hanxia/下载/a_object/darknet_mnist/data/number/images/"
f=open('number.valid.list','w')
filenames=os.listdir(paths)
filenames.sort()
for filename in filenames:
    out_path="./data/number/images/" + filename
    print(out_path)
    f.write(out_path+'\n')
f.close()


