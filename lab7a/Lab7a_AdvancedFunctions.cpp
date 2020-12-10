//CSIS 10A			Lab7A-AdvancedFunctions.cpp	   YourNameHere

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//This laboratory continues the development of more advanced function
// topics, found in Chapter 9 and 10.1 - 10.3 of your text

//////////////////// PART 1 DRILL EXERCISES ////////////////////////////
/// Exercises 1 - 6 are demo problems, we do in lecture.
//*--------------------------DEMO 1-----------------------------------
//  WITHOUT RUNNING THE CODE, Predict the output for this program
//
//  void somefun(int p, int& q);
//
//  int main()			PREDICTED OUTPUT:
//  {
//      int m=0; n=0;
//      somefun(m, n);
//      cout << m << " " << n << endl;
//      system("pause");
//      return 0;
//  }
//
//  void somefun(int p, int& q)
//  {
//      p = 5; q = 10;
//  }
//
//*/
/*---------------------------DEMO 2 Maximum, Syntax Errors ------------//
//   What is wrong with this program? Fix the syntax errors. SEE TEST PLAN

int findmax(int x, int y, int & max);

int main()
{
  int x, y;
  int & max;

  cout << "Enter two numbers" << endl;
  cin >> x >> y;

  findmax(x, y, &max);

  cout <<"The largest number is " << max << endl;
  system("pause");
  return 0;
}

int findmax(int x, int y, int & max)
{
  if (x > y)
     &max = x;
  else
     &max = y;
  return &max;
}
//*/

/*--------------------------DEMO 3-----------------------------------
//   In the following program, complete the function definition
//	 for the Rectangle function so that it returns the area
//   and perimeter as reference parameters (but there will be no return statement!)
//
//     for example in main, after calling  Rectangle(5, 2, ar, per);
//		    ar will hold 10, and per will hold 14
//
//	  for assistance, refer to circle.cpp in the handout or in Ch09 folder

void Rectangle(float length, float width, float & perim,  float & area)
{  // your code here


}

int main( )
{
 float len = 5, wid=2, ar, per;
 cout<<"length = "<<len<<" , width = "<<wid<<endl;
 Rectangle(len, wid, per, ar);
 cout<<"Perimeter = "<<per<<" , Area = "<<ar<<endl;
  system("pause");
  return 0;
}

/*/
/*--------------------------DEMO 4 -----------------------------------
// An employee at Acme gets a base wage of $400 each week.
// If she works over 45 hours, she gets (2 * bonus) added to her
// wage. If she works over 40 hours but not over 45 she gets
// the bonus added to her wage. Why doesn't this work? Fix it so
// it does  SEE TEST PLAN


void process_emp(int hrs, int& salary);

int main()
{
 int hrs, wage, bonus;
 wage = 400;
 bonus = 100;
 cout << "Enter hours worked ";
 cin >> hrs;
 process_emp(hrs, wage);
 cout << "Updated wage = $" << wage << endl;
 system("pause");
 return 0;
}


void process_emp(int hrs, int& salary)
{
 if (hrs > 45)
   salary = salary + 2* bonus;
 else if (hrs >40)
   salary = salary + bonus;
}

//*/

/*--------------------------DEMO 5-----------------------------------
//   Swapping variable. Run the example below, then remove the & from one or
//   more of the parameters.  Notice how the program works (or doesn't!)
//   Can you explain why?
//
//   THEN, using only repeated calls to swap, add statements at the bottom
//    of main (CHANGE MAIN!! :) that make the variables a, b, c
//    contain 75, 43, 22


void Swap(float& x, float& y)
{//  exchanges the values of x , y
 //   IN/OUT x, y, the variables to be swapped
 float temp = x;
 x = y;
 y = temp;
}

int main( )
{
 float a = 22, b = 43, c=75;
 cout<<"Initially,  a = "<<a<<" ,b = "<<b<<" ,c= "<<c<<endl;
 Swap(a,b);
 cout<<"After Swap(a,b),  a = "<<a<<" ,b = "<<b<<" ,c= "<<c<<endl;
 Swap(b,c);
 cout<<"After Swap(b,c),  a = "<<a<<" ,b = "<<b<<" ,c= "<<c<<endl;
 Swap(a, c);
 cout<<"After Swap(a,c),   a = "<<a<<" ,b = "<<b<<" ,c= "<<c<<endl;
 system("pause");
}
//*/
// The following problems are worth 2 points each
/*--------------------------PROBLEM 6 -----------------------------------
//  WITHOUT RUNNING THE CODE, Predict the output for this program
//
//  void otherfun(int& p, int& q, int &r);
//
//  int main()			  PREDICTED OUTPUT:
//  {
//      int m=8; n=13; p=21;
//      otherfun(m, n, p);
//      cout << m << " " << n << " "<< p << endl;
//      return 0;
//  }
//
//  void otherfun(int& p, int& q, int &r)
//  {
//      int t=p;  p = q; q = r; r=t;
//  }
//
//*/

//////////////////// PART 2 PROGRAMMING PROBLEMS ////////////////////////

/*--------------------------PROBLEM 7  ---------------------------
//   Write a function to convert a total number of inches to
//    yards, feet and inches without altering the original inches
//
//   HINT:  1) look at the function call in main
//          2) construct the function head to match the function call
//          3) the first parameter is pass by value (in),
//               the last 3 are by reference (out)
//          4) use integer division and modulus to calculate the values
//             (refer to your solution to problems 6 and 9 in Lab2MoreBasics.cpp)
//
//   Before writing this function, view the function call in main to find
//    out its name and to get an idea of how it should work
//
//	 Expected output:     50 inches converts to 1 yards , 1 feet, and 2 inches
//	                      83 inches converts to 2 yards , 0 feet, and 11 inches

// your function here:


void Convert(int inches, int & yds, int & ft, int & in)
{
    yds = inches / 36;
    inches -= (yds*36);
    ft = inches/12;
    in =  inches%12;
}


// DO NOT MODIFY MAIN
int main( )
{
 int inches=50, in, ft, yds;
 cout<<inches<<" inches ";
 Convert(inches, yds, ft, in);
 cout<<"Converts to "<<yds<<" yards , "<<ft<<" feet, and "<<in<<" inches"<<endl;
 cout<<"83 inches ";
 Convert(83, yds, ft, in);
 cout<<"Converts to "<<yds<<" yards , "<<ft<<" feet, and "<<in<<" inches"<<endl;
 //system("pause");
 return 0;
}
//-----------------------------END  PROBLEM 7----------------------*/

/*--------------------------PROBLEM 8 ---------------------------
// Sorting 3 Values.  Study slide 30 and the code in alpha3.cpp
// Run the program, then  A) modify sort3 so it sorts the three variables
// passed to it in main.  then B) modify main to read in 4 values, and
// use repeated calls to sort3 to arrange them in increasing order.
//

void Swap(float& x, float& y)
{//  exchanges the values of x , y:
 float temp = x;
 x = y;
 y = temp;
}

// Sort3() Place three parameters into numerical order
// IN/OUT: x, y, z are any values. Upon return, they
// 		will be in numeric sequence   SEE TEST PLAN

void Sort3 (float& x, float& y, float& z)
{  //A)  Add code here to sort x, y, z


}


// B) After A works, and you can sort 3 values properly, modify main
//    to read in 4 values and sort them by using several calls to Sort3
//    SEE TEST PLAN

int main( )
{ float r, s, t;
   cout<<"Enter 3 values: \n";
   cin>>r>>s>>t;
   Sort3(r, s, t);
  cout<<"in order:" << r <<" "<< s <<" "<< t << endl;
  //system("pause");
  return 0;
}

//-----------------------------END  PROBLEM 8----------------------*/

/*------------------ Problem 9 IN, OUT, and IN-OUT parameters
// This program implements the function structure chart on the lab handout
// Its purpose is to input, reduce, and output a fraction.

//A)  After reading the handout, the main program, and the sample output,
//    fill in the blank for each parameter type
//    and indicate after the comment whether it is an in, out, or in-out parameter
//    then also fill in the blank in the reduce function definition

//B)  After A) works, write an add_frac function that adds two fractions
//    and returns the numerator and denominator of the result.
//    In main, input a second fraction and use your add_frac to
//    compute the sum and print it out as in the lab test plan.
//    HINT: your add_frac function will need 6 parameters


void get_frac (_____ num,  //
               _____ den); //
// input num/den

void reduce (_____ num,  //
             _____ den); //
// reduce num/den to lowest terms

void output_frac (_____ num,  //
                  _____ den); //
// output num/den to outs

int gcd (int a, int b)
// Use the Euclidean algorithm to calculate and
// return the greatest common divisor of a and b.
{
   int r;
   a = abs(a); b = abs(b);
   while (b>0)
      { r = a%b; a = b; b = r; }
   return a;
}

int main()
{
   int numerator, denominator;
   cout << "Enter a fraction (num/den): ";
   get_frac (numerator, denominator);
   output_frac (numerator, denominator);
   cout << " reduces to ";
   reduce (numerator, denominator);
   output_frac (numerator, denominator);
   cout << endl;
   return 0;
}

void reduce (____ num, ____ den)
{
   int gc_div;
   gc_div = gcd(num,den);
   num = num/gc_div;
   den = _____;        // complete
}

void get_frac (____ num,
               ____ den)
{
   char slash;
   cin >> num >> slash >> den;
}

void output_frac (____ num,
                  ____ den)
{
   cout << num;
   if (den != 1)
      cout << '/' << den;
}

/* Sample run:
Enter a fraction (num/den): 9/15
9/15 reduces to 3/5
*/
//-----------------------------END  PROBLEM 9----------------------*/

/*------------------ Problem 10 Function Overloading and Templates
//
// A) Copy your solution to problem 8 here
//    Make overloaded version of sort3 that accept char data
//    add statements to the end of main to read 4 char variables, sort them,
//     and print them in alphabetical order
//
// B) Comment out both sort3 functions and replace them
//    with a function template for sort3
//    Also, comment out both your swap functions,
//     but do not write a template for it
//    (there already is a swap function template in the std namespace)
//
//    Your program should process both int and char data with the same
//     two functions

//-----------------------------END  PROBLEM 10----------------------*/

