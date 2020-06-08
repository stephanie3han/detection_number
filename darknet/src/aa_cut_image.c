#include "aa_cut_image.h"
#include "utils.h"
#include "blas.h"
#include "cuda.h"
#include <stdio.h>
#include <math.h>

//传入图像和w、h需要裁剪的比例         
// im.w * p_w, im.h * p_h, im.c

image cut_image(image im, float p_w, float p_h){
     image cut = make_image(im.w * p_w, im.h * p_h, im.c);
               // cut.w  cut.h cut.c cut.data  
     int _w,_h,_c; // for cut
     int ww,hh; // for im
     for(_c = 0;  _c < cut.c; ++_c){
        for(_h = 0; _h < cut.h; ++_h){
            for(_w = 0; _w < cut.w; ++_w){
                int cut_index = _w + cut.w * _h + cut.w * cut. h * _c; // cut 的像素索引  
//像素索引= 当前列数 + 行像素数 * 当前行数 + 行像素数 * 列像素数 * 当前通道数    
                //printf("src_index\n");
	  	ww= _w + (int)(im.w - p_w * im.w)/2;
		hh= _h + (int)(im.h - p_h * im.h)/2;
		
		//printf("After src_index\n");

                int src_index = ww + im.w * hh + im.w * im.h * _c; 
                //printf("src_index = %d\n", src_index);
               /////////////////////////
                cut.data[cut_index] = im.data[src_index];
                //printf("cut.data = im .data\n");
		     }
	     }
     }

return cut;
}
