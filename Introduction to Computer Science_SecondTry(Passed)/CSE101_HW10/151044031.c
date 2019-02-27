#include <stdio.h>
#include <time.h>
/* Vefik Firat Akman 151044031 */
/* BIL101 - HW10 */
/* Bu program cilginlar gibi cikolata yiyen
ayse ve mehmedin hangisinin daha cok cikolata yedigini
hesaplamak icin yazilmistir.*/

#define SIZE 6 /* Kac tane cikolata oldugudur.
Test icin farkli sizelar denenebilir.
Kolay degisilsin diye boyle yaptim. */

int kimNeKadarYedi(int array[], int size);
int arrayFiller(int array[],int size);
void arrayEkranaBasma(int array[], int size);
void printKazanan(int mehmet,int ayse);
int test(int size);

int main(){
	srand(time(NULL));
	test(SIZE);
} 
int test(size){
	/* Bu fonksiyon yazılan fonksiyonlarin
	test edilmesi icin vardir.*/
	int cikolatalar[100];

	arrayFiller(cikolatalar,size);
	arrayEkranaBasma(cikolatalar,size);
	kimNeKadarYedi(cikolatalar,size);
}
int arrayFiller(int array[],int size){
	/* Bu fonksiyon cikolata sayisi kadar
	rastgele cikolata vermektedir. Arrayi
	random doldurmaktadir.*/
	int i;
	for(i=0; i <size; ++i){
		array[i] = rand() % 11 + 1;
	}

	return 0;
}
void arrayEkranaBasma(int array[], int size){
	/* Bu fonksiyon cikolatalarin boyutunu
	ekrana basmaktadir. Arrayin elemanlarini
	ekrana basmaktadir.*/
	int i;
	for(i=0; i <size; ++i){
		printf("%d ",array[i]);
	}
	printf("\n");
}
int kimNeKadarYedi(int array[],int size){
	/* Bu fonksiyon kimin ne kadar yedigini
	hesaplar.*/
	int a;
    int m = 0;
    int aYedi = 0;
    int mYedi = 0;
    int temp = 0;
    
    a = size-1;

	while(1){
	    
	    
	    array[m] -= 2;
	    array[a] -= 1;
	    if(array[m] <= 0 && temp <= size){
	        ++m;
	        ++mYedi;
	        ++temp;
	    }
	    if(array[a] <= 0 && temp != size){
	        --a;
	        ++aYedi;
	        ++temp;
	    }
	    if(temp >= size){
	    	break;
	    }

	    
	}
	if(aYedi == 0 && size > 1 ){
		++aYedi;
		--mYedi;
	}
	if(mYedi == 0 && size > 1){
		++mYedi;
		--aYedi;
	}
	printKazanan(mYedi,aYedi);

	    return 0;
}
void printKazanan(int mehmet,int ayse){
	/* Bu fonksiyon kimin ne kadar
	yedigini alir. Ekrana basar. Kim
	daha cok yemisse de onu kazanan olarak
	ekrana basar.*/
	printf("Mehmet: %d\n",mehmet );
	printf("Ayşe: %d\n",ayse );
	if(mehmet > ayse){
		printf("Kazanan: Mehmet\n");
	}
	else if(mehmet < ayse){
		printf("Kazanan: Ayşe\n");
	}
	else{
		printf("Kazanan: Berabere\n");
	}
}
