#include "Person.h"

#include <iostream>
#include <string>
#include <vector>


using namespace std;

Person::Person(string name, int age , double height) {
    this -> name = name;
    this -> age = age;
    this -> height = height;
};

Person::Person() {
    this -> name = "";
    this -> age = 0;
    this -> height =0;   
};



string Person::getName() {
    return this -> name;
};

int Person::getAge() {
  return this -> age;
};

double Person::getHeight() {
    return this -> height;
};

void Person::printPersonData() {
    cout << "name: " << this -> name << endl;
    cout << "age:" << this -> age << endl;
    cout << "height" << this -> height << endl;
}
