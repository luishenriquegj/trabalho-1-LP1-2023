#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>


class Employee {

    private: std::string name;
    std::string department;
    float wage;

    public: Employee(std::string name, int wage, std::string department);
    Employee();

    std::string getName();
    float getWage();
    void setEmployeeData();
    std::string getDepartment();
    void setRaise(float raise);
};

#endif