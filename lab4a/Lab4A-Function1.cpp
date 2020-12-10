// Assignment 4           Lab4Function1.cpp         Wade Costa
//
//  refer to Lab4Function.doc for instructions on how to complete this lab,
//  and Chapter 5 for in depth coverage of the material.
//

#include <iostream>
#include<cmath>
using namespace std;

void opening(int n)
{
    if (n==0)
        cout<<"Once upon a time, ";
    else
        cout<<"A long time ago, in a galaxy far, far away, ";
}

void noun_phrase( )
{
    cout<<"five people ";
}

void verb()
{
    cout<<"jumped" ;
}


int main(  )          // main block where execution begins
{
    opening(0);
    noun_phrase();
    verb();
    //system("pause");
    return 0;
}

