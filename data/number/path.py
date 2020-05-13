# -*- coding: utf-8 -*
import os
paths="/home/hanxia/下载/a_object/darknet_mnist/data/number/test/"
f=open('number.train.list','w')
f1=open('number.valid.list','w')
filenames=os.listdir(paths)
filenames.sort()
i = 0
for filename in filenames:
    if i>959:
        out_path="./data/number/images/" + filename
        print(out_path)
        f.write(out_path+'\n')
        i = i+1
    else:
        out_path="./data/number/test/" + filename
        print(out_path)
        f1.write(out_path+'\n')
        i = i+1

f.close()
f1.close()


