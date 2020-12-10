// CSIS10C        Skill Building - Structs       YourNameHere

#include <iostream>
#include <string>
#include <fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;

struct Song   // a new data type to represent a popular song recording
{
    string title;
    string artist;
    int year;
    char rank;
    string label;
};

struct Account  // a new data type to represent an ATM bank account
{
    string name;
    int ID, PIN;
};

void Display(Song s);
void Display(Account a);
void Swap (int &a, int &b);   // swap 2 ints
void Sort (int a[ ], int size); // sort an array of int


int main ()
{	
/* ---------------------- Problem 1 -----------------------------
// 1)  do 1a and 1b HERE:



    cout<<"Hit contains: "<<hit.title<<" "<<hit.artist<<" "
        <<hit.year<<" "<<hit.rank<<" "<<hit.label<<endl;  

// ---------------------- END Problem 1 -----------------------------*/

/* ---------------------- Problem 2 ------------------------------
// 2)  put your statements HERE:



    cout<<"good contains: "<<good.title<<" "<<good.artist<<" "
        <<good.year<<" "<<good.rank<<" "<<good.label<<endl;  

// ---------------------- END Problem 2 ------------------------------*/

/* ---------------------- Problem 3 ------------------------------
// 3)  put your statements HERE:





// ---------------------- END Problem 3 ------------------------------*/

/* ---------------------- Problem 4 ---------------------------------
// 4)  Make sure problems 1-3 are still activated







// ---------------------- END Problem 4 ------------------------------*/

/* ---------------------- Problem 5 ------------------------------
// 5)  Make sure problems 1-4 are still activated





// ---------------------- END Problem 5 ------------------------------*/

/* ---------------------- Problem 6 ------------------------------
// 6)  De-activate problems 1-5
//     Put a copy of  accounts.txt (the one that doesn't have a 
//     balance column) in the same directory as this program. 
//     Read the first line of the file into the Account variable a. 
  
Account a;
ifstream input("accounts.txt");
if (!input) cout<<"accounts.txt not found"<<endl;



    
// ---------------------- END Problem 6------------------------------*/

/* ---------------------- Problem 7 ------------------------------
// 7) Leave 6 active. Display contents of a two ways. a) regular way
//     and b) using your own Display function that displays an Account




// ---------------------- END Problem 7 ------------------------------*/

/* ---------------------- Problem 8 ------------------------------
Account accts[25];
int k=0;

  
// ---------------------- END Problem 8 ------------------------------*/

/* ---------------------- Problem 9 ------------------------------






// ---------------------- END Problem 9 ------------------------------*/

/* ---------------------- Problem 10 ------------------------------




// ---------------------- END Problem 10 ------------------------------*/

/* ---------------------- Problem 11 ------------------------------




// ---------------------- END Problem 11 ------------------------------*/

    system("pause");
}

void Display(Song s)
{  
  cout<<"Title: "<<s.title<<", Artist: "<<s.artist<<", Year: "
      <<s.year<<", Rank: "<<s.rank<<", Label "<<s.label<<endl;  

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

