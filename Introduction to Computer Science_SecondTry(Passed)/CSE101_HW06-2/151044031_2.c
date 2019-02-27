#include <stdio.h>
/* Vefik Firat Akman 151044031 */
/* BIL101 - HW06_II */
/* Bu program kullaniciya 3 secenek sunmaktadir. İlk ikisi farkli
islevler gerceklestirmekte olup son secenek programdan cikmaya yarar.
1. secenegi secersiniz ardindan gireceginiz yukseklik degerinde ki
elmasi ekrana basacaktir. 2. secenegi secerseniz kodu yazan
ogrencinin bilgileri ekrana basilacaktir. 3.secenegi sifira
basarak secebilirsiniz. Bu da programi sonlandiracaktir. */


/* Prototiplerin Baslangaci */
void elmasCiz();
void prog();
/* Prototiplerin Sonu */


/* Main Fonksiyonu Baslangici */
int main(){

	prog();
	
}
/* Main Fonksiyonu Sonu */

void prog(){
/* Programin ana isleyisi bu fonk uzerinde gerceklesir.*/
	int choose = 1;

	while(choose != 0){
		printf("--- MENU ---\n");
		printf("1. Yıldızlardan elmas ciz\n");
		printf("2. Ogrenci bilgisini goster\n");
		printf("0. Cikis\n");
		scanf("%d",&choose);	
		printf("Sectiginiz: %d\n",choose);


		if(choose == 1){
			elmasCiz();
		}
		else if(choose == 2){
			printf("Vefik Fırat Akman - 151044031\n");
		}
		else if(choose == 0){
			printf("By By!\n");
		}
		else{
			printf("Hatali Secim\n");
		}	

	}

}

void elmasCiz(){
/* Bu program kullanicidan bir yukseklik alir. Ve bu
yukseklige sahip bir elması ekrana basar. */
	int height, i, k, space = 1;

	printf("Please Enter Height: \n");
	scanf("%d", &height);

	space = height - 1;


	for (k = 0; k < height/2 + 1; k++){
		
					
		for (i = 0; i < space-(height/2) + 1; i++){
			printf(" ");
		}

		space--;

		for (i = 0; i < 2*k-1; i++){
			printf("*");
		}

		printf("\n");
	}
	
	for (i = 0; i < height; i++){
			printf("*");
		}
		printf("\n");
		
	space = 1;

	for (k = 0; k < height/2	; k++){
	
		for (i = 0; i < space; i++){
			printf(" ");
		}

		space++;

		for (i = 0 ; i < (height-2)-(2*k); i++){
			printf("*");
		}

		printf("\n");
	}


}
/* Programin Sonu.*/

