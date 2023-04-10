#include "Book.h"

#include <iostream>

#include <string>
#include <vector>


using namespace std;

Book::Book(string title, vector <float> grade, string author) {
    this -> title = title;
    this ->grade = grade;
    this -> author = author;
};

Book::Book() {
    this -> title = "";
    this -> grade;
    this -> author;   
};



string Book::getBookTitle() {
    return this -> title;
};

float Book::getBookGradeSum() {
    float gradeSum =0.0;

    for(int i=0;i<this->grade.size();i++){
        gradeSum = gradeSum + this->grade[i];
    }

    return gradeSum;
};



float Book::getBookAverageGrade() {
    float gradeSum =0.0;

    for(int i=0;i<this->grade.size();i++){
        gradeSum = gradeSum + this->grade[i];
    }

    return gradeSum/ this->grade.size();
};
