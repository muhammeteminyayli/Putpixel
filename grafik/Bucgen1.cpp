#include <graphics.h>
#include <math.h>
#include <cstdlib>  
extern int x,y,k,r,rb,rk,rx,ry;
extern void otele_olcek(int *x,int *y,int *k,int *r,int *rb,int *rk,int *rx,int *ry);
void Bucgen1(int cx, int cy, int k) {
	
    int x1 = cx;
    int y1 = cy;
    int x2 = cx+k;
    int y2 = cy;
    int x3 = cx+k/2;
    int y3 = cy-(k*sqrt(3.0)/2);

    for (int i = 0; i <= k; i++) {
        putpixel(x3+i/2,y3+i*sqrt(3)/2,WHITE);
        putpixel(x3-i/2,y3+i*sqrt(3)/2,WHITE);
        putpixel(x1+i,y2,WHITE);
    }
   
otele_olcek(&x,&y,&k,&r,&rb,&rk,&rx,&ry);
    delay(5000);
}
