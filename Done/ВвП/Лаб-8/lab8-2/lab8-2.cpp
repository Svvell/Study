#include<iostream>
#include<ctime>
using namespace std;
int n = 4;
int pcounter, qcounter;

int* createArray(int n);
void printarr(int* arr);
void compare(int* arr1,int* arr2);
int main()
{
	srand(time(NULL));
	/*Где больше ненулевых элементов*/
	int* q = createArray(n);
	printarr(q);
	int* p = createArray(n);
	printarr(p);
	compare(q, p);
}


int* createArray(int n)
{
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = -1 + rand() % 5;
	}
	return arr;
}

void printarr(int* arr)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void compare(int* arr1, int* arr2) {
	for (int i = 0; i < sizeof(arr1);i++) {
		if (arr1[i] != 0) {
			qcounter++;
		}
	}
	for (int i = 0; i < sizeof(arr2);i++) {
		if (arr2[i] != 0) {
			pcounter++;
		}
	}
	if (qcounter > pcounter) {
		cout << "q > p" << endl;
	}
	else if (qcounter < pcounter) {
		cout << "q < p" << endl;
	}
	else {
		cout << "q = p" << endl;
	}
}
