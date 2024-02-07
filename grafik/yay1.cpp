#include <graphics.h>
#include <math.h>
extern int x,y,k,r,rb,rk,rx,ry;
extern void otele_olcek(int *x,int *y,int *k,int *r,int *rb,int *rk,int *rx,int *ry);
void yay1(int cx,int cy,int r) {
   

    float delta = 3.14 / 180;
    float deltacos = cos(delta);
    float deltasin = sin(delta);
    float xe = r, ye = 0.0;
    float xnext, ynext;
    float aci = 30;

    while (aci < 90) {
        putpixel(cx+xe, cy-ye, WHITE);

       
        xnext=xe*deltacos-ye*deltasin;
        ynext=xe*deltasin+ye*deltacos;
        xe=xnext;
        ye=ynext;

      
        aci++;
    }
	otele_olcek(&x,&y,&k,&r,&rb,&rk,&rx,&ry);
    delay(5000);
    
}
