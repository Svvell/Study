#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "Rus");
	float x = 4;
	while(x <= 9.3){
		float y = 2.09 * pow(x, 2) + 1.22;
		printf("%f - %f\n---------\n", x, y);
		x += 0.3;
	}
}