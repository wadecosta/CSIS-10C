// circle.cpp
#include <iostream>
using namespace std;

void do_circle_calcs(double  r,
                     double& A, double& C );
// Given the radius (r) of a circle, calculate
// its area (A) and circumference (C)

void output_circle_calcs(double r,
                         double A, double C );
// Output the radius (r), area (A), and
// circumference (C) with messages.

int main()
{
   double radius, area, circumf;
   cout << "Enter radius: ";
   cin >> radius;
   do_circle_calcs (radius, area, circumf);
   output_circle_calcs (radius, area, circumf);
   return 0;
}

void do_circle_calcs(double  r,
                     double& A, double& C )
{
   const double PI = 3.14159;
   A = PI * r * r;
   C = 2 * PI * r;
}

void output_circle_calcs(double r,
                         double A, double C )
{
   cout << "   Radius = " << r << endl;
   cout << "   Area = " << A << endl;
   cout << "   Circumference = " << C << endl;
}

/*
Enter radius: 2.4
   Radius = 2.4
   Area = 18.0956
   Circumference = 15.0796
*/

