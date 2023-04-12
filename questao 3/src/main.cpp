#include <iostream>
#include<string>
#include<vector>

#include "Book.h"
#include "BookShelf.h"


using namespace std;

int main() {

    int menu = 1;
    

    Book book;

    vector < Book > books = {
        Book("nome", {5.0,4.5}, "Patrick Rothfuss"),
        Book("O Temor do Sabio", {4.0,1.5}, "Patrick Rothfuss"),
        Book("A musica do silencio", {2.3,3.0}, "Patrick Rothfuss"),
        Book("H.P Lovecraft: Grandes Contos", {2.4,3.0}, "H.P Lovecraft")
    };
    BookShelf bookShelf(books);
   

    while (menu != 4) {
        cout << "................................." << endl;
        cout << "choose one of the following options:" << endl;
        cout << "1 - get a book data" << endl;
        cout << "2 - get all books average grade" << endl; 
        cout << "3 - add new book" << endl; 
        cout << "4 - end application" << endl;
        cin >> menu;

        if (menu == 1) {
            cout << "................................." << endl;
            bookShelf.getBookAverageGrade();
        }
        if (menu == 2) {
            cout << "................................." << endl;
            bookShelf.getAllBooksAverageGrade();
        }

         if (menu == 3) {
            cout << "................................." << endl;
            bookShelf.addNewBook();
        }
        if (menu == 4) {
            cout << "................................." << endl;
            cout << "ended program" << endl;
            return 0;
        }

        menu = 0;
    }

}