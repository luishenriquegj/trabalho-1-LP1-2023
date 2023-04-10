#include "Employee.h"

#include <iostream>

#include <string>


using namespace std;

Employee::Employee(string name, int wage, string department) {
    this -> name = name;
    this -> wage = wage;
    this -> department = department;
};

Employee::Employee() {
    this -> name = "";
    this -> wage = 0;
    this -> department = "";
};

void Employee::setEmployeeData() {
    cout << "avaliable Departments:" << endl;
    cout << "RH,sales" << endl;
    cout << "insert employee's name:" << endl;
    cin >> this -> name;
    while (this -> name.size() == 0) {
        cout << "set a valid employee's name:" << endl;
        cin >> this -> name;
    }

    cout << "insert the employee's wage:" << endl;
    cin >> this -> wage;

    cout << "insert the employee's department:" << endl;
    cin >> this -> department;
};

string Employee::getName() {
    return this -> name;
};

float Employee::getWage() {
    return this -> wage;
};

string Employee::getDepartment() {
    return this -> department;
};

void Employee::setRaise(float raise) {
    this -> wage = this -> wage * raise;
};