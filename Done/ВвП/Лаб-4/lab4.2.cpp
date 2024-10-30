#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "Rus");
	const double x = 1.21, e = 0.00003;
	int k = 1; double sum = 0;
	do {
		double fact = k;
		for (int i = 1;i < k;i++) {
			fact *= i;
		}
		sum += (exp(k * x) - x) / fact;
		k++;
		printf("%.5f\n", sum);
	} while (sum < e);
}