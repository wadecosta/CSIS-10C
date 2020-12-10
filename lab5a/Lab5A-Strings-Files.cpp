// Assignment 5    Lab5A-Strings-Files.cpp                     Wade Costa
//  refer to Chapter 6 for in depth coverage of the material
//  described here.

#include <iostream>
#include <fstream>
#include <cmath>
#include<iomanip>
using namespace std;

int cents(string coin)
{
    if (coin == "quarter")
    {
        return 25;
    }
    else if(coin == "penny")
    {
        return 1;
    }
    else if(coin == "nickel")
    {
        return 5;
    }
    else if(coin == "dime")
    {
        return 10;
    }
}
//Add a function definition to the space above main so that this program
// works properly for inputs of penny, nickel, dime and quarter.
//     Sample input:   quarter
//     Sample output:  the value of a quarter is 25 cents
//

int main()
{
////////////////////PART 1 DRILL EXERCISES//////////////
/****************** Problem 1 Basic String Input/Output**************
//   Run this program. Fix the first output statement
//    so it reads right. Then show the name in
//    the last, first format
//    in other words Bill Jones would show  Jones, Bill

string first, last;
cout<<"Enter first and last names"<<endl;
cin>>first>>last;   // whitespace separates strings

cout<<"You entered: "<<first<<" "<<last<<endl;
cout<<"Your name in last, first format is : "<<last<<", "<<first<<endl;   // finish this line

//******************End Problem 1***********************/
/*************Problem 2  String input using getline()**************
//   Run this program and enter a full name. Fix it so it works right
string fullname;
cout<<"Enter your full name (last, first, MI)"<<endl;
getline(cin, fullname);
cout<<"You entered: "<<fullname<<endl;


//******************End Problem 2***********************/
/******************Problem 3 String comparison**************
//   Run this program using Jones as the input.
//    What is wrong? Fix it so it works right
  string name;

  cout << "Enter name " << endl;
  cin >> name;
  if (name == "Jones")
     cout << "Yes" << endl;
  else
     cout << "No, the name is not Jones" << endl;


//******************End Problem 3***********************/
/******************Problem 4 More String Comparisons ******
// This program reads two strings
//  Add code to display a) whether or not they are the same word
//                      b) which string comes first in the dictionary
//                      c) which string has fewer letters
//               and to d) append string s2 to the end of string s1
//						     and display s1 again
//
//   Sample input:    apple  cart
//          output:  they are not the same word
//                   apple comes before cart
//                   cart is shorter than apple
//                   after appending s2 to s1, s1 = applecart
string s1, s2;
cout<<"Enter two words"<<endl;
cin>>s1>>s2;
if(s1 == s2)
{
    cout<<"Same word"<<endl;
}
else
{
    cout<<"Different word"<<endl;
}
if(s1 > s2)
{
    cout<<s1<<" is greater than "<<s2<<endl;
}
else if(s2 < s1)
{
    cout<<s2<<" is greater than "<<s1<<endl;
}

if(s1.length() > s2.length())
{
    cout<<s1<<" is longer than "<<s2<<endl;
}
else if (s2.length() > s1.length())
{
    cout<<s2<<" is longer than "<<s1<<endl;
}
cout<<"You entered: "<<s1<<", "<<s2<<endl;
cout<<s2+s1<<" "<<s1<<endl;






//******************End Problem 4***********************/
/******************Problem 5 Fixing the >>/getline interaction bug**********
// Run this program and enter age followed by name. Fix it so it works right
//
   string name;
   int age;
   cout << "Enter your age: ";
   cin >> age;
   cout << "Name (first last): ";
    cin.ignore(1,'\n');
   getline (cin, name);
   cout << name << ", you don't look "
        << age << ".\n";



//******************End Problem 5***********************/
/******************Problem 6 Formatting a table of numbers
// Run this program, then modify it with a third column showing N squared
//  use proper formatting

int n;
cout << " N  sqrt(N)  pow(n,2)" << endl;
cout << "-----------------------" << endl;
cout << fixed << showpoint<<setprecision(3);
for (n=1; n<=10; n++)
   {
    cout << setw(2) << n;
    cout << setw(8) << sqrt(n);
    cout << setw(14) << pow(n , 2);
    cout << endl;
   }

//******************End Problem 6***********************/
/******************Problem 7A Formatting a table of strings and numbers
//   This program makes a payroll table in the file payroll.txt
//   run it, then fix the formatting so a) the three columns are neatly
//   arranged b) the name column is left justified and c) the other
//   two columns are right justified

   const double RATE = 4.55;
   int tutor;
   int hours;
   string name;
   ofstream fout("payroll.txt");

   for (tutor=1; tutor<=3; tutor++)
      {
      cout << "Tutor's last name and hours worked: ";
      cin >> name >> hours;
      fout << fixed << showpoint << setprecision(2);
      fout  << left << setw(15) << name << right << setw(10)<< hours<< setw(10) << hours*RATE << endl;
      }

   fout.close();

//******************End Problem 7A***********************/
//******************Problem 7B Reading an input file
//   When processing lots of data, it can be more convenient
//     to store the data in a file rather than typing it in.

// (this problem is solved in the lecture video)

// write a program to read the information in payroll.txt
//  using a for loop that repeats 3 times
//  and printing out each line of data.
//  also print the sum of all the pay checks.

// add an if statement to verify the file opened properlty

// change to an end-of-file loop to put the read command in the while condition



//******************End Problem 7A***********************/
////////////////////PART 2 PROGRAMMING PROBLEMS//////////

/******************Problem 8 (2 points) ****************
//Add a function definition to the space above main so that this program
// works properly for inputs of penny, nickel, dime and quarter.
//     Sample input:   quarter
//     Sample output:  the value of a quarter is 25 cents
//
//  ONLY ADD A FUNCTION ABOVE MAIN. DO NOT CHANGE THE FOLLOWING CODE
string coin_name;
int value;
cout<<"Enter the name of your coin in lowercase letters "<<endl;
cin>>coin_name;
value = cents(coin_name);
cout<<"The value of a "<<coin_name<<" is "<<value<<" cents."<<endl;


//******************End Problem 8***********************/
/******************Problem 9 (2 points)*****************
// Copy your solution to problem 7 here
// A) Add column headings to the output file (see pay.cpp on p134-135
//      or in Chapter 6 source code)
// B) Add code to let the user enter the number of tutors to process
//     and modify the for loop so it repeats that many times (see pay.cpp)
// C) Add code to allow entry of tutors' first and last names, and output
//     them in the form    last, first



//******************End Problem 9***********************/
/******************Problem 10 (4 points)*****************
//  Copy your solution to Problem 9 here
//  A) First modify the program to read data from the file tutors.txt
//     This file has an extra column for the tutor's semester standing,
//     indicating how many semesters they have attended school.
//     You will need to add another variable to read the data in
//     this column.
//  B) Use this new value to increase a tutor's salary by $0.25 per hour
//      for each semester above 3 but not beyond 8 that they have attended.
//      (see test plan on handout)
//  C) Modify the output to show the student's semester standing and hourly
//      rate (see test plan on handout)







//******************End Problem 10***********************/
/******************Problem 11 (2 points)*****************
//  Read section 6.6, then write and test a function (add above main)
//  word_for_2digits, that takes a positive integer less than 100
//  and returns the string that is the word for that number
//  [Please follow the guidelines on p140-141. You will have to write a
//  total of four functions to solve this problem correctly and efficiently
//   To determine t and u, you should use integer division and modulus:
//      t = n/10;   u = n%10  ]
//
//  DO NOT CHANGE THE FOLLOWING STATEMENTS

int number;
string word;
cout<<"Enter a number from 1 to 99"<<endl;
cin>>number;
word = word_for_2digits(number);
cout<<"You entered: "<<word<<endl;


//******************End Problem 11***********************/
/******************Problem 12 (6 points)*****************
// Solve Problem 11 first. A) Following a similar logic, make a function
// words_for_3digits that takes a positive integer less than
// 1000 and returns the string that is the word or words for
// that number.  B) Generalize your solution for A) to display in words
// the name for any integer up to 2 billion
//
//  FOR PART A, DO NOT CHANGE THE FOLLOWING STATEMENTS

long number;
string word;
cout<<"Enter a number from 1 to 999"<<endl;
cin>>number;
word = words_for_3digits(number);
cout<<"You entered: "<<word<<endl;


//******************End Problem 12***********************/

   //system("pause");
   return 0;
}
