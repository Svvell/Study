#include <iostream>
#include <time.h>
using namespace std;
int n = 5, m = 7;

int** CreateTwoSArr(int n, int m);
int* CreateOneSArr(int n);
int* FillOSArr(int* fillingArr, int** source);
void PrintTSArr(int** arr);
void PrintOSArr(int* arr);

int main()
{
    /*12. Найти максимальные элементы каждого столбца матрицы a(5, 7) и сохранить их в одномерном 
массиве b.*/
    srand(time(NULL));
    setlocale(LC_ALL,"Rus");

    int** a = CreateTwoSArr(n, m);
    int* b = CreateOneSArr(m);
    PrintTSArr(a);
    PrintOSArr(b);
    FillOSArr(b, a);
    PrintOSArr(b);



}
int** CreateTwoSArr(int n, int m) {
    int** arr = new int*[n];
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
int* CreateOneSArr(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n;i++) {
        arr[i] = 0;
    }
    return arr;
}
int* FillOSArr(int* fillingArr, int** source) {
    for (int i = 0; i < m;i++) {
        int max = source[0][i];
        for (int j = 0; j < n; j++) {
            if (max < source[j][i]) {
                max = source[j][i];
            }
        }
        fillingArr[i] = max;
    }
    return fillingArr;
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
void PrintOSArr(int* arr) {
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

