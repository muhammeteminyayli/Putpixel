#include <graphics.h>
#include <math.h>
#include <cstdlib> 
extern int x,y,k,r,rb,rk,rx,ry;
extern void otele_olcek(int *x,int *y,int *k,int *r,int *rb,int *rk,int *rx,int *ry);
void Delips1(int cx,int cy,int rx,int ry){
	
	for (int y=-ry;y<=ry;y++) {
        for (int x=-rx;x<=rx;x++) {
            if ((x*x/(float)(rx*rx))+(y*y/(float)(ry*ry))<=1.0) {
                putpixel(cx+x,cy+y,RED);
            }
        }
    }
otele_olcek(&x,&y,&k,&r,&rb,&rk,&rx,&ry);
    delay(5000);
}
