// fracs.cpp
// Input, reduce, and output a fraction.
#include <iostream>
#include "myfuns.h"
using namespace std;

void get_frac (int& num,  // out
               int& den); // out
// input num/den

void reduce (int& num,  // in-out
             int& den); // in-out
// reduce num/den to lowest terms

void put_frac (int num,  // in
               int den); // in
// output num/den to outs

int main()
{
   int numerator, denominator;
   cout << "Enter a fraction (num/den): ";
   get_frac (numerator, denominator);
   put_frac (numerator, denominator);
   cout << " reduces to ";
   reduce (numerator, denominator);
   put_frac (numerator, denominator);
   cout << endl;
   return 0;
}

void reduce (int& num, int& den)
{
   int gc_div;
   gc_div = gcd(num,den);
   num = num/gc_div;
   den = den/gc_div;
}

void get_frac (int& num,  // out
               int& den)  // out
{
   char slash;
   cin >> num >> slash >> den;
}

void put_frac (int num, // in
               int den) // in
{
   cout << num;
   if (den != 1)
      cout << '/' << den;
}

/* Sample run:
Enter a fraction (num/den): 9/15
9/15 reduces to 3/5
*/
