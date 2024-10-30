#include<iostream>
#include<ctype.h>
#include<cstring>
#include<cstdlib>
using namespace std;
char str[100];
char* nextW = NULL;
int main()
{
    /*Дан текст. Посчитать кол-во цифр*/
    cin.getline(str, 100);
    cout << str << endl;
    int countN = 0;
    for (int i = 0; i < strlen(str);i++) {
        if (isdigit(str[i])) {
            countN++;
        }
    }
    cout << countN;
}
