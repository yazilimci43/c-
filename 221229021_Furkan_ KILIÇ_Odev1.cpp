#include<stdio.h>

int main(){
	
	
double ogrenci=22.1229021;
int ondalik=(ogrenci-22)*10000000;
printf("ondalik kisim=%d",ondalik);


int b1=ondalik%10;
ondalik=ondalik/10;
int b2=ondalik%10;
ondalik=ondalik/10;
int b3=ondalik%10 ;
ondalik=ondalik/10;
int b4=ondalik%10 ;
ondalik=ondalik/10;
int b5=ondalik%10;
ondalik=ondalik/10;
int b6=ondalik%10;
ondalik=ondalik/10;
int b7=ondalik%10;
ondalik=ondalik/10;
int toplam=b1+b2+b3+b4+b5+b6+b7;
printf("\ntoplam=%d\n",toplam);


int x=1;
int y=1;
float xkup=x*x*x;
float ykare=0.1*y*y;
double  sonuc=(x*x*x-toplam)/5;
printf("x=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",x,xkup,ykare,toplam,sonuc);
x=x+1;
xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-toplam)/5;
printf("x=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",x,xkup,ykare,toplam,sonuc);
x=x+1;
 xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-toplam)/5;
printf("x=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",x,xkup,ykare,toplam,sonuc);
x=x+1;
 xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-toplam)/5;
printf("x=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",x,xkup,ykare,toplam,sonuc);
printf("x=3  yakin oldugu icin x'i 3 aldik \n");
x=3;

 xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-0.1*y*y-toplam)/5;
printf("\ny=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",y,xkup,ykare,toplam,sonuc);

y=y+1;
 xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-0.1*y*y-toplam)/5;
printf("y=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",y,xkup,ykare,toplam,sonuc);
y=y+1;
 xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-0.1*y*y-toplam)/5;
printf("y=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",y,xkup,ykare,toplam,sonuc);
y=y+1;
 xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-0.1*y*y-toplam)/5;
printf("y=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",y,xkup,ykare,toplam,sonuc);
y=y+1;
 xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-0.1*y*y-toplam)/5;
printf("y=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",y,xkup,ykare,toplam,sonuc);
y=y+1;
 xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-0.1*y*y-toplam)/5;
printf("y=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",y,xkup,ykare,toplam,sonuc);
y=y+1;
xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-0.1*y*y-toplam)/5;
printf("y=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",y,xkup,ykare,toplam,sonuc);
y=y+1;
 xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-0.1*y*y-toplam)/5;
printf("y=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",y,xkup,ykare,toplam,sonuc);
y=y+1;
xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-0.1*y*y-toplam)/5;
printf("y=%d  icin islem (%.0f-%.3f-%d)/5=%.3f \n",y,xkup,ykare,toplam,sonuc);
y=y+1;
xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-0.1*y*y-toplam)/5;
printf("y=%d icin islem (%.0f-%.3f-%d)/5=%.3f \n",y,xkup,ykare,toplam,sonuc);
y=y+1;
xkup=x*x*x;
ykare=0.1*y*y;
sonuc=(x*x*x-0.1*y*y-toplam)/5;
printf("y=%d icin islem (%.0f-%.3f-%d)/5=%.3f \n",y,xkup,ykare,toplam,sonuc);

printf("sonuc olarak x=3 , y=10 ve toplam=17  oldugunda denkleme en yakin sonuca erisiriz");

  
  
  
 







 
 
	
	
	
	
	
	
	
	
	
	return 0;
	
}












