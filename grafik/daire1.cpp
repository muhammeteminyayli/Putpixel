#include <graphics.h>
#include <math.h>
extern int x,y,k,r,rb,rk,rx,ry;
extern void otele_olcek(int *x,int *y,int *k,int *r,int *rb,int *rk,int *rx,int *ry);
void daire1(int cx, int cy, int r) {
    
	for(int ye=-r;r>=ye;ye++){
		for(int xe=-r;r>=xe;xe++){
			if(xe*xe+ye*ye<=r*r){
				putpixel(xe+cx,ye+cy,GREEN);
			}
		}
	}
otele_olcek(&x,&y,&k,&r,&rb,&rk,&rx,&ry);
    delay(5000);
  
}
