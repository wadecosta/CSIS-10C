//  A Person class
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

class Person
{ public:
    Person(string newName="Nobody", int newBorn =0);
    string getName() { return name_; }  // the next two functions
    int getBorn() { return born_; }         // are defined "inline" to save space
    virtual void print(ostream& out);
	void setName(string newName) { name_ = newName; }
	void setBorn(int newBorn) { born_ = newBorn; }

  protected:
    string name_;
    int born_;
};

void Person::print(ostream& out)
{
	out<<"Person "<<name_<<", "<<born_<<endl;
}

Person::Person(string newName, int newYOB)
{ // Explicit + Default Constructor
	    name_=newName;
	    born_=newYOB;
}

ostream& operator<<(ostream& out, Person& p)
{ // overload << operator
    out << "\tName: " << p.getName() << endl;
    if (p.getBorn()!=0) out << "\tBorn: " << p.getBorn() << endl;
    return out;
}

istream& operator>>(istream& in, Person& p)
{ // overload >> operator
	string tempname;
	int tempborn;
	in >> tempname;
	in >> tempborn;
	p.setName(tempname);
	p.setBorn(tempborn);
	return in;
}

bool operator==(Person& p1, Person& p2)
{
	return (p1.getName() == p2.getName() && p1.getBorn() == p2.getBorn());
}

#endif
