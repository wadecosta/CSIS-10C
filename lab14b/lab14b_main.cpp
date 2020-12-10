#include <iostream>
using namespace std;
#include "Person.h"
#include "Tyrant.h"
#include "Employee.h"
#include "Manager.h"

void display(Person& p);

int main()
{
    Person JFK("John F. Kennedy", 1925);

    cout<<"printing with nonmember display: \n ";
	display(JFK);

    cout<<"printing with member print: \n     ";
	JFK.print(cout);

	Tyrant ATH("Attila the Hun",753,"Asia",35000);
	cout<<"printing with nonmember display: \n ";
	display(ATH);
	 cout<<"printing with member print: \n     ";
	ATH.print(cout);

	Employee sax("Sax Winderhaven",1975,555666,55000);
	sax.print(cout);

	Manager Atty("Attila the Hun",753,111222,85000,"Sales",2000000);
    Atty.print(cout);


	//system("pause");
}

void display(Person& p)
{
    cout<<"### ";
	p.print(cout);
}
