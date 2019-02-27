#include <stdio.h>
#define PI 3.14 // PI 3.14 yapılır.

/* Vefik Firat Akman - 151044031 */
		/* Bil101 - HW08 */

/* Start Of Prototype */
int pow (int x, int n);
int factorial (int n);
/* End Of Prototype */


int pow (int x, int n){
	/* Bu fonksiyon verilen X sayisinin N'inci kuvvetini bulur. */
    int temp;
    int a;
    temp = x;

    
    if(n == 0){
    	return 1;
    }
    
    else{

        for(a=1; a < n;++a){
            x = x*temp;
        }
            
        return x;
    }	
}

int factorial (int n){
   /* Bu fonksiyon verilen N sayisinin faktoriyelini bulur. */
    int i;
    int b;
    
    b = 1;
    
    if(n == 0){
        return 1;
    }
    
    else{
        while( n !=0){
	        b *= n;   
	        n -= 1;
        }
    }
    return b;
}

double sin (double x){
	/* Bu fonksiyon verilen X sayisinin sinx degerini bulur */

	int i,a,flag;
	int number;
	flag = 1;

	double radyanX;
	int Rx;
	double powX;
	double sonuc;
	double term;
	
	int xInt, xIntPow, thousandPow;
	double fac;

    /* Bu kisim X sayisi 360 dan buyukse 0-360 arasina indirir. */
	while(x > 360){
		x = x - 360;
	}
	/* ------------------- */

	/* Bu kisim X sayisi 90 dan buyukse 0-90 arasina indirir. */
	if(x > 90 && x <= 180){
		x = 90 - ( x - 90);
	}
	if(x >180 && x <= 270){
		x = x -180;
		flag = -1; // sin bu aralikta - degerlidir.
	}
	if(x > 270 && x <= 360){
		x = 360 - x;
		flag = -1; // sin bu aralikta - degerlidir.
	}
	/* ----------------------- */

	/* Tip donusumleri yapilir. */
	radyanX = (x*PI)/180;
	Rx = (int)(radyanX*10);
	sonuc = ((double)Rx)/10;
	xInt = radyanX * 100;
	/* ----------------------- */

	printf("(Note: We don't recommended bigger than 15 and smaller than 4 for number of terms) \n");
	printf("(Note2: İf number of terms <7, Sin30,31,32 = 0.5 & sin90 = 1.0 \nbut it's >7 sin30 = 4,99 sin31 = 5,001 ...)\n");
	printf("Please Enter Number Of Terms: \n");
	scanf("%d",&number);

	if(number <4 || number > 15){
		printf("Probably you will get wrong result.\n");
	}

	/* Hesaplama islemi kullanicidan alinan term sayisina göre yapilir. */
	for(i = 3,a = 0; i < number; i = i+2,++a){
		xIntPow = pow(xInt,i);
		thousandPow = powa(100,i);
		powX = xIntPow / thousandPow;
		
		fac = factorial(i);

		term = powX / fac;
		
		if(a%2 == 0){
			sonuc -= term;
		}
		else{
			sonuc += term;
		}
	}
	/* ------------------------------------- */

	sonuc *= flag; // sinx - degerli araliktaysa sonuc negatife doner.
	return sonuc;
}

/* Start Of Main */
int main(){

	double aci;
	double sinSonuc;

	printf("Lutfen Aci Giriniz.\n");
	scanf("%lf",&aci);

	sinSonuc = sin(aci);
	printf("Sonuc: %lf\n",sinSonuc );

}
/* End Of Main */