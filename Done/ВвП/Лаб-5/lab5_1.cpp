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
	const int n = 5;
	int a[n], x[n], a4[n] = {9,5,3,2,1}, count = 0, min = 10, k = 0, indexmin, temp;
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = -10 + rand() % 10;
		if (abs(a[i]) < min)
			min = a[i];
		printf("%d ", a[i]);
	}
	printf("\n Введите номер задания\n");
	int zadanie;
	scanf("%d", &zadanie);
	switch (zadanie)
	{
	case 1:
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] == a[j + 1])
				count++;

		}
		printf("%d\n", count);
		break;
	case 2:
		for (int i = 0; i < n; i++) {
			a[i] = a[i] / min;
			printf("%d ", a[i]);
		}
		break;
	case 3:
		for (int i = 0; i < n;i++)
			if (a[i] != 0)
			{
				x[k] = a[i];
				k++;
			}
		break;
	case 4:
		int index;
		for (int i = 0;i < n;i++) {
			if (a4[i] == 2) {
				index = i;
				for (int j = 0; j < i; j++)
					sum += a4[j];
				break;
			}
		}
		printf("2 находится на индексе '%d', среднее арифметическое элементов перед 2 = %f", index, sum / index );
		break;
	case 5:
		min = 10;
		for (int i = 0; i < n;i++) {
			if (a[i] < min) {
				min = a[i];
				indexmin = i;
			}
		}
		temp = a[indexmin];
		a[indexmin] = a[2];
		a[2] = temp;
		for (int i = 0; i < n;i++)
			printf("%d ",a[i]);
		break;
	}
}