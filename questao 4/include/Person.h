#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <vector>


class Person{

    private: 
    std::string name;
    int age;
    double height;

    public: 
    
    friend std::ostream& operator<<(std::ostream& os,Person &person) {
        os<<" the older person is : \n " << "name: " << person.getName() << " \n age: " << person.getAge() << " \n height: " << person.getHeight()<<std::endl;
        return os;
    }; 

    Person(std::string name, int age, double height);
    Person();

    std::string getName();
    int getAge();
    double getHeight();
    void printPersonData();
    void setName();
    void setAge();
    void setHeight();
    void setAllInfo();

    bool operator>(const Person& person) const {
        return age > person.age;
    };

};


#endif
