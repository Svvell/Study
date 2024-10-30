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
    char* words = strtok_s(str, "_.,:;\n\t!?",&nextW);
    //cout << words;
    while (words != NULL) {
        bool b = true;
        for (int i = 0; i < strlen(words);i++) {
            if (isupper(words[i])) {
                b = false;
            }
        }
        if (b) {
            cout << words << ' ';
        }
        words = strtok_s(NULL, "_.,:;\n\t!?", &nextW);
    }
}
