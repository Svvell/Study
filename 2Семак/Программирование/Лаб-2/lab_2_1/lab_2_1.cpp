#include <iostream>
#include <format>
#include <string>
using namespace std;
struct NOTE
{
    string FName;string phone;int* birthday = new int[3];
};
void Print(NOTE n);
int N = 3;
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    NOTE* arrN = new NOTE[N];
    for (int i = 0; i < N; i++) {
        cout << "Введите фамилию и имя: ";
        /*string tempSurname, tempName;
        cin >> tempSurname >> tempName;
        arrN[i].FName = tempSurname + tempSurname;*/
        arrN[i].FName = "dasdnsna" + to_string(i);
        cout << "Введите дату рождения: ";
        int* temp = new int[3];
        /*cin >> arrN[i].birthday[0] >> arrN[i].birthday[1] >> arrN[i].birthday[2];*/
        cout << "Введите номер телефона: ";
        /*cin >> arrN[i].phone;*/
        temp[0] = rand() % (31 - 1 + 1) + 1;
        temp[1] = rand() % (12 - 1 + 1) + 1;
        temp[2] = rand() % (2000 - 1970 + 1) + 1970;
        arrN[i].birthday = temp;
        arrN[i].phone = to_string(rand() % (89999999999 - 89000000000 + 1) + 89000000000);
        Print(arrN[i]);
    }
    cout << "Введите искомый год: ";
    int data;
    cin >> data;
    bool c1 = false;
    for (int i = 0; i < N; i++) {
        if (arrN[i].birthday[2] == data) {
            Print(arrN[i]);
            c1 = true;
        }
    }
    if (!c1) {
        cout << "Людей такого года рождения нет";
    }
}
void Print(NOTE n) {
    cout << "Данные:\nФамилия Имя: " << n.FName;
    cout << "\nДата рождения: ";
    for (int j = 0; j < 3; j++) {
        cout << n.birthday[j] << ".";
    }
    cout << "\nНомер телефона: " << n.phone << "\n";
}