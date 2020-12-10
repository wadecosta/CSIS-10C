// CStringDemo.cpp   demos the use of the c-string utility functions
//

#include <cstring>
#include<iostream>
using namespace std;


int main()
{
cout<<"1)---Creating C-Strings-------------------\n\n";

char b[15], c[15]="Hello";  // a C-string is an array of characters
cout<<"C-String b: "<<b<<endl;
cout<<"C-String c: "<<c<<endl;

// Add statements below to create and display string d with "Goodbye" in it
char d[15] = "Goodbye";
cout<<"C-String d: "<<d<<endl;

cout<<"\n\n 2)---Using strcpy to copy a string------------\n\n";
strcpy(b,c);
cout<<"C-String b: "<<b<<endl;
cout<<"C-String c: "<<c<<endl;

// Add statements below to copy your string d into string c and display
//  both c and d
strcpy(c,d);
cout<<"C-String c: "<<c<<endl;
cout<<"C-String d: "<<d<<endl;

cout<<"\n\n 3)---Using strcat to concatenate (append) a string---\n\n";
strcat(b,c);
strcat(c,d);
//strcat(c,d);
cout<<"C-String b: "<<b<<endl;
cout<<"C-String c: "<<c<<endl;
cout<<"C-String d: "<<d<<endl;

// Add statements below to append string b to the end of string d
//  and display strings b, c and d -- check for erroneous changes to b and c
//  you may need to increase the size of array d

cout<<"\n\n 4)---Using strcmp to compare two C-strings------------\n\n";
cout<<"Input two words to determine which comes first in the dictionary"<<endl;
cin>>b>>c;
cout<<"C-String b: "<<b<<endl;
cout<<"C-String c: "<<c<<endl;
if (strcmp(b,c) < 0)
	cout<<"String "<<b<<" comes before string "<<c<<endl;
if (strcmp(b,c) > 0)
	cout<<"String "<<c<<" comes before string "<<b<<endl;
if (strcmp(b,c)== 0)
	cout<<"String "<<b<<" is the same as "<<c<<endl;

// Add code to determine which string (b, c, or d)
//  comes first in the dictionary


cout<<"\n\n 5)---Using strlen to determine the length of a C-string------------\n\n";
cout<<"C-String b: "<<b<<endl;
cout<<"C-String c: "<<c<<endl;
cout<<"Length of string "<<b<<" is "<<strlen(b)<<endl;
cout<<"Length of string "<<c<<" is "<<strlen(c)<<endl;

// add code to display the length of string d

//system("pause");
return 0;
}
