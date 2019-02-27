#include <stdio.h>
/* Vefik Firat Akman 151044031 */
/* BIL101 - HW06 */
/* Bu program kullanicidan guncel hiz bilgisini ve hedef hiz bilgisini alir.
Guncel hiz hedef hizdan yuksekse, uyari yazisi ekrana cikar ve program biter.
Guncel hiz hedef hizdan kucukse guncel hiz hedef hiza ulasinciya kadar 
teker teker yukseltilir. Her yukseltmede ekrana guncel hiz degeri basilir. */
int main()
{

	int guncelHiz;
	int hedefHiz;

	/*Kullanicidan guncelHiz ve hedefHiz alinir. */
	printf("Lutfen Guncel Hizinizi Giriniz: ");
	scanf("%d",&guncelHiz);
	printf("Lutfen Hedef Hizinizi Giriniz: ");
	scanf("%d",&hedefHiz);
	
	/*Kullanicidan alinan guncelHiz ve hedefHiz ekrana basilir. */
	printf("Guncel Hiziniz: %d 'dir. Hedef Hiziniz: %d 'dir.\n", guncelHiz,hedefHiz);

	/*Kullanicidan alinan guncelHiz hedefHiz'dan buyuk mu kontrol edilir. Buyukse 
	if'in icine girilir. Ve uyari mesaji ekrana basilir.Kucukse Else'in icine girilir. */
	if(guncelHiz>hedefHiz){
		printf("Hiziniz hedef hizdan yuksektir.\n");
		return 0;
	}

	else{
		/* guncelHiz hedefHiz'a esit olana dek dongu calisir. Ve her seferinde guncelHiz'i
		bir arttirir. */
		while(hedefHiz > guncelHiz){
			printf("Guncel Hiz: %d\n",guncelHiz);
			++guncelHiz;
		}
		printf("Guncel Hiz: %d\n",guncelHiz);
		
		/*Kullanicidan alinan guncelHiz'in ve hedefHiz'in son hali ekrana basilir. */
		printf("Guncel Hiziniz(%d) Hedef Hiza(%d) ulasmistir.\n", guncelHiz,hedefHiz);
		
		return 1;
	}
	return 1;
}
/* Programin Sonu.*/