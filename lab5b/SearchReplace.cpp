// FileDemo.cpp   demos how to read strings and C-strings from a file
//

#include <string>
#include<iostream>
#include<fstream>
using namespace std;


int main()
{
string stringText;          // a c++ string
char cstringText[80];      // a c-string

ifstream inFile("essay.txt"); // explicit constructor

if (!inFile)    // check if file is open
{
	cout<<"File not found"<<endl;
	exit(1);
}

//* Read one word at a time
//  from a file into a C++ string variable
while (inFile>>stringText)   		     // read 1 word
{
  // process data
    	cout << stringText <<endl;
}
//*********************/


/* Read one line at a time
//  from a file into a C++ string variable
while (getline(inFile,stringText))   		// read 1 line
{
  // process data
    	cout << stringText <<endl;
}
//*********************/

/* Read one word at a time
//  from a file into a C-string variable
while (inFile>>cstringText)   		     // read 1 word
{
  // process data
    	cout << cstringText <<endl;
}
//*********************/


/* Read one line at a time
//  from a file into a C-string variable
for(;;)
{
  // process data
    inFile.getline(cstringText, 80);
	cout << cstringText <<endl;
    if ( inFile.eof() ) break;
    inFile.clear();
	inFile.ignore(0,'\n');
}
//*********************/

inFile.close();

system("pause");
return 0;
}
