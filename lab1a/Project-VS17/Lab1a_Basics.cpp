// Assignment 1    Lab1Basics.cpp               Your Name Here
//  refer to Chapter 2 for in depth coverage of the material 
//  described here. Each problem is worth 1 point unless noted otherwise.

#include <iostream>
using namespace std;

int main()
{
////////////////////PART 1 DRILL EXERCISES//////////////
/******************Problem 1 *******************
// Run this program taken from the lecture slides then modify so it   
//  a) asks the user to input a height in feet
//  b) inputs a value and stores it in variable feet
// You will now have an interactive program that converts feet to inches

int feet, inches;
feet = 6;
inches = feet * 12;
cout << "Height is " << inches << " in.";


//******************End Problem 1***********************/
/******************Problem 2  ***************
// This program converts yards to feet. 
//   A) Fix the one compiler error so it runs
//   B) Change the variables x and y to more meaningful names

   int x, y;
   cout<<"Enter yards"<<endl;
   cin>>x;
   y = 3 * X;
   cout << x << " yd. is";
   cout << y << " ft.";
   cout << endl;

//******************End Problem 2***********************/
/******************Problem 3  ***************
//WITHOUT RUNNING THIS PROGRAM, figure out what it will show
// (then run it and see if you were right)
int num = 10;
int x = 5; 
cout<<num;
cout<<x;
cout<<num<<endl;


// YOUR PREDICTED OUTPUT: 
//	
// THE ACTUAL OUTPUT:
//	
//******************End Problem 3******************************/
/******************Problem 4  ***************
// This program converts an input number of nickels and dimes
// to their total value in cents.  A) Make sure it works right. 
// B) Modify it so it works with dimes and quarters instead of
//    nickels and dimes
   
int nickels, dimes, cents;
cout << "Enter number of nickels and dimes: ";
cin >> nickels >> dimes;           
cents = 5 * nickels + 10 * dimes;
cout << nickels << " nickels and "
     << dimes << " dimes " << "= "
     << cents << " cents " << endl;


//******************End Problem 4***********************/
/******************Problem 5 **************
// This program has three errors. Run it and fix them.

   int n;
   cout << "Hello" << endl;
   N = 2;
   cout << "n eqalls " << n
   cout << "So long << endl;

//******************End Problem 5***********************/
/******************Problem 6 *******************
//   Will this program compile?
//   Fix it so that it gives the intended output. 

  int x, y;
  x = 10;
  y = 25;
  cout << "Sum = " << x+y << endl;
  cout << "Difference = " << "x-y" << endl;
  
  
////////////////////PART 2 PROGRAMMING PROBLEMS//////////
//******************End Problem 6***********************/
//******************Problem 7 (2 points) ****************
// Write a program that converts yards to inches. 
//  Input yards, output inches
// (see test plan on Assignment 1 handout)




//******************End Problem 7***********************/
//******************Problem 8 (2 points)*****************
// Write a program that can be used to calculate an employee paycheck. 
// Your programs should input two numbers: the number of hours worked 
// and the hourly rate. (see test plan)




//******************End Problem 8***********************/
//******************Problem 9 (2 points)*****************
// Write a program that asks the user to input a length
//  and width of a rectangle.  The program should 
//  then calculate and output both the area (length x width)
//  and perimeter ( 2x(length + width)) 
// (see test plan on handout) 


//******************End Problem 9***********************/
//******************Problem 10****************************
// Worth  4 points
// copy your solution to one of the problems 7, 8, 9 above
// modify it to write a) Your Name, b) the user input, and
// c) program output to a text file. See page 32-34



//******************End Problem 10***********************/

   system("pause");
   return 0;
}