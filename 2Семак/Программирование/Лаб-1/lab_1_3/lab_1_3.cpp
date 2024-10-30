#include <iostream>
using namespace std;
int n = 20;
int K;
int s = 6; int st = 5;

int* CreateOneSArr(int n);
int** CreateTwoSArr(int n, int m);
void PrintOSArr(int* arr);
void PrintTSArr(int** arr);
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    while (true) {
        int* A = CreateOneSArr(20);
        int** N = CreateTwoSArr(s, st);
        int Imax = 0;
        int max = INT32_MIN;
        char c = '0';
        cout << "Введите номер задания\n";
        cin >> c;
        switch (c) 
        {
        case 'a':
            PrintOSArr(A);
            cout << "Введите K\n";
            cin >> K;
            for (int i = 0; i < n; i++) {
                if (A[i] % K == 0) {
                    A[i] = 0;
                }
            }
            PrintOSArr(A);
            break;
        case 'b':
            PrintTSArr(N);
            for (int i = 0; i < s; i++) {
                int temp = 0;
                for (int j = 0; j < st; j++) {
                    temp += N[i][j];
                }
                if (temp > max) {
                    max = temp;
                    Imax = i;
                }
            }
            cout << "Строка с максимальной суммой - " << Imax << "\n";
            break;
        default:
            cout << "Такого задания нет";
            break;
        }
    }
}
int* CreateOneSArr(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n;i++) {
        arr[i] = -10 + rand() % (10 - (-10) + 1);
    }
    return arr;
}
void PrintOSArr(int* arr) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < st; j++) {
            cout << arr[i][j] << "\t ";
        }
        cout << endl;
    }
    cout << endl;
}