// postlab.cpp
//   this program implements a student database
//   user can print, and search by
//     lastname, email, area code, and city
//
//   HINT to search by area code, use the
//    C++ string substring function, for example
//        string s = "hamburger";
//        cout<<s.substr(3,4);   // prints burg
//
//    http://www.cplusplus.com/reference/string/string/substr/

#include<iostream>
#include<fstream>
#include<cstdlib>
#include "Student.h"
using namespace std;


void get_stream(ifstream& ins);
int menu();                                      // print the menu of choicse
void print_list(int size, Student s[]);    // print the whole list
void ln_search(int size, Student s[]);     // search database for last name
void email_search(int size, Student s[]);  // search for an email address
void ac_search(int size, Student s[]);     // search for all in an area code
void city_search(int size, Student s[]);   // search for all in a city

int main( )
{
     int size, count, choice;

     ifstream ins;
     get_stream(ins);

     ins >> size;  // the first value in file is the number of records
     Student *dbase = new Student[size];

     for (int k=0; k<size; k++){
     	ins >> dbase[k];
     }

     // database read, now we process it
     do {
     	choice = menu(); // display menu and input choice

     	// process user choice
     	switch(choice){
     		case 1:
     			print_list(size,dbase);
     			break;
     	    case 2:  // etc
     	        ln_search(size,dbase);
     	        break;
            case 3:
                email_search(size, dbase);
            case 4:
                ac_search(size, dbase);
            case 5:
                city_search(size, dbase);
     	}
	 } while (choice != 6);  // 6 is exit command


     return 0;
}


void get_stream(ifstream& ins)
{
    ins.open("student.txt");
    if(ins.fail())
    {
       cout << "Failed to open the input file. \n";
       exit(1);
    }
}

int menu()                                      // print the menu of choicse
{
	int choice;
	cout<<"Student Database Processor"<<endl;
	cout<<"Menu:"<<endl;
	cout<<"1 - Print All Students"<<endl;
	cout<<"2 - Search by Last Name"<<endl;
	cout<<"3 - Search by email address"<<endl;
	cout<<"4 - Print All Students with Requested Area Code"<<endl;
	cout<<"5 - Print All Students Living in Requested City"<<endl;
	cout<<"6 - Exit"<<endl<<endl;

	cout<<"Enter your choice"<<endl;
	cin>>choice;
	return choice;
}

void print_list(int size, Student s[])    // print the whole list
{
	// write a for loop and print all students in s.
	// remember, s is an array, so, cout<<s[k]<<endl;
	for (int k=0; k<size; k++){
     	cout << s[k]<<endl;
     }
}

void ln_search(int size, Student s[])
{
    string x;
    cout<<"What is the last name: ";
    cin>>x;
    for(int k=0; k<size; k++)
    {
        if(s[k].getLastName() == x)
            cout<<s[k];
    }
}

void email_search(int size, Student s[])
{
    string x;
    cout<<"What is the email: ";
    cin>>x;
    for(int k=0; k<size; k++)
    {
        if(s[k].getEmail() == x)
            cout<<s[k];
    }
}

void ac_search(int size, Student s[])
{
    string x;
    cout<<"What is the area code: ";
    cin>>x;
    for(int k=0; k<size; k++)
    {
        string code = s[k].getPhone();
        if(code.substr (0,3) == x)
        {
            cout<<s[k];
        }

    }
}

void city_search(int size, Student s[])
{
    string city;
    cout<<"What is the city: ";
    cin.ignore(80,'\n');
    getline(cin, city);
    for(int k=0; k<size; k++)
    {
        if(s[k].getCity() == city)
            cout<<s[k];
    }

}


