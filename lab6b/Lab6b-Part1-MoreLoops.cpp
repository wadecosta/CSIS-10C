//  Lab6b-Part1-MoreLoops.cpp         Your Name Here
//
//  refer to Chapter 8 for in depth coverage of the material 
//  described here. Each problem is worth 1 point unless noted otherwise.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{ 
////////////////////PART 1 DRILL EXERCISES//////////////
/******************Problem 1   Going Over 500**************
//  This program should find the value of n which first puts
//   the sum of even squares 2*2 + 4*4 + 6*6 +... n*n over 500 
//  Does it work? Test it by changing 500 to 10. Fix any bugs, then re-run
//   to solve the original problem. 
//
//  What value of n puts the sum over 500?  ________

  int n = 2, sum = 0;
  sum = 0;
  n = 2;

  do
  {
     sum = sum + n*n;
     n = n+2;
  } 
  while (sum <= 500);

  cout <<"Sum first went over 500"<< endl;
  cout <<"when " << n << " squared was added on" << endl;
  cout <<"Sum was "<< sum << endl;
   
//******************End Problem 1***********************/
/******************Problem 2  Compound Interest***** 
// If $500 is invested at 4.5% compounded annually, after how many 
// years will the balance first exceed $1000 ?   See Test Plan
//
  float balance=500, n=0;
   
   while (              )
   {
		balance = balance + ____________;
		n = n + __________ ;
	}
    cout<<"Balance exceeds 1000 after "<< n << "years \n ";

//******************End Problem 2***********************/
/******************Problem 3  Input Validation *******
//  A) Copy your solution to 2 here. 
//  B) Modify it to accept the initial balance and goal
//      (the goal was 1000 in problem 2) as user input.  
//  C) Add an input trapping loop to make sure balance and goal 
//      are both positive, and that balance is less than goal.
//     (use a compound boolean in the while loop condition)
//  See Test Plan


   

    
//******************End Problem 3***********************/
/*****************Problem 4  Nested For Loops
//  This program draws a triangle of *'s by nesting two for loops 
//  Modify the program to display the following picture:
//  ****
//  ***
//  **
//  *

  for (int k=1; k<=4; k++)
  {
    for (int m=k; m>0; m--) 
         cout<<"*";
    cout<<endl;
  }
	
//******************End Problem 4***********************/
/******************Problem 5 More Nested For Loops 
// Copy your solution to 4 here and modify it to produce the following
// picture: (you will need to add a 2nd inner loop to display blank spaces ' '
// one space at a time)
// **** 
//  ***
//   **
//    *
//




//******************End Problem 5***********************/
/******************Problem 6 Hand Tracing
// DO NOT RUN THESE CODE EXAMPLES!!  PREDICT THE OUTPUT of these code fragments
//  Assume all variables are declared. Use a hand tracing/memory map on another
//  sheet of paper as shown in class and in section 7.8. Type your final answers
//  below the problems.  This is essential practice to prepare for the 
//  Midterm Exam, which is closed computer

// a) m=4; q = m;                        b) m=7; q = m;  
//     while (q + m <= 24)                  while (q + m <= 24)
//     {                                    {
//          q = q + m;                          q = q + m;      
//          cout<< q << ' ';                    cout<< q << ' '; 
//     }                                    }
//
// ANSWERS FOR A:                          B:
//            
//                                       
// c) m=10; q = m;                      d) 	int a=6,  b=3, p=1;
//     while (q + m <= 24)                  while ((a <30) && (p==1))
//     {                                    {
//          q = q + m;                           b += 5; 
//          cout<< q << ' ';                     a += b; 
//     }                                         if (b > 18)  
//                                                   p = 0;
// 												 cout<< a << b << p <<endl;	
//											}
//
// ANSWERS FOR C:                          D:
//
//
//******************End Problem 6***********************/

////////////////////PART 2 PROGRAMMING PROBLEMS//////////
/******************Problem 7 Over 1000 again
// Write a program to find the smallest n such that
// 1*1 + 3*3 + 5*5 + ... + n*n  exceeds 1000. Display both
// n and the corresponding sum.





//******************End Problem 7***********************/
/******************Problem 8 Package a loop into a function
// Pretend you have a function called line. It's job is to print a line of
// so many characters.  For example, the function call line('*',4);  will 
// print   ****    and  line('x', 6);  will print xxxxxx    
// 
// A) Write the definition of line above main (hint:  use a for loop 
//    to draw the desired character the correct number of times
// B) Test your function by running the following code. You should get the 
//      pattern     xxxxoooyy
// 
	line('x',4);
	line('o',3);
	line('y',2);
	
// C) When B works, copy your solution to problem 5 above and simplify 
//    the code by replacing the inner for loops with function calls to line.

//******************End Problem 8***********************/
//******************Problem 9 
// A) Write  a program to calculate the square root of a number N
//    A square root can be approximated by making successive guesses,
//    starting with a first guess of 1. A better guess can be calculated
//    using the formula    nextguess=0.5*(lastguess + (N/lastguess))
//    where N is the number for which a square root is to be calculated, and 
//     lastGuess starts at 1 and is continually updated with the value of nextGuess
//    Repeat this calculation until the absolute value of the difference between 
//    two successive guesses is less than 0.005. This formula was invented by the 
//    ancient Babylonians, in what is present day Iraq.

   double N = 16;
   double lastGuess = 1, nextGuess;

   // here is a test of abs, the absolute value function in <cmath>
   // cout<<"absolute value of -3.5 is "<<abs(-3.5)<<endl;
    

// B) Once you get A to work, write your own mySQRT function above main that 
//    takes a double parameter N and returns its square root (without using 
//    the  sqrt() function !!!) using your code from A.
//    then test your function using the code below

	// cout<<"enter a number and I will compute its square root ";
	// cin>>N;
	// cout<<"The square root of "<<N<<" is "<<mySQRT(N)<<endl;
	
//******************End Problem 9***********************/    
system("pause");
return 0;
}
