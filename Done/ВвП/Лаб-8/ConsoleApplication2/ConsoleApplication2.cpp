#include <iostream>
#include <cmath>
using namespace std;
void solveUDisk(double a, double b, double c);
//double summa, prG, srok;
int main()
{
	/* round(1.5) = 2; round(1.3) = 1; round (-1.5) = -2 
	floor(1.5) = 1; round(-1.5) = -2
	ceil(1.5) = 2; ceil(-1.5) = -1
	trunc(1.5) = 1; trunc(-1.5) = -1
	fabs(-5) = 5; fabs(5) = 5

	sqrt(4) = 2
	cbrt(8) = 2
	pow(2,3) = 8
	exp(2) = e^2
	log() - натурального логарифма
	log10() - десятичный логарифм   log10(100) =  2

	sin()
	cos()
	tan()
	asin()
	acos()
	atan()
	*/
//	/*Напишите программу, которая рассчитывает ежемесячные
//платежи по ипотечному кредиту. Входные параметры: сумма кредита,
//годовая процентная ставка, срок кредита.*/
//	summa = 100000;
//	prG = 12;
//	double prM = prG / 12;
//	srok = 4;
//	int srokM = 4 * 12;
//	cout << (summa * prM) / (1 + pow(prM, srokM)) << endl;
	int a, b;
	char c;
	cin >> a >> c >> b;
	cout << a + b + " " + c;
}
