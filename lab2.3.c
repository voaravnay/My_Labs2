#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "RUS");

	int array[10] = { 10, 2, 3, 4, 10, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");


	int min = array[0];
	for (int i = 0; i < 10; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}

	int num = 0;
	int max = array[0];
	for (int i = 0; i < 10; i++) {
		if (array[i] > max) {
			max = array[i];
			num = i;
		}
	}

	int end = 0;
	for (int i = 0; i < 10; i++) {
		if (array[i] >= max) {
			end = i;
		}
	}//индекс последнего макс числа которе повторяется

	array[end] = min; //  меняем последнее макс число на мин число

	for (int i = 0; i < 10; i++) {
		if (array[i] == max) {
			array[i] = 0;
		}
	} //удаляем макс элементы

	int arr1[10] = { 0 };
	int j = 0;
	for (int i = 0; i < 10; i++) {
		if (array[i] != 0) {
			arr1[j] = array[i];
			j++;
		}
	}

	for (int i = 0; i < j; i++) {
		printf("%d ", arr1[i]);
	}//выводим измененный масив

	printf("\n");
	int _getch();
	return 0;
}
