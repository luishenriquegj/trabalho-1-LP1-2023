#ifndef ZOO_H
#define ZOO_H

#include "Book.h"

#include <vector>
#include <string>



class  BookShelf {

private:
  std::vector <Book> books;

public:
  BookShelf( std::vector <Book> books);
  void getAllBooksAverageGrade();
  void addNewBook();
  void getBookAverageGrade();
};


#endif