#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
int main()
{
	setlocale(LC_CTYPE, "Rus");
	srand(time(NULL));
	const int n = 3, m = 3;
	int count = 0, sum = 0;
	int A[n][m];
	printf("Введите по очереди каждый элемент массива на отдельной строке\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0;j < m;j++) {
			scanf("%d", &A[n][m]);
			if (A[n][m] > 0) {
				sum += A[n][m];
				count++;
			}
		}
	}
	printf("Кол-во положительных элементов - %d.\nСумма положительных элементов - %d", count, sum);
}