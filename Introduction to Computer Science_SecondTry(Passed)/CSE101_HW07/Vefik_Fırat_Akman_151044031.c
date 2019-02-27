#include <stdio.h>
/* Vefik Firat Akman 151044031 */
/* BIL101 - HW07*/
/*Bu program kullanicidan bir sayi alir.
Ve bu sayinin varsa Arkdas sayisini bulur ve
ekrana basar. Yoksa arkadas sayisi olmadigini 
soyler. */

/* Start Of Function's Prototips */
int friendNumbers(int number1);
int ebob(int num);
/* End Of Function's Prototips */


int main(){

	int num1,num2;
	int sonuc;

	printf("Arkadasını bulmak istediginiz sayıyı girin: \n");
	scanf("%d",&num1);
	/*Kullanicidan sayiyi alir. Ve fonksiyona gonderir.*/
	friendNumbers(num1);
		
}

int friendNumbers(int number1){
	/*Bu fonksiyon parametrede ki sayinin 
	arkadas sayisini varsa bulur. Ve ekrana yazar.
	Yoksa olmadigini ekrana yazar. */
	int toplam1,toplam2;
	int i;

	toplam1 = ebob(number1);
	toplam2 = ebob(toplam1);

	if(number1 == toplam2){
		printf("%d’nin arkadas sayısı: %d\n",number1,toplam1);
		return 1;
	}
	else{
		printf("%d sayısının arkadas sayısı bulunmamaktadır.\n",number1);
		return 0;
	}

}

int ebob(int num){
	/*Bu fonksiyon parametrede ki sayinin carpanlarini bulur.
	ve carpanlarinin toplamini return eder. */

	int i;
	int toplam;
	toplam = 0;

	for(i = 1; i< num;++i){
		if( num % i == 0){				
			toplam += i;
			
		}
	}
	return toplam;

}