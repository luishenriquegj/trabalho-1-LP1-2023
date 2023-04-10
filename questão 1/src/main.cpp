#include <iostream>

#include<string>

#include<vector>

#include "Employee.h"


using namespace std;

void setDepartmentRaise(int raise, string department, vector < Employee > & employees) {
    float raisePercent = raise  * (float)(1/100.0) + 1.0;

    if (raisePercent > 0) {
        for (vector < Employee > ::size_type i = 0; i != employees.size(); i++) {
            if (department == employees[i].getDepartment()) {
                cout << "................................." << endl;
                cout << "setting " << employees[i].getName() << " wage to:" << raisePercent << "*" << employees[i].getWage() << endl;
                employees[i].setRaise(raisePercent);
            }
        }
        cout << "................................." << endl;
        cout << "adjusted all wages for " << department << " to:" << endl;
        cout << employees[0].getWage() << endl;
    } else {
        cout << "................................." << endl;
        cout << "you can't set an employee's wage to be lower than 0!!!!!!!!" << endl;
    }
};

void getEmployeeData(string name, vector < Employee > employees) {
    int matchCount = 0;
    if (name.size() > 0) {
        for (vector < Employee > ::size_type i = 0; i != employees.size(); i++) {
            if (name == employees[i].getName()) {
                cout << "................................." << endl;
                cout << "employee's data:" << endl;
                cout << "Name: " << employees[i].getName() << endl;
                cout << "Wage: " << employees[i].getWage() << endl;
                cout << "Department: " << employees[i].getDepartment() << endl;
                matchCount++;
            }
        }
        if (matchCount == 0) {
            cout << "................................." << endl;
            cout << "no match for:" << name << endl;
        }
    } else {
        cout << "................................." << endl;
        cout << "you must set a valid employee name" << endl;
    }
};

void getDepartmentData(string department, vector < Employee > employees) {
    int matchCount = 0;
    if (department.size() > 0) {
        for (vector < Employee > ::size_type i = 0; i != employees.size(); i++) {
            if (department == employees[i].getDepartment()) {
                cout << "................................." << endl;
                cout << "employee's data:" << endl;
                cout << "Name: " << employees[i].getName() << endl;
                cout << "Wage: " << employees[i].getWage() << endl;
                cout << "Department: " << employees[i].getDepartment() << endl;
                matchCount++;

            }
        }
        if (matchCount == 0) {
            cout << "................................." << endl;
            cout << "no match for:" << department << endl;
        }
    } else {
        cout << "................................." << endl;
        cout << "you must insert a department name" << endl;
    }
};

int main() {

    int menu = 1;
    string employeeName = "";
    int employeeWage = 0;
    int employeeWageMultiplier = 0;
    string departmentName = "";
    

    Employee employed;
    vector < Employee > employees = {
        Employee("Pedro", 500.0, "RH"),
        Employee("Joao", 500.0, "RH"),
        Employee("Matheus", 400.0, "Sales"),
        Employee("Felipe", 400.0, "Sales")
    };

    while (menu != 3) {
        cout << "................................." << endl;
        cout << "choose one of the following options:" << endl;
        cout << "1 - set new employee's data" << endl;
        cout << "2 - raise all wages for a departament " << endl;
        cout << "3 - get an employee's data" << endl;
        cout << "4 - get a department data" << endl; 
        cout << "5 - end application" << endl;
        cin >> menu;
        

        if (menu == 1) {
            cout << "................................." << endl;
            employed.setEmployeeData();
            employees.push_back(employed);
            cout << "employee " << employed.getName() << " that has a wage of: " << employed.getWage() << " is now allocated to the " << employed.getDepartment() << " " << endl;
        }

        if (menu == 2) {
            cout << "................................." << endl;
            cout << "insert the department: " << endl << "pre-set Options: RH, Sales" << endl;
            cin >> departmentName;

            cout << "insert a raise percentage:" << endl;
            cin >> employeeWageMultiplier;
            setDepartmentRaise(employeeWageMultiplier, departmentName, employees);
            departmentName ="";
        }

        if (menu == 3) {
            cout << "................................." << endl;
            cout << "what employee are you looking for?" << endl;
            cin >> employeeName;
            getEmployeeData(employeeName, employees);
            employeeName="";
        }
        if (menu == 4) {
            cout << "................................." << endl;
            cout << "what department are you looking for?" << endl;
            cin >> departmentName;
            getDepartmentData(departmentName, employees);
            departmentName="";
        }
         if (menu == 5) {
            cout << "................................." << endl;
            cout << "ended program" << endl;
            return 0;
        }

        menu = 0;
    }

}