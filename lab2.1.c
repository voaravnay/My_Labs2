#include <stdio.h>
#include <math.h>
#include <conio.h>



int main(void) {
	
	int array [] = {1, 2, 3, 4, 1, 6, 7, 1, 9, 10};
	
	int g = sizeof(array) / 4; 
	//dlinna masiva
	
	for (int i = 0; i < g; i++) {
		printf("%d ", array[i]);
	}
	
	printf("\n");
	
	
	int sum = 0;
	for (int i = 0; i < g; i++) {
		sum += array[i];
	}//summa vsex hisel massiva
	
	
	float sa = sum / g;
	sa = (int)sa;
	//srednee arfmetiheskoe massiva
	
	//====================================================================================================================//
	int indexper = 0;
	int min = array[0];
	for (int i = 0; i < g; i++) {
		if (array[i] < min) {
			indexper = i;
		}	
	} // minimal`noe hislo massiva
	
	
	int indexpos = 0;
	for (int i = 0; i < g; i++) {
		if (array[i] <= min) {
			indexpos = i;
		}
	}//shitaem index povtornogo min hisla massiva s obratnoi storoni
	
	//====================================================================================================================//
	
	array[indexper] = sa;
	array[indexpos] = sa;

	
	for (int i = 0; i < g; i++){
		printf("%d ", array[i]);
	}
	
	printf("\n");
	int _getch();
	return 0;
}