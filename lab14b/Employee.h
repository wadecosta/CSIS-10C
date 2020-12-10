#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>
#include <cstdlib>
#include <iostream>
#include "Person.h"
using namespace std;

class Employee: public Person
{
	public:
    Employee(string name, int born,  int id, int sal);
	 void print(ostream& out);
  	protected:
	 int id_;
	 int  sal_;
};

Employee::Employee(string name, int born, int id, int sal): Person(name, born) , id_(id), sal_(sal){}

void Employee::print(ostream& out)
{
    out<<"Employee: "<<name_<<" born: "<<born_<<endl;
    out<<"     ID: "<<id_<<" Salary : $"<<sal_<<endl;
}



#endif // EMPLOYEE_H_INCLUDED
