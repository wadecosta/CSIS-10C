// myfuns.h
// Library of user-defined functions for "Using C++",
// by Hennefeld, Baker, & Burchard.  NOTE: Students may wish
// to add their own utility functions to this library.
#ifndef _MYFUNS_H
#define _MYFUNS_H
#include <cmath> // for floor, ceil, pow, labs fns.
using namespace std;

long max (long a, long b)
// return max of a and b
{
   if (a > b)
      return a;
   else
      return b;
}

double round (double x)
// Return the value of x rounded to the nearest integer
{  return floor(x+0.5); }

double round (double x, int d)
// Return the value of x rounded to d decimal places.
{
   double pow10; // 10 to the d power
   double x_rnd; // rounded value of x
   pow10 = pow(10,d);
   x_rnd = x * pow10;
   x_rnd = floor(x_rnd + 0.5);
   x_rnd /= pow10;
   return x_rnd;
}

long gcd (long a, long b)
// Use the Euclidean algorithm to calculate and
// return the greatest common divisor of a and b.
{
   long r;
   a = labs(a); b = labs(b);
   while (b>0)
      { r = a%b; a = b; b = r; }
   return a;
}

long lcm (long a, long b)
// Return the least common multiple of a and b.
{ return (a/gcd(a,b)*b); }

#endif

