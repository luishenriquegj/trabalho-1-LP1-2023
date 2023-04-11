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

void Person::setName(){
    string name;
    cout<<"insert a new name for this person:"<<endl;
    cin>>name;
    while(name.size()<=0) {
        cout<<"insert a valid name:"<<endl;
        cin>>name;
    };
    this->name = name;
};

void Person::setAge() {
    int age;
    cout<<"insert a the age for this person:"<<endl;
    cin>>age;
    while(age<0) {
        cout<<"insert a valid age:"<<endl;
        cin>>age;
    };
    this->age = age;
};

void Person::setHeight(){
    double height;
    cout<<"insert a the height for this person:"<<endl;
    cin>>height;
    while(height<=0.0) {
        cout<<"insert a valid height:"<<endl;
        cin>>height;
    };
    this->height = height;
};

void Person::setAllInfo() {
    setName();
    setAge();
    setHeight();
};

void Person::printPersonData() {
    cout << "name: " << this -> name << endl;
    cout << "age:" << this -> age << endl;
    cout << "height" << this -> height << endl;
}
