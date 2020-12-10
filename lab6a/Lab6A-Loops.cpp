// Assignment 6           Lab6Loops.cpp         Your Name Here
//  refer to Chapter 7 for in depth coverage of the material
//  described here. Each problem is worth 1 point unless noted otherwise.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
////////////////////PART 1 DRILL EXERCISES//////////////
/******************Demo 0  Make a Simple While Loop ******************
   int n=0;

   cout<<"n = "<< n << endl;

//********************End Demo 0 **********************/
/******************Demo 1  Basic Step Controlled Loop**************
//  Study and run the following step controlled loop. Then modify it so it
//     displays the numbers 0 2 4 6 8

    cout<<"Output from a Counted Loop: \n";
	int counter = 23;
	while (counter> 0)
	{
		cout <<counter<<", ";
		counter=counter-1.0;
	}
	cout<< "after the loop, counter=" << counter << endl;

//******************End Demo 1***********************/
/******************Demo 2  Infinite Loop*****
// This program is supposed to count up from 0 to 100 in steps of 10
//  fix it so it works right.
	int k = 0;
	while (k != 101)
	{
		cout <<k<<", ";
		k + 10;
	}

//******************End Demo 2***********************/
/******************Demo 3  Repeat a Calculation*******
//  Run this program, then modify it using a While-loop to calculate
//  the area of three different circles

    float radius, area;
    cout<<"Enter a radius ";
	cin>>radius;
	area=3.14*radius*radius;
	cout<<"The area is "<<area<<endl;

//******************End Demo 3***********************/
/******************Demo 4  For Loop
//  Fix the bugs, then modify this program using a For-loop to calculate
//  the perimeter of three different circles

    float radius, area;
    cout<<"Enter a radius ";
	cin>>radius;
	perimeter=2*3.14*radius;
	cout<<"The perimeter is <<perimeter<<endl;

//******************End Demo 4***********************/
/******************Demo 5 Debugging a Summing For Loop
// This program is supposed to sum the integers from 1 to 5 and
//  give a result of 15. A) Fix the bugs so it works right. B) Then modify
//  it so it lets the user input the value n for upper limit of the sum.
//      User Input:      Result:
//          6                21
//          8                36

  int n = 8, i, sum = 0;
  for (i=0; i<=n; i++);
	  sum + 1;
  cout<<"The sum of integers from 1 to "<<n<<" is : "<<sum<<endl;

//******************End Demo 5***********************/
/******************Problem 6  Calculating an average
// This program calculates the average of four numbers. Verify it works,
// Then modify it so the user can enter the number of data points
//  they need to average, and then input their data and calculate the average.

   int i, number;
   float user, sum;
   sum = 0;

   cout << "How many data points?" << endl;
   cin >> user;
   for (i=1; i<=user; i+=1)
      {
      cout << "Enter number: ";
      cin >> number;
      sum += number;
      }
   cout << "Average = " << sum/user<< endl;

//******************End Problem 6***********************/
/******************Problem 7  Printing a table of data
// run this program, then add an extra column of data to show the
//  square root of the counter variable. Use the sqrt() function
//  which is in the <cmath> library.

int j;
// Display the headings for the table.
 cout << "j     Square    Square-Root" << endl;
 cout << "--------------------------" << endl;
// Now display the table
 for ( j = 1; j <= 5; j=j+1)
    cout << j << "   "  << j * j << "           " << sqrt(j) << endl;
//Display Square-Root


//******************End Problem 7***********************/
/******************Problem 8  Finding the largest and smallest numbers
// This program finds the largest value out of 5 data points entered.
// Fix the bugs, then add code to determine the smallest as well.
   int i, num, max , min ;
    cout << "Enter a number: ";
    cin >> num;
    max = num;
    min = num;
   for (i=1; i<=4; i++)
      {
        cout << "Enter a number: ";
        cin >> num;
         if (num > max)
         {
             max = num;
         }
         else if(num < min)
         {
             min = num;
         }
      }
   cout << "The max is " << max << endl;
   cout << "The min is " << min << endl;

//******************End Problem 8***********************/
/******************Problem 9 Indefinite (User Controlled) Loop
// This program calculates pay for an indefinite number of employees.
// A) Make sure it works right
// B) Add a program below it that that calculates the area of
//    an indefinite number of circles, stopping when -1 is entered.
    float hours, pay, rate;
	cout << "enter  hours  and  rate, -1 -1 to stop: ";
	cin >> hours >> rate;      // get first data set
	while(hours>0)			   // as long as data is OK to process...
	{
		pay = rate * hours;     	// process the last entered data set
		cout << "pay is " << pay << endl;
		cout << "enter  hours  and  rate, -1 -1 to stop: ";
		cin >> hours >> rate;      // get another data set
	}

    float area;
    int radius;
    cout << "Enter a radius: ";
    cin >> radius;
    while(radius > 0 )
    {
        area = radius * radius * M_PI;
        cout << "Area = " << area << endl;
        cout << "Enter a radius: ";
        cin >> radius;
    }
    cout << "Thank you" << endl;

//******************End Problem 9***********************/
/******************Problem 10 Hand Tracing
// DO NOT RUN THESE CODE EXAMPLES!!  PREDICT THE OUTPUT of these code fragments
//  Assume all variables are declared. Use the memory table method on another
//  sheet of paper as shown in class and in section 7.8. Type your final answers
//  below the problems.  This is essential practice to prepare for the
//  Midterm Exam, which is closed computer

// a) for (int j=20; j>=5; j=j-3)       b) n=1;
//      cout << j << ' ';                  while (n <= 9)
//                                         {
//                                            cout<< n << ' ';
//                                            n = n + 5;
//                                         }
// ANSWERS FOR A:                          B:
//
// c) n=1;                              d) p = 30;
//    while (n <= 9) {                     for (int i=5; i>0; i--)
//       n = n + 5;                        {
//       cout<< n << ' ';                     p = p - 2;
//       }                                    cout << p << ' ';
//                                            if (p % 4 == 0)
//                                               cout<<"OK";
//                                            cout << endl;
//                                         }
// ANSWERS FOR C:                          D:
//
//
//******************End Problem 10***********************/

////////////////////PART 2 PROGRAMMING PROBLEMS//////////
/******************Problem 11 (1 Points) Fahrenheit to Celsius Table
// Write a program to output a Fahrenheit to Celsius conversion table
//  (see test plan on handout) Fahrenheit should cover the range 32 to 100
//  in steps of 2 degrees. Hint: Celsius = 5/9 x (Fahrenheit - 32)
//
//  Use proper formatting for column spacing and 1 decimal of precision
//  by referring to your Lab5Strings.cpp file  or Chapters 2 and 6




//******************End Problem 11***********************/
//******************Problem 12 Function Tester
// Copy any of the function definitions from your Lab4Functions.cpp file
// to the region above the main program block
// Write a test program that uses a User-controlled loop to a) input
// repeatedly the arguments to be passed to the function, b) call
// the function with those arguments and then c) output the result of the
// function call.



//******************End Problem 12***********************/
/******************Problem 13  Cash Register Program
// Write a program to simulate a cash register. It accepts the cost
//  for an indefinite number of items until a sentinel value is entered.
//  Then it displays the subtotal of all the items, calculates tax
//  and displays the grand total.
//
    float cost, subtotal, tax = 0.85, total;;
    cout << "Item cost, -1 to stop: " << endl;
    cin >> cost;
    while(cost != -1)
    {
        subtotal += cost;
        cout << "Item cost, -1 to stop: " << endl;
        cin >> cost;
    }
    tax = (tax * subtotal);
    total =  (tax + subtotal);
    cout << "Subtotal: $ " << subtotal << endl;
    cout << "Tax : $" << tax << endl;
    cout << "Total: $ " << total << endl;




//******************End Problem 13***********************/
//******************Problem 14
// Write a program to input a positive integer N, and
//  print the divisors of N from 1 to <N, the number of
//  divisors, and their sum (see test plan on handout).
//   Hint - k is a divisor of N   if  (k % N == 0)
    int N, k, i;
    cout << "Enter a positive integer: ";
    cin >> N;
    cout << "Divisors of " << N << ":" << endl;
    for(k = 1; k < N; k++)
    {
        if (N % k == 0)
        {
            cout << k;
        }
    }
    cin >> N;




//******************End Problem 14***********************/
/******************Problem 15
// Write a program that uses a data sentinel loop to
// repeatedly input a positive integer, and tell whether
// the input integer is deficient, perfect, or abundant
//
// For example:
//   6 is perfect because 1 + 2 + 3 = 6
//  15 is deficient because 1 + 3 + 5  < 15
//  16 is deficient because 1 + 2 + 4 + 8 < 16
//  24 is deficient because 1 + 2 + 3 + 4 + 6 + 8 + 12 > 24
//
// Hint: start with your solution to 14,
//       and wrap a data sentinel loop around it
//******************End Problem 15***********************/

//system("pause");
}
