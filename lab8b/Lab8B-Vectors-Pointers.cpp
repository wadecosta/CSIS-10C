// CSIS10C         Lab 8B Vectors and Pointers        Wade Costa

#include <iostream>
#include <fstream>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;
const int SIZE = 5;

// Prototypes to display and sort
void Display(int array[], int size); // display an array of int
void Display(vector<int> v);
void Swap (int &a, int &b);   // swap 2 ints
void Sort (int a[ ], int size); // sort an array of int

int main ()
{
/* ----------------- Problem 0 Basic Vectors ---------------------
// add the #include for vector

// define, add data, and print, vectors of int, string, double
vector<int> numbs;
vector<string> words;
vector<double> data;

numbs.push_back(10);
numbs.push_back(20);

for (unsigned int k=0; k<numbs.size(); k++)
    cout << numbs[k] << ",";
cout << endl;

words.push_back("hello");
words.push_back("world");

*/
/* ----------------- Problem 1 ----------------------
// 1)  Declare a vector of int
//     read a list of ints from the user until a -1 is entered
//     print the list out using a for loop

                    skip


//  overload the Display function to take a vector of int

//*/

/* ----------------- Problem 2 ----------------------
//   Load the data in file scores.txt into a vector of int
//   using an end of file loop to read into the vector
//   Then display only the data in the vector

vector<int> v;
int value;
ifstream inFile("scores.txt");

while(inFile>>value)
{
    v.push_back(value);
    }
    60



Display(v);

// ----------------- END Problem 2 -------------------*/

/* ----------------- Problem 3 ----------------------
//  Overload the Sort function to take a vector of int
//   use this function to sort your data
//   display the data after sorting



//*/

/* ----------------- Problem 4 Basic Pointers ----------------------

	int v1 = 0;
	int *p1 = &v1;
	*p1 = 42;
	cout <<"v1 = "<< v1 << endl;
	cout <<"p1 = "<< p1 << endl;
	cout <<"*p1 = "<< *p1 << endl;


//  make a second pointer p2 that also points to v1
    int *p2 = &v1;
	cout <<"*p2 = "<< *p2 << endl;


//  change the value of v1 to 13 using pointer p2
    *p2 = 13;

	cout<<"v1 = "<< v1 << endl;


//*/
/* ----------------- Problem 5 Dynamic Variables --------------
//   declare p1 again and make it refer to a new int
//   assign the value 53 to the location that p1 refers toz
//   make p2 refer to a new int
//   ask the user to enter an integer and store it at the
//     location p2 refers to
//

    int *p1 = new int;
    *p1 = 53;

    int *p2 = new int;

    cout<<"Enter an integer value: ";
    cin>>*p2;

    cout<<"You entered " << *p2 << endl;

    delete p1;
    delete p2;

    p1 = NULL;
    p2 = NULL;

//    did you remember to free up the dynamic memory you used?
//
//*/
//* ----------------- Problem 6 Pointer Calculator --------------
// write a simple calculator program that reads in an arithmetic
//  operator (+, -, *, /)  and two operands (integers)
//  and then prints the result of performing
//  the desired operation on the operands
//
// The CATCH: the only named variables you can use are pointers
//   all other variables must be dynamic (anonymous) variables

char *oerator = new char;
int *p1 = new int ;
int  *p2 = new int;
int  *result = new int;


cout<<"Enter a math operator (+,-,*,/): ";
cin>> *oerator;
cout  << oerator << endl;
cout<<"Enter the first integer : ";


// continue...
//cout << oerator << &p1 <<endl;


// don't forget to free up your dynamic memory
//
// ----------------- END Problem 6 -------------------*/


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
void Display(vector<int> v)
{
    unsigned int k;
    cout<<setw(8)<<"Index:";
    for (k=0; k<v.size(); k++)
        cout<<setw(4)<<k;
    cout<<endl<<setw(8)<<"Value:";
    for (k=0; k<v.size(); k++)
        cout<<setw(4)<<v[k];
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
