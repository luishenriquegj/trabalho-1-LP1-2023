#include "BookShelf.h"
#include "Book.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

BookShelf::BookShelf( vector <Book> books) {
    this->books = books;
};


void BookShelf::addNewBook() {
    int numGrades;
    string title;
    vector<float> grades;
    string author;

    cout << "Enter the book title: ";
    cin.ignore();
    getline(cin, title);

    cout << "Enter the book author: ";
    cin.ignore();
    getline(cin, author);

    cout << "How many grades would you like to enter for this book? ";
    cin >> numGrades;

    for (int i = 0; i < numGrades; i++) {
        float grade;
        cout << "Enter grade " << i+1 << ": ";
        cin >> grade;
        grades.push_back(grade);
    }
    
    Book book(title, grades, author);
    this ->books.push_back(book);
}


void BookShelf::getAllBooksAverageGrade() {
    string query;
    float averageGrade = 0.0;

    for (int i = 0; i < this->books.size(); i++) {
           averageGrade =  averageGrade +  this->books[i].getBookGradeSum();
    }

    cout<< "average book grade:"<<averageGrade/this->books.size()<<endl;
   
};

void BookShelf::getBookAverageGrade() {
    string query;
    cout << "insert book title:" << endl;
    cin.ignore();
    getline(cin,query);
    cout << "..........................." << endl; 

    if (books.size() == 0) {
        cout << "There are no saved books." << endl;
        return;
    }
    transform(query.begin(), query.end(), query.begin(), ::tolower);
    
    for (int i = 0; i < books.size(); i++) {    
        string bookTitleLower = books[i].getBookTitle();
        transform(bookTitleLower.begin(), bookTitleLower.end(), bookTitleLower.begin(), ::tolower);

        if (bookTitleLower == query) {
            cout << "Average grade for '" << books[i].getBookTitle()<<"': " << books[i].getBookAverageGrade() << endl;
        }
    }
}






