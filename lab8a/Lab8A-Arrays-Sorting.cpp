// CSIS10C         Lab 8A Arrays & Sorting        YourNameHere

#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;
const int SIZE = 5;

// Prototypes to display and sort
void Display(int array[], int size); // display an array of int
void Display(float array[], int size); // display an array of float
void Display(char array[], int size);  // display an array of char
void Swap (int &a, int &b);   // swap 2 ints
void Sort (int a[ ], int size); // sort an array of int

int main ()
{	
/* ----------------- Problem 1 ----------------------
// 1)  do 1a and 1b HERE:
 


    cout<<"1a: Size of stuff is "<<sizeof(stuff)/sizeof(float)<<endl;
    cout<<"1b: Stuff \n";    Display(stuff, 10);

// ----------------- END Problem 1 -------------------*/

/* ----------------- Problem 2 ----------------------
// 2) do 2a and 2b here:


   cout<<"\n2a: Size of word is "<<sizeof(word)/sizeof(char)<<endl;
   cout<<"2b: word \n";    Display(word, 5);

// ----------------- END Problem 2 -------------------*/

/* ----------------- Problem 3 ----------------------

    int data[6]={0,1,2,3,4,5};

//3a  Put 10 in 1st position  here:

//3b  Put 27 in last position  here:

//3c Show value in position 2 here:

//3d  Prompt for and read a value to store in cell 4 of the array here: 


   cout<<"\n3: Data: \n";    Display(data,6);

// ----------------- END Problem 3 -------------------*/

/* ----------------- Problem 4 ----------------------
    float samples[15]={0.0};
    int index=3;
//4  do a, b, c here:
 
 
 
 
   cout<<"\n4: Samples: \n";   Display(samples,5);

// ----------------- END Problem 4 -------------------*/

/* ----------------- Problem 5 ----------------------
    float samples[15]={0.0};
    int k;
    
//5 Fill Samples with 10, 11, 12, 13, 14, ... 24   (Use For Loop) here:





// cout<<"\n5: Samples: \n";   Display(samples,15);

// ----------------- END Problem 5 -------------------*/

/* ----------------- Problem 6 ----------------------
//6  Use a loop to find the smallest element
    int shuffled[10]={45, 12, 8, 19, 33, 44, 3, 21, 90, 67};
    int smallest=shuffled[0];
    int small_pos=0;
    int k;     // counter for loop
    
    cout<<"6: Shuffled array"<<endl; Display(shuffled, 10);
    // Put your loop here:


    
    
    
    
    
    cout<<"6: Smallest Element in shuffled is "<<smallest<<endl;
    cout<<"6: and it is located at position "<<small_pos<<endl;

// ----------------- END Problem 6 -------------------*/

/* ----------------- Problem 7 ----------------------
//7 Swap        (Leave problem 6 activated)
   cout<<"7: Before swapping slots 0 and 6"<<endl; Display(shuffled, 10);

//7 Use swap() to exchange values in slots 0 and 6 of shuffled array


   cout<<"7: After swapping slots 0 and 6"<<endl; 
   Display(shuffled, 10);

// ----------------- END Problem 7 -------------------*/

/* ----------------- Problem 8 ----------------------
//    (Leave problem 6 and 7 activated)
//8 Use sort() to sort shuffled array:

  
  
    cout<<"8: After sorting shuffled array"<<endl; 
	Display(shuffled, 10);
    

// ----------------- END Problem 8 -------------------*/
/* ----------------- Problem 9 ----------------------
//   Comment out Problems 6, 7, 8
//
//9  Load the data in file scores.txt into an array 
//   using an end of file loop to read into the array
//   Then display only the last five cells of the array  
//      (relates to project2 recent_transactions function)



// ----------------- END Problem 9 -------------------*/
/* ----------------- Problem 10 ----------------------
//10  Load the data in scores.txt into an array 
//     (same as in 9). 
//   Display the data, then sort it, then display it again



// ----------------- END Problem 10 -------------------*/
/* ----------------- Problem 11 ----------------------
//11  A) Load the data in scores.txt into an array, then close file
//    B) display the array
//    C) let the user enter one of the values displayed (say 85)
//    D) write all the data back to scores.txt except that value 
//             (then check that there is no 85 in scores.txt)
// This is how you will delete an account   



// ----------------- END Problem 11 -------------------*/

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

void Display(float array[], int size)
{   int k;
    cout<<setw(8)<<"Index:";
    for (k=0; k<size; k++)
        cout<<setw(5)<<k;
    cout<<endl<<setw(8)<<"Value:";
    for (k=0; k<size; k++)
        cout<<setw(5)<<array[k];
    cout<<endl;
}

void Display(char array[], int size)
{   int k;
    cout<<setw(8)<<"Index:";
    for (k=0; k<size; k++)
        cout<<'\t'<<k;
    cout<<endl<<setw(8)<<"Value:";
    for (k=0; k<size; k++)
        cout<<'\t'<<array[k];
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
