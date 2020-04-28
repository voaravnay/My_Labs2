#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "RUS");

	double array [10] = {7, 1, 3, 4, 1, 6, 7, 1, 1, 10};
	
	for (int i = 0; i < 10; i++) {
		printf("%lf ", array[i]);
	}
	printf("\n");
	
	
	
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += array[i];
	}//сумма чисел массива
	
	
	double num = sum / 10;
	
	//среднее арифметическое массива
	
	int begin = 0;
	int min = array[0];
	for (int i = 0; i < 10; i++) {
		if (array[i] < min) {
			min = array[i];
			begin = i;
		}	
	} //минимальное число массива
	
	
	int end = 0;
	for (int i = 0; i < 10; i++) {
		if (array[i] <= min) {
			end = i;
		}
	}//индекс последнего числа которе повторяется
	
	
	array[begin] = num;
	array[end] = num;

	
	for (int i = 0; i < 10; i++){
		printf("%lf ", array[i]);
	}//выводим измененный масив
	
	printf("\n");
	int _getch();
	return 0;
}
