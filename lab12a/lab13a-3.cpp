#include<iostream>
using namespace std;

// A simplified vector class that demonstrates putting a
//    dynamic array in an object

class MyVector
{
public:
    MyVector(int initSize = 10);        // combined default/explicit constructor
    ~MyVector();                                // destructor
    MyVector(MyVector &orig);       // copy constructor
    void operator=(MyVector &rightSide);
	double get_value_at(int i);
	void set_value_at(int i, double new_value);
	void display();
	int length(){ return size;}    // return the current array length
	void resize(int newSize);     // allow user to grow or shrink array

private:
	double *data;  // pointer to an array of double
	int size;        // the length of the array
};

MyVector::MyVector(int initSize)    // combined default and explicit constructor
{
    cout<<"Constructor: making "<<this<<endl;
    size = initSize;
    data = new double[size];
    for(int k=0; k<size; k++) data[k] = 0;
}

MyVector::~MyVector()
{
    cout<<"Destroying the array for object "<<this<<endl;
    delete [] data;
}

MyVector::MyVector(MyVector &orig)
{
    cout<<"Copy Constructor: making "<<this<<" a copy of "<<&orig<<endl;
    size = orig.size;
    data = new double[size];
    for(int k = 0; k<size; k++)
        data[k] = orig.data[k];
}

void MyVector::operator=(MyVector &rightSide)
{
    cout<<"Assignment Operator: making "<<this<<" a copy of "<<&rightSide<<endl;

    if(size != rightSide.size)
    {
        size = rightSide.size;
        delete [] data;                     // erase old data vector
        data = new double[size];
    }
    for(int k=0; k<size; k++)
        data[k] = rightSide.data[k];
}

void MyVector::set_value_at(int i, double new_value)
{
	data[i] = new_value;
}

double MyVector::get_value_at(int i)
{
	return data[i];
}

void MyVector::display()
{
	int i = 0;
	cout << "[";
	for (i = 0; i < size-1; i++)
	{
		cout << data[i]<<",";
	}
	cout << data[i] << "]\n";
}

void MyVector::resize(int newSize)
{
	// create a pointer to double called newArray;
	//  assign it the address of a block of newSize double

	// if newSize is less than size, then copy the first
	//    newSize values of the data array to newArray

	// otherwise copy all size values of data to newArray

	// update data so it points to newArray

	// update size so it equals the current size of data

	// you may want to go back and put zeros into myArray
	//   above so you don't have garbage in data afterwards
}


int main()
{
	/*------------- Demo MyVector class -------------
	// A) Declare a MyVector object to represent 5 values

	MyVector raceTimes;

	// B) Display the original object data

	cout<<"raceTimes contains \n";
	raceTimes.display();

	// C) Set the data values one at a time
	raceTimes.set_value_at(0, 120.4);
	raceTimes.set_value_at(3, 123.5);

	// D) Display the object data again
	cout << "raceTimes contains \n";
	raceTimes.display();

	//*/
	//*------------- Problem 1------------------------
	// Change the MyVector class so it
	//  a) uses a dynamic array for data
	//  b) keeps track of the length of the array in the
	//       instance variable called size
	//  c) has a default constructor that takes an
	//      initial_size parameter that has a default value of 10

	//  Verify proper operation of the following code:

	MyVector dailyHighs(7);  // has 7 values in array
    cout << "The memory address of dailyHighs " << &dailyHighs << endl;
	cout << "The length of dailyHighs is " << dailyHighs.length() << endl;
	for (int k = 0; k < dailyHighs.length();k++){
		double temp;
		cout << "enter the high temperatures for day" << k << " ";
		cin >> temp;
		dailyHighs.set_value_at(k, temp);
	}

	cout << "dailyHighs contains \n";
	dailyHighs.display();


	//*/
	//*--------------Problem 2-------------------------
	// Define the Destructor and Copy Constructor for MyVector
	cout << "Problem 2-demo Copy Constructor\n";

	MyVector dailyLows(dailyHighs);  // dailyLows is a copy of dailyHighs

	cout << "BEFORE,\n";
	cout << "Here is dailyLows: ";
	dailyLows.display();
	cout << "Here is dailyHighs: ";
	dailyHighs.display();

	dailyLows.set_value_at(3,-999);  // we change dailyLows

	cout << "AFTER dailyLows.set_value_at(3,-999), \n";
	cout << "Here is dailyLows: ";
	dailyLows.display();
	cout << "Here is dailyHighs: ";
	dailyHighs.display();

	// did dailyHighs get a -999 in it? If so, debug your
	//   copy constructor so dailyHighs does not change

	//*/
	//*--------------Problem 3-------------------------
	// Define the Assignment Operator
	cout << "Problem 3-demo Assignment Operator\n";

	MyVector dailyTemps;

	cout << "BEFORE,\n";
	cout << "Here is dailyTemps: ";
	dailyTemps.display();
	cout << "Here is dailyHighs: ";
	dailyHighs.display();

	dailyTemps = dailyHighs;

	cout << "After dailyTemps = dailyHighs, \n";
	cout << "Here is dailyTemps: ";
	dailyTemps.display();
	cout << "Here is dailyHighs: ";
	dailyHighs.display();

	dailyTemps.set_value_at(3,-999);  // we change dailyTemps

	cout << "AFTER dailyTemps.set_value_at(3,-999), \n";
	cout << "Here is dailyTemps: ";
	dailyTemps.display();
	cout << "Here is dailyHighs: ";
	dailyHighs.display();

	// did dailyHighs get a -999 in it? If so, debug your
	//   assignment operator so dailyHighs does not change
	//*/

	/*----------------Problem 4 ------------------
	// Overload the operator[] and verify the following works
	//  see the lecture pdf for hints on how to do this
	cout<<"Problem 4 - demo of [] operator\n";
	cout<<"dailyHighs[3] = "<<dailyHighs[3]<<endl;
	dailyHighs[3] = 123.456;
	cout<<"dailyHighs[3] NOW = "<<dailyHighs[3]<<endl;


	//*/
	/*----------------Problem 5 ------------------
	// Complete the resize function above for MyVector and verify
	//   the following works
	//
	cout<<"Problem 5 - demo of resize function\n";

	dailyHighs.resize(14);

	dailyHighs.set_value_at(10,555);
	dailyHighs.set_value_at(11,777);
	cout<<"after resizing, now dailyHighs = ";
	dailyHighs.display();

	//*/

	// if you would like to do the extra credit, run the example
	//  in program lab13a-4.cpp that shows how to make a class template
	//  for pairs of objects.

	//  then make a new program lab13a-5.cpp, copy your MyVector class
	//  into it, and modify the class to make it a class template.

	//system("pause");
	return 0;
}
