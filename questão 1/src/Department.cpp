#include "Department.h"
#include <algorithm> 
#include <iostream>
#include <string>
#include <iterator>

using namespace std;

Department::Department( vector <Employee> employees, string departmentName) {
  this->employees = employees;
  this->departmentName = departmentName;
};




void Department::getEmployeeName(string name) { 
    cout<<"employee's name list"<<endl;
       for(auto it :this->employees){
                cout<<name<<endl;
       }
  };

string Employee::getName() { return this->name; };

int Employee::getWage() { return this->wage; };

string Employee::getDepartment() { return this->department; };


void Department::setRaise(int raise) {
  if (raise> 0){
    for(auto it :this->employees){
            it.setRaise(raise);
       }
     cout<< "adjusted all wages to:"<<endl;
        cout<<this->employees[0].getWage()<<endl;
  }
  else {
    cout<< "you can't set an employee's wage to be lower than 0!!!!!!!!"<<endl;
  }
};