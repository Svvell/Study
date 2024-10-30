#include<iostream>
#include<ctype.h>
#include<cstring>
#include<cstdlib>
using namespace std;
char str[100];
char* nextW = NULL;
int main()
{
    /*напечатать все слова, не содержащие ни одной большой латинской буквы*/
    cin.getline(str, 100);
    cout << str << endl;
    int spaces[10];
    int countS = 0;
    for (int i = 0; i < strlen(str);i++) {
        if (isspace(str[i])) {
            spaces[countS] = i;
            countS++;
        }
    }
    for (int i = 0; i < countS; i++) {
        cout << spaces[i] << ' ';
    }
}
