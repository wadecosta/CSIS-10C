#ifndef MANAGER_H_INCLUDED
#define MANAGER_H_INCLUDED

#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;
#include "Person.h"
#include "Employee.h"

class Manager: public Employee
{
    public:
    Manager(string name, int born,  int id, int sal, string department, int budget);
	 void print(ostream& out);
  	private:
	 string department_;
	 int  budget_;
};

Manager::Manager(string name, int born,  int id, int sal, string department, int budget)
                    : Employee(name, born, id, sal), department_(department), budget_(budget)
{}

void Manager::print(ostream& out)
{
    out<<"Employee: "<<name_<<" born: "<<born_<<endl;
    out<<"     ID: "<<id_<<" Salary : $"<<sal_<<" Department: "<< department_
    <<" Budget: "<<budget_<<endl;
}


#endif // MANAGER_H_INCLUDED
