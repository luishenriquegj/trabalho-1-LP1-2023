cmake_minimum_required(VERSION 3.16.3)
Project(teste VERSION 0.1 LANGUAGES CXX)

include_directories (include)

add_executable (program
  src/main.cpp
  src/book.cpp
  src/bookShelf.cpp)
