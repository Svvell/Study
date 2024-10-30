#include <iostream>
#include <string>
using namespace std;
struct Book 
{
    string author; string name; 
    string publisher; int data; int cost;
};
int N = 10;
char s = 'Ф';
Book* CreateStr(int n);
void FillBArr(Book* books);
Book* W(Book* books, int counter);
Book* Sort(Book* books, char F);
void PrintBArr(Book* books);
void PrintB(Book book);
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    Book book = {"Толстой","Война и мор","Комсомолец",1999, 2000};
    Book* bSt = &book;
    Book* books = CreateStr(N);
    FillBArr(books);
    PrintBArr(books);

    Book* sortedBooks = Sort(books, s);
    PrintBArr(sortedBooks);
}
Book* CreateStr(int n) {
    Book* books = new Book[n];
    return books;
}
void FillBArr(Book* books) {
    for (int i = 0; i < N; i++) {
        books[i].author = "Толстой" + to_string(i);
        books[i].name = "Война и пир" + to_string(i);
        char F = rand() % (215 - 209 + 1) + 209;
        books[i].publisher += F;
        books[i].publisher += "омсомолец" + to_string(rand() % (3 - 1 + 1) + 1);
        books[i].data = rand() % (2001 - 1995 + 1) + 1995;
        books[i].cost = rand() % (4000 - 800 + 1) + 800;
    }
}
void PrintBArr(Book* books) {
    for (int i = 0; i < N; i++) {
        PrintB(books[i]);
    }
    cout << endl;
}
void PrintB(Book book) {
    cout << "Книга - " + book.name + ", автор - " + book.author + ", издательство - " + book.publisher + ", издана в " + to_string(book.data) + ", продается по цене - " + to_string(book.cost) << endl;
}
Book* Sort(Book* books, char s) {
    Book* sortedBooks = CreateStr(N / 2);
    int counter = 0;
    for (int i = 0; i < N; i++) {
        if (counter < N / 2) {
            if (books[i].publisher[0] == s) {
                sortedBooks[counter] = books[i];
                counter++;
            }
        }
        else {
            Book* temp = CreateStr(counter + 2);
            for (int j = 0; j <= counter;j++) {
                temp[j] = sortedBooks[j];
            }
            sortedBooks = temp;
            delete [] temp;
        }
    }
    return sortedBooks;
    
}
Book* W(Book* books, int counter) {
    Book* temp = CreateStr(counter);
    for (int j = 0; j <= counter;j++) {
        temp[j] = books[j];
    }
     //= temp;
    delete[] temp;
}