#include <iostream>
#include <time.h>
using namespace std;
int n = 5, m = 5;

int** CreateTwoSArr(int n, int m);
void PrintTSArr(int** arr);
int SumSubD(int** arr);
int SumAll(int** arr);
int main()
{
    /* Задан двумерный массив Y из 4-ч строк и 4-х столбцов.
    Составить программу, которая вычисляет S - сумму элементов побочной диагонали и значение всех элементов массива*/
    srand(time(NULL));
    int** Y = CreateTwoSArr(n, m);
    PrintTSArr(Y);
    cout << SumSubD(Y) << endl;
    cout << SumAll(Y) << endl;
}

int** CreateTwoSArr(int n, int m) {
    int** arr = new int* [n];
    for (int i = 0; i < n;i++) {
        arr[i] = new int[m];
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            arr[i][j] = -10 + rand() % (10 - (-10) + 1);
        }
    }
    return arr;
}
void PrintTSArr(int** arr) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int SumSubD(int** arr) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int j = m - 1 - i;
        sum += arr[i][j];
    }
    return sum;
}
int SumAll(int** arr) {
    int sum = 0;
    for (int i = 0;i < n;i++) {
        for (int j = 0; j < m;j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}
