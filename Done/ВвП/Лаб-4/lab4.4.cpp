#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "Rus");
	int n;
	float x, sum = 0;
	scanf("%d %f", &n, &x);
	for(int j = 1; j < n; j++)
	{
		double fact = j;
		for (int i = 1;i < n;i++) {
			fact *= i;
		}
		sum += (1 / fact + sqrt(fabs(x)));
	}
	printf("%.5f\n", sum);
}