#include <stdio.h>
#include <time.h>
#include <math.h>
/* Vefik Firat Akman 151044031 */
/* BIL101 - HW09 */
/* Bu program size'i 20 olan 2 array icin sunlari yapmaktadir:
	* 2 Array'i de random doldurur.
	* 2 Array'in de ayri ayri L0 Normlarini hesaplar
	* 2 Array'i toplar 3. array'e atar.
	* Dot product'i bulur
	* Cosine Similarity'i bulur.
	* En son bulduklarini ekrana yazar.*/


int main(){
	srand(time(NULL));

	int arr1[20],arr2[20],arrT[20];
	int i;
	int size = 20;
	int v1LO = 0; int v2LO = 0;
	double dotResult,result;
	int arr1S = 0; int arr2S = 0;

	/* Set arr1 and arr2 Array's Elements To Random Number in [0,10] */
	for(i=0; i <size; ++i){
		arr1[i] = rand() % 11;
		arr2[i] = rand() % 11;
	}
	/* ------------------------------------------------------------- */

	/* Calculute L0 norm for arr1 and arr2 */
	for(i=0; i <size; ++i){
		if(arr1[i] != 0){
			++v1LO;
		}
		if(arr2[i] != 0){
			++v2LO;
		}
	}
	/* -------------------------------- */

	/* Calculute L0 norm for arr1 and arr2 */
	for(i=0; i <size; ++i){
		arrT[i] = arr1[i] + arr2[i];
	}
	/* -------------------------------- */

	/* START OF CALCULATE COSİNE SİMİLARİTY */

	/* Calculute Dot Product */
	for(i=0; i <size; ++i){
		dotResult += arr1[i] * arr2[i];
	}
	/* --------------------- */

	/* Calculute ||Array|| */
	for(i=0; i <size; ++i){
		arr1S += arr1[i] * arr1[i];
		arr2S += arr2[i] * arr2[i];
	}
	/* --------------------- */

	/* Calculute result */
	result = dotResult / (sqrt(arr1S) * sqrt(arr2S));
	/* ---------------- */

	/* ------- END OF CALCULATE COSİNE SİMİLARİTY -------- */
	

	/* --------------- START OF PRİNT --------------- */
	
	/* ----- Print V1 ---- */
	printf("Vektörler:\n");
	printf("v1 : %d",arr1[0]);
	for(i = 1; i < 20; ++i){
		printf(",%d",arr1[i]);
	}
	/* -------------------- */

	/* ----- Print V2 ---- */
	printf("\nv2 : %d",arr2[0]);
	for(i = 1; i < 20; ++i){
		printf(",%d",arr2[i]);
	}
	/* -------------------- */

	printf("\n");

	/* ----- Print L0 Norm ---- */
	printf("\nv1 L0 norm: %d\n",v1LO);
	printf("v2 L0 norm: %d\n",v2LO);
	/* -------------------- */

	printf("\n");
	
	/* ----- Print arrayT (V1+V2 Array) ---- */
	printf("v1 + v2 = %d",arrT[0]);
	for(i = 1; i < 20; ++i){
		printf(",%d",arrT[i]);
	}
	/* -------------------- */

	printf("\n");

	/* ----- Print Sim Result ---- */
	printf("\nsim(v1,v2): %lf\n\n",result);
	/* -------------------- */

	/* --------------- END OF PRİNT --------------- */

} 
