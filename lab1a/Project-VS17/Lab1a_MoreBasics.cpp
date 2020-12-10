// Assignment 2    Lab2MoreBasics.cpp               Your Name Here
//  refer to Chapter 3 for in depth coverage of the material 
//  described here. Each problem is worth 1 point unless noted otherwise.

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
////////////////////PART 1 DRILL EXERCISES//////////////
/******************Problem 1 Int and Float**************
// Fix this program so it calculates the area of a circle correctly
//   (enter 1, get area is 3.14)
// does it matter if you use float or double?
    cout<<fixed<<showpoint<<setprecision(16); // display 16 digits 
    
	int area, radius;	
	cout << "enter a radius: ";
	cin >> radius;
	area = radius * radius * 3.141592653589;
	cout << "the area is " << area << endl;



//******************End Problem 1***********************/
/******************Problem 2 Arithmetic Expressions******
// Code the formula for calculating the Force (see handout)
 	float Z=0.037, P=43.2, Force;	
	Force =        // FINISH THIS FORMULA
	cout << "the Force is " << Force << endl;



//******************End Problem 2***********************/
/******************Problem 3 Mixed Type Arithmetic*******
//WITHOUT RUNNING THE PROGRAM, work out what would be printed
// (practice for midterm when you can't use compiler!)
int m, n;  
double  x,y;
m = 2.5;
n = 3;
x = m;
m = n + 1;
y = x + 1.5;
cout<<"m = "<<m<<" n = "<<n<<" x = "<<x<<" y = "<<y<<endl;

//YOUR ANSWER:
	
	
//******************End Problem 3***********************/
/******************Problem 4 Integer Division, Constants
// Why does this program give the wrong answer? (see handout)
// Fix it, then modify it to use the constant PI in the formula
//
	const float PI = 3.14;  
	float volume, radius;	
	cout << "enter a radius: ";
	cin >> radius;
	volume = 4/3 * 3.14 * radius * radius * radius;
	cout << "the volume is " << volume << endl;
	
//******************End Problem 4***********************/
/******************Problem 5 Int vs Char, TypeCasting****
//   This program should show the two grades you enter (such as A C)
//    (hint--check data type!)
//   Fix it. Then use typecasting (to int) to show the ASCII values of the grades

int grade1, grade2;	
cout<<"Enter 2 grades: "<<endl;
cin>>grade1>>grade2;
cout<<"Grade 1 is "<<grade1<<endl;
cout<<"Grade 2 is "<<grade2<<endl;

cout<<"ASCII value of Grade 1 is "<<grade1<<endl;
cout<<"ASCII value of Grade 2 is "<<grade2<<endl;

//******************End Problem 5***********************/
/******************Problem 6 Remainder Operator**********
//   We know that 190 seconds is 3 minutes 10 seconds
//   Fix this program so it agrees with you

  int totalsec=190, min, sec;
  min = totalsec/60;
  sec = totalsec-60;

  cout << totalsec << " seconds is " << min 
       << " minutes and "<<sec<<" seconds" << endl;
  
////////////////////PART 2 PROGRAMMING PROBLEMS//////////
//******************End Problem 6***********************/
/******************Problem 7 (2 points) ****************
//Write a program that converts a weight from kilograms to pounds 
//(1 kg = 2.2 lbs) (see test plan on handout) 




//******************End Problem 7***********************/
/******************Problem 8 (2 points)*****************
// Write a program that inputs how many quarters and dimes 
// you have and prints out the total value in dollars. (see test plan)
// (You can experiment with formatting currency values by activating
//  the following line--for more info see page 42)

// cout<<fixed<<showpoint<<setprecision(2);


//******************End Problem 8***********************/
/******************Problem 9 (2 points)*****************
// Write a program that converts ounces into pounds and ounces 
// (use integer division and % operator)
// (see test plan on handout) 



//******************End Problem 9***********************/
/******************Problem 10****************************
// Worth  4 points
// copy your solution to one of the problems 7, 8, 9 above
// modify it to use a for loop to repeat the calculation 3 times
// See page 55-57



//******************End Problem 10***********************/

   system("pause");
   return 0;
}
