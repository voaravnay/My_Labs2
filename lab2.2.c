#define quantity 10
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
int main(void)
{
	setlocale(LC_ALL, "RUS");
	int array[quantity] = { 0 };
	int a, p, k, max;
	p = 1; max = 0;
	printf("Сколько членов последователности: ");
	scanf_s("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf_s("%d", &a);
		array[i] = a;
	}
	for (int i = 0; i < k; i++)
	{
		if (i + 1 > quantity)
		{
			printf("Граница массива. ");
			exit(1);
		}
		if (array[i] == array[i + 1])
			p += 1;
		if (array[i] != array[i + 1])
			if (max < p)
			{
				max = p;
				p = 1;
			}
	}
	printf("\nCамая большая длинна повторений: %d", max);
	int _getch();
	return 0;
}