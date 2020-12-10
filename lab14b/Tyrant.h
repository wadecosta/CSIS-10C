//  A Tyrant Class using inheritance from Person
#ifndef TYRANT_H
#define TYRANT_H

#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;
#include "Person.h"


class Tyrant : public Person
{
	public:
	 Tyrant(string name, int born, string kdm, int vctms);
	 void print(ostream& out);
  	private:
	 string kingdom_;
	 int  victims_;

};

Tyrant::Tyrant(string name, int born, string kdm, int vctms) : Person(name, born) , kingdom_(kdm), victims_(vctms){}

void Tyrant::print(ostream& out)
{
    //Person::print(out);
    out<<"Tyrant: "<<name_<<" born: "<<born_<<endl;
    out<<"     Kingdom: "<<kingdom_<<" # victims: "<<victims_<<endl;
}





// keep this statement below all the code in the above section.)
#endif

