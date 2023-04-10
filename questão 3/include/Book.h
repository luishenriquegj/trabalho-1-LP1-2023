#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>


class Book{

    private: 
    std::string title;
    std::string author;
    std::vector <float> grade;

    public: 
    Book(std::string title, std::vector <float> grade, std::string author);
    Book();

    float getBookGradeSum();
    float getBookAverageGrade();
    std::string getBookTitle();
    std::string getBookAuthor();
};

#endif