#include <graphics.h>
#include <cstdlib>  
extern int x,y,k,r,rb,rk,rx,ry;
extern void otele_olcek(int *x,int *y,int *k,int *r,int *rb,int *rk,int *rx,int *ry);
void Bkare1(int cx,int cy, int k){
	for (int x=0;k>=x;x++){
			putpixel(x+cx,cy,BLUE);
			putpixel(x+cx,cy+k,BLUE);
		
	}
	for (int y=0;k>=y;y++){
			putpixel(cx,cy+y,BLUE);
			putpixel(cx+k,cy+y,BLUE);
}
otele_olcek(&x,&y,&k,&r,&rb,&rk,&rx,&ry);
delay(5000);
}

