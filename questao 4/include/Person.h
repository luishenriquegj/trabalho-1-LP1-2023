#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>


class Person{

    private: 
    std::string name;
    int age;
    double height;

    public: 
    Person(std::string name, int age, double height);
    Person();

    std::string getName();
    int getAge();
    double getHeight();
    void printPersonData();

    bool operator>(const Person& person) const {
        return height > person.height;
    }
};


#endif