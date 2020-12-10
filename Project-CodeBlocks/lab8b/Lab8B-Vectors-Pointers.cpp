// CSIS10C         Lab 8B Vectors and Pointers        YourNameHere

#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;
const int SIZE = 5;

// Prototypes to display and sort
void Display(int array[], int size); // display an array of int
void Swap (int &a, int &b);   // swap 2 ints
void Sort (int a[ ], int size); // sort an array of int

int main ()
{	
// ----------------- Problem 0 Basic Vectors ---------------------
// add the #include for vector

// define, add data, and print, vectors of int, string, double



/* ----------------- Problem 1 ----------------------
// 1)  Declare a vector of int 
//     read a list of ints from the user until a -1 is entered
//     print the list out using a for loop
 



//  overload the Display function to take a vector of int

//*/

/* ----------------- Problem 2 ----------------------
//   Load the data in file scores.txt into a vector of int 
//   using an end of file loop to read into the vector
//   Then display only the data in the vector



// ----------------- END Problem 2 -------------------*/

/* ----------------- Problem 3 ----------------------
//  Overload the Sort function to take a vector of int 
//   use this function to sort your data
//   display the data after sorting



//*/

/* ----------------- Problem 4 Basic Pointers ----------------------

	v1 = 0;
	p1 = &v1;
	*p1 = 42;
	cout <<"v1 = "<< v1 << endl;
	cout <<"p = "<< p << endl;
	cout <<"*p1 = "<< *p1 << endl;
 
 
//  make a second pointer p2 that also points to v1 

	cout <<"*p2 = "<< *p2 << endl;
	

//  change the value of v1 to 13 using pointer p2


	cout<<"v1 = "<< v1 << endl;


//*/
/* ----------------- Problem 5 Dynamic Variables --------------
//   declare p1 again and make it refer to a new int  
//   assign the value 53 to the location that p1 refers to
//   make p2 refer to a new int
//   ask the user to enter an integer and store it at the 
//     location p2 refers to 
//  



//    did you remember to free up the dynamic memory you used?
//
//*/
/* ----------------- Problem 6 Pointer Calculator --------------
// write a simple calculator program that reads in an arithmetic
//  operator (+, -, *, /)  and two operands (integers)
//  and then prints the result of performing
//  the desired operation on the operands
//  
// The CATCH: the only named variables you can use are pointers
//   all other variables must be dynamic (anonymous) variables

char* operator;
int *p1, *p2, *result;

cout<<"Enter a math operator (+,-,*,/): ";
// cin>>
cout<<"Enter the first integer ";
//cin>>

// continue...



// don't forget to free up your dynamic memory
//
// ----------------- END Problem 6 -------------------*/



    system("pause");
}

void Display(int array[], int size)  
{   int k;
    cout<<setw(8)<<"Index:";
    for (k=0; k<size; k++)
        cout<<setw(4)<<k;
    cout<<endl<<setw(8)<<"Value:";
    for (k=0; k<size; k++)
        cout<<setw(4)<<array[k];
    cout<<endl;
}

void Swap (int &a, int &b)
{
    int T=a;  
    a=b;
    b=T;
}
// Sort()  Order the values in the array
void Sort (int a[ ], int size)
{	int smallest;
	int n, k, small_pos;
	for (k=0; k<size-1; k++)					// repeat; each cell but last.
	{  smallest = a[k];
		for (n=k; n<size; n++)					// find smallest from k on...
			if (a[n] <= smallest)				// if smaller, save position
			{	small_pos = n;
				smallest = a[n];
			}
		Swap (a[k], a[small_pos]);				// swap these cells
	}
}
