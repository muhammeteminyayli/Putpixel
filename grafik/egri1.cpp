#include <graphics.h>
#include <math.h>
#include <cstdlib>  
extern int x,y,k,r,rb,rk,rx,ry;
extern void otele_olcek(int *x,int *y,int *k,int *r,int *rb,int *rk,int *rx,int *ry);
void egri1(int cx,int cy,int r){
	for (float i=0.0; i<=1.0; i+=0.001) {
        float theta = i*2*3.14159;  
        float x=cx+r*cos(theta);  
        float y=cy-r*pow(sin(theta),2);
        putpixel(x,y,5);
    }
    otele_olcek(&x,&y,&k,&r,&rb,&rk,&rx,&ry);
    delay(5000);}
