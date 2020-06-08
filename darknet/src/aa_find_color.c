#include "aa_find_color.h"
#include "utils.h"
#include "blas.h"
#include "cuda.h"
#include <stdio.h>
#include <math.h>
//由 image mask_to_rgb(image mask)可知，读取图片格式为RGB
//Blue范围 R(0,73) G(0,82) B(55,140)
//传入图像和w、h需要遍历的比例 
// 遍历范围则为： im.w * p_w, im.h * p_h, im.c

bool find_color(image im){ 
     int _w,_h; 
     int pixel_index_cR=0;
     int pixel_index_cG=0;
     int pixel_index_cB=0;
     int count = 0;
     bool result = false;
     float value_R =0.0;
     float value_G =0.0;
     float value_B =0.0;
     
     for(_h = 0; _h <im.h; ++_h){
         for(_w = 0; _w < im.w; ++_w){
             pixel_index_cR = _w + im.w * _h + im.w * im. h * 0;
             pixel_index_cG = _w + im.w * _h + im.w * im. h * 1;
             pixel_index_cB = _w + im.w * _h + im.w * im. h * 2; 
             value_R = im.data[pixel_index_cR]*255.; 
             value_G = im.data[pixel_index_cG]*255.; 
             value_B = im.data[pixel_index_cB]*255.;              
                         //  像素索引  
//像素索引= 当前列数 + 行像素数 * 当前行数 + 行像素数 * 列像素数 * 当前通道数            
             //printf("索引为%d的Pr = %3.0f\t",pixel_index_cR,im.data[pixel_index_cR]*255.);
             //printf("索引为%d的Pg = %3.0f\t",pixel_index_cG,im.data[pixel_index_cG]*255.);
             //printf("索引为%d的Pb = %3.0f\n",pixel_index_cB,im.data[pixel_index_cB]*255.);
             if( (value_R>0)&&(value_R<73)) {
                 if((value_G>0)&&(value_G<82)){
                     if((value_B>55)&&(value_B<140)){
                         count++;
                         //printf("count = %d\n",count);
                         
                            }
                      }
                 }

              if(count>10){
                 result = true; 
                  }else{
                 result = false;}     
	     }
     }

return result;
}
