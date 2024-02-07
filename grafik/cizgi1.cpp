#include <graphics.h>
#include <cstdlib>  
extern int x,y,k,r,rb,rk,rx,ry;  
extern void otele_olcek(int *x,int *y,int *k,int *r,int *rb,int *rk,int *rx,int *ry);
void cizgi1(int cx,int cy,int x1,int y1, int x2, int y2) {
 
	int deltax=abs(x2-x1);
	int deltay=abs(y2-y1);
	int xileri,yileri;
	
	int x=x1,y=y1;

	int error=deltax/2;
	for (int i=0;deltax>i;i++){
		x+=1;
		error-=deltay;
		if (error<0){
			y+=1;
			error+=deltax;
		}
		putpixel(cx+x,cy+y,WHITE);
	}
otele_olcek(&x,&y,&k,&r,&rb,&rk,&rx,&ry);
    delay(5000);
   
    
}
