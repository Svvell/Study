#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//setlocale(LC_ALL, "Rus");
	cout << "Введите номер подзадания задания 2: ";
	int c1;
	cin >> c1;
	cout << "Использовать заложенные числа для определения кол-ва элементов в ряду?(1 = да, 0 = нет): ";
	int c2;
	cin >> c2;
	if (c1 == 1) {
		int n;
		if (c2 == 1) {
			n = 7;
		}
		else if (c2 == 0) {
			cout << "Введите n";
			cin >> n;
		}
		float x0 = 0.5;
		float x = x0;
		bool b = false;
		for (int i = 3; i <= n;i += 2) {
			if (b) {
				x += pow(x0, i) / i * pow(-1, i + 1);
				b = !b;
			}
			else
			{
				x += pow(x0, i) / i * pow(-1, i);
				b = !b;
			}
		}
		cout << x << " - результат полученный с помощью ряда" << endl;
		cout << atan(x0) << " - результат полученный с помощью стандартной функции";
	}
	else if (c1 == 2) {
		double x0 = 0.1;
		double x = x0;
		double r = 1;
		double e = pow(10, -4);
		int i = 1;
		int n = 0;
		while (abs(r) >= e){
			x += pow(x0, i) / i * pow(-1,n );
			i += 2;
			r = x - atan(x0);
			n++;
		}
		cout << r << endl;
		cout << n;
	}
}

