// CSIS10C         Lab 9A Dynamic Arrays & Algorithms        Wade Costa

#include <iostream>
#include <fstream>
#include <vector>
#include<iomanip>
using namespace std;


// Prototypes
void fillArray(int a[], int size);   // input data into array
void display(int array[], int size); // display an array of int
void Swap (int &a, int &b);   // swap 2 ints
void sort (int a[ ], int size); // sort an array of int

typedef  int* IntPtr; // int * p1

int main ()
{
// ----------------- Problem 0 ----------------------
//   declare a typdef above main for an integer pointer called IntPtr

/* ----------------- Problem 1 ----------------------
//   a)Declare a static array of int, primes, initialized to
       int primes[] = {2,3,5,7,11,13,17,19,23,29};



//     b)print the primes array using a for loop
        for(int k=0; k<10; k++)
            cout<<primes[k]<<" ";
        cout<<endl;


//     c)create an IntPtr variable p and assign it the value of primes
        IntPtr p = primes;

//     d)print the value of p to show the memory location of the array primes
//       and draw a memory map on your handout, including both primes and p
//       and the array values
        cout<<"memory location of array primes is "<<p<<endl;


//     e)print the primes array again using p[k] to refer to the array values
        for(int k=0; k<10; k++)
            cout<<p[k]<<" ";
        cout<<endl;


//	   f)print the primes array again using *(p+k) to refer to the array values
        for(int k=0; k<10; k++)
            cout<<"address "<<(p+k)<<" holds value "<<*(p+k)<<endl;
        cout<<endl;


// 	   g)print the values (p+k) to show the memory location of the array values


//     h)do the values (p+k) agree with your memory map?

// */
/* ----------------- Problem 2 ----------------------
//     a) Declare an IntPtr data, and this time
//     b) ask the user to enter a size for the array, read into int size
//     c) assign data a new array of size integers
//     d) use the fillArray function to read values into the data array
//     e) use the display function to print the array values in the data array
//     e) use the sort function to sort the values in data
//     f) print the array values again
//     g) draw a memory map for data, and also include size

    int size;
    IntPtr data;
    cout<<"enter how many items to store?"<<endl;
    cin>>size;

    data = new int[size];
    fillArray(data,size);
    display(data,size);
    cout<<data[0]<<endl;
    delete [] data;
    data = NULL;

//*/
/* ----------------- Problem 3 ----------------------
//    after reviewing the link on pseudocode,
//    write a pseudocode description for the sort function below
//    you can write it right below the function and copy it here

//  find the smallest item in the array and its location (small_pos)
// swapping the first item in array with smallest
// repeat starting with k=1 until whole array is sorted

// start k at 0
// repeat
//      assign to smallest the value a[k]
//      start n at k and repeat until n = size
//      i if a[n] is smaller than smallest
//              assign to smallest the value of a[n]
//              assign to small_pos the value of n
//      end of n loop - smallest value in location small_pos
//      swap the values in a[k] with a[small_pos]
//      add 1 to k and repeat



/* ----------------- Problem 4 ----------------------
//    Write pseudocode on your handout for printing the
//    data array in reverse order

//      start a for loop with k  beginning at size-1
//              print data[k]
//              reduce k by 1 until k = 0

//*/
/* ----------------- Problem 5 ----------------------
// 5   a) Declare an IntPtr numbs, and this time
    IntPtr numbs;
    int capacity, sz=0, value;
//     b) ask the user to enter a capacity for the array, read into int capacity
    cout<<"What capacity for your array? " <<endl;
    cin>>capacity;
//     c) assign numbs a new array of capacity integers
    numbs = new int[capacity];
//     d) use a sentinel loop to read in up to capacity values
//	     until a -1 is entered
    cout<<"Enter up to "<<capacity<<" values, -1 to quit early"<<endl;
    cin>>value;
    while(value!=-1)
    {
        numbs[sz] = value;
        sz++;
        cin>>value;
    }
    cout<<"You entered "<<sz<<" values"<<endl;

//     e) store the number of items that were entered in variable size
//     f) use the display function to print the array values in the numbs array
    display(numbs,sz);
//     e) use the sort function to sort the values in numbs
    sort(numbs,sz);
//     f) print the array values again
    display(numbs,sz);
// 	   g) draw a memory map of your numbs array, include size and capacity

    delete [] numbs;


//*/
/* ----------------- Problem 6 ----------------------
//  Write pseudocode on your handout
//   for the task of resizing the numbs array to
//   an new array with twice the capacity of the current array
//     use a temp array pointer variable to hold the new array
//     until all the data is copied over to it,
//     then assign temp to numbs
//
//   follow the memory  map on the handout
//
//   then code and test your solution in C++ below
//

    int numbs[9] = {8,7,5,4,3,2,9,6};
    int  *temp = numbs;
    for(int i=0;  i < (sizeof(numbs)/sizeof(*numbs)); i++)
    {
        temp[i] = numbs[i];
    }
    temp = numbs;
    display(numbs,9);
    display(temp,18);

    delete temp;








//*/
/* ----------------- Problem 7 ----------------------
//   Write pseudocode on your handout for the task of
//      inserting a 99 at position 4 in your numbs array

//   then code and test your solution here in C++

    int numbs[12] = {2,4,1,6,9,8,7,3,0};
    int temp[12];
     for(int i=0;  i < (sizeof(numbs)/sizeof(*numbs)); i++)
    {
        if (i < 4)
            temp[i] = numbs[i];
        temp[4] = 99;
        if (i > 4)
            temp[i+1] = numbs[i];
    }
    display(numbs,12);
    display(temp,12);



//*/
/* ----------------- Problem 8 ----------------------
//  Write pseudocode on your handout for the task of
//      deleting the 99 at position 4 in your numbs array

//   then code and test your solution here in C++



//*/
/* ----------------- Problem 9 ----SKIP------------------
//   Vector insertion and deletion
//     demonstrate of how to insert and delete a 99
//     into a vector similar to what we did above
int a[] = {2,4,1,6,9,8,7,3,0};
vector<int> data = vector<int>(a,a+9);  // starts data off with all the numbers in a

for (int k=0; k<data.size(); k++)
	cout<<data[k]<<" ";
cout<<endl;

cout<<"inserting 99 at position 4"<<endl;

data.insert(data.begin() + 4, 99); // insert 99 at 4 locations after the start of vector
for (int k=0; k<data.size(); k++)
	cout<<data[k]<<" ";
cout<<endl;

cout<<"deleting 99 at position 4"<<endl; // erase the value at 4 locations after start of vector
data.erase(data.begin() + 4);
for (int k=0; k<data.size(); k++)
	cout<<data[k]<<" ";
cout<<endl;

//*/
    //system("pause");
}

void fillArray(int a[], int size)
{
	cout<<"enter "<<size<<" integers"<<endl;
	for (int k=0; k<size; k++)
		cin>>a[k];

}
void display(int array[], int size)
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
// sort()  Order the values in the array
void sort (int a[ ], int size)
{	int smallest;
	int n, k, small_pos;
	for (k=0; k<size-1; k++)
	{  smallest = a[k];
		for (n=k; n<size; n++)
			if (a[n] <= smallest)
			{	small_pos = n;
				smallest = a[n];
			}
		Swap (a[k], a[small_pos]);
	}
}
