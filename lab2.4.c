#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>


int main(void) {
	setlocale(LC_ALL, "RUS");

	double array[2][2] = {{1, 2}, {3, 4}};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%lf ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	int storage = array[0][0];
	array[0][0] = array[1][1];
	array[1][1] = storage;
	storage = array[0][1];
	array[0][1] = array[1][0];
	array[1][0] = storage;


	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%lf ", array[i][j]);
		}
		printf("\n");
	}//измененная матрица
	printf("\n");

	int _getch();
	return 0;
}