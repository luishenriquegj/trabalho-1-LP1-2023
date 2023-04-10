#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <vector>
#include <string>
#include "Employee.h"


class  Department {

private:
  std::string team;
  std::string departmentName;
  std::vector <Employee> employees;

public:
  Department( std::vector <Employee> employees, std::string departmentName);

  std::string getName();
  void getEmployeeName(std::string name);
  void setEmployeeData();
  std::string getDepartment();
  void setRaise(int raise);
};


#endif