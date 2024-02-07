#include <graphics.h>
#include <math.h>
extern int x,y,k,r,rb,rk,rx,ry;
extern void otele_olcek(int *x,int *y,int *k,int *r,int *rb,int *rk,int *rx,int *ry);
void disk1(int cx, int cy, int rb,int rk) {
    
	for(int y=-rb;rb>=y;y++){
		for(int x=-rb;rb>=x;x++){
			if(x*x+y*y<=rb*rb){
				putpixel(x+cx,y+cy,YELLOW);
			}
		}
	}
	for(int y=-rk;rk>=y;y++){
		for(int x=-rk;rk>=x;x++){
			if(x*x+y*y<=rk*rk){
				putpixel(x+cx,y+cy,0);
			}
		}
	}
	otele_olcek(&x,&y,&k,&r,&rb,&rk,&rx,&ry);
    delay(5000);
  
}
