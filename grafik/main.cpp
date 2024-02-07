#include<graphics.h>
#include <math.h>
#include <stdlib.h>

extern void cizgi1(int cx,int cy ,int x1,int y1, int x2, int y2);
extern void egri1(int cx,int cy,int r);
extern void yay1(int cx,int cy,int r);
extern void cember1(int cx,int cy,int r);
extern void daire1(int cx,int cy,int r);
extern void disk1(int cx,int cy,int rb,int rk);
extern void Dkare1(int cx,int cy,int k);
extern void Bkare1(int cx,int cy,int k);
extern void Bucgen1(int cx,int cy,int k);
extern void Ducgen1(int cx,int cy,int k);
extern void Delips1(int cx,int cy,int rx,int ry);
extern void Belips1(int cx,int cy,int rx,int ry);
void otele_olcek(int *x,int *y,int *k,int *r,int *rb,int *rk,int *rx,int *ry);

int x=200,y=200,k=70,r=80,rb=100,rk=50,rx=80,ry=40;



void otele_olcek(int *x,int *y,int *k,int *r,int *rb,int *rk,int *rx,int *ry) {
    int key;

    while (!kbhit()) {
        key = getch();
        
        if (key>=48 && key<=57) {
            int sayi = key - 48;

            switch (sayi) {
                case 8:  
                    (*y)-=30;
                    break;
                case 2:  
                    (*y)+=30;
                    break;
                case 6:  
                    (*x)+=30;
                    break;
                case 4:  
                    (*x)-=30;
                    break;
                case 7: 
                    (*k)+=10;
                    (*r)+=10;
                    (*rb)+=10;
                    (*rk)+=5;
                    (*rx)+=5;
                    (*ry)+=5;
                    break;
                case 3: 
                    (*k)-=10;
                    (*r)-=10;
                    (*rb)-=10;
                    (*rk)-=5;
                    (*rx)-=5;
                    (*ry)-=5;
                    break;
                default:
                    break;
            }

            for (int j = 0; j < 500; j++) {
                for (int i= 0;i < 500;i++) {
                    putpixel(i,j, 0);
                }
            }

    //cizgi1(*x,*y,0,7,200,607);
    //egri1(*x,*y,*r);
	//yay1(*x,*y,*r);
    //cember1(*x,*y,*r);
    //daire1(*x,*y,*r);
    disk1(*x,*y,*rb,*rk);
	//Dkare1(*x,*y,*k);
	//Bkare1(*x,*y,*k);
	//Bucgen1(*x,*y,*k);
	//Delips1(*x,*y,*rx,*ry);
	//Belips1(*x,*y,*rx,*ry);
	
        }
    }
}
int main(){
	
	initwindow(500,500);
	 
	//oteleme ve olcekleme olmasý için aþaðýdan istediðiniz þelil ile otele_olcek fonksiyonundaki þekil ayný olmalý
	
    //cizgi1(x, y,0,7,200,607);
    //egri1(x,y,r);
	//yay1(x,y,r);
    //cember1(x,y,r);
    //daire1(x,y,r);
    disk1(x,y,rb,rk);
	//Dkare1(x,y,k);
	//Bkare1(x,y,k);
	//Bucgen1(x,y,k);
	//Delips1(x,y,rx,ry);
	//Belips1(x,y,rx,ry);

	
	otele_olcek(&x,&y,&k,&r,&rb,&rk,&rx,&ry);
 	getch();

    closegraph();
	
    return 0;
}
