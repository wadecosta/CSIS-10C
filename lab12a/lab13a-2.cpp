#include<iostream>
using namespace std;

// A Thing class that demonstrates the use of dynamic memory in objects

class Thing
{
private:
	int *data;
public:
	Thing(int d = 0)                   // Constructor (same name as the name of the class) 
	{
		data = new int;
		*data = d;
	}

	~Thing()                  // Destructor (same name , but preceeded by a tilde (~)) 
	{
		delete data;
	}

	void set(int d){ *data = d; }   
	void display(){	cout << "data=" << *data << endl;}
};


int main()
{
	//*------------- Demo Thing class -------------
	// A) Declare 2 Thing objects 

	Thing thing1, thing2(77);

	// B) Display the original object data 

	cout << "Here is thing1: ";
	thing1.display();
	cout << "Here is thing2: ";
	thing2.display();

	// C) Add a print statement to the destructor
	//     to print the value in memory that is 
	//     about to be de-allocated whenever it is called

	// The destructor is called automatically when an object
	//  goes out of scope, so you don't need to add any more 
	//  statements here.

	// But you will see output indicating when the destructor is called

	//*/
	/*------------- Problem 1 -------------
	// Run this to see how the auto Copy Constructor
	//  doesn't work the way we'd like it to
	cout << "Problem 1-demo Copy Constructor\n";

	Thing thing3(thing2);  // thing3 is a copy of thing2, i.e. 77

	cout << "BEFORE,\n";
	cout << "Here is thing2: ";
	thing2.display();
	cout << "Here is thing3: ";
	thing3.display();

	thing2.set(33);  // we change thing2 to 33

	cout << "AFTER thing2.set(33), \n";
	cout << "Here is thing2: ";
	thing2.display();
	cout << "Here is thing3: ";
	thing3.display();

	// did anything look weird to you when you ran the above?


	// now go back to Thing and define your own Copy Constructor
	// so it copies the data into the new object, not the pointer
	// put this prototype in the Thing class:
	//     Thing(Thing& original);

	// when you rerun this problem,  you should see that thing3
	//  remains at 77. 

	//*/
	/*------------- Problem 2 ------------- 
	// Run this to see how the auto Assignment Operator
	//  doesn't work the way we'd like it to
	cout << "Problem 1-demo Assignment Operator\n";

	thing3 = thing1;  // we set thing3 to have thing1 data (0)

	cout << "BEFORE\n";
	cout << "Here is thing1: ";
	thing1.display();
	cout << "Here is thing3: ";
	thing3.display();

	thing1.set(99);
	cout << "AFTER thing1.set(99);\n";
	cout << "Here is thing1: ";
	thing1.display();
	cout << "Here is thing3: ";
	thing3.display();

	// did anything look weird to you when you ran the above?


	// now go back to Thing and define your own Assignment Operator
	// so it copies the data into the new object, not the pointer
	// put this prototype in the Thing class:
	//     void operator =(const Thing& right_side);

	// when you rerun this problem,  you should see that thing3
	//  remains at 0. 

	//*/

	// THE POINT OF THIS LESSON-
	//   anytime you write a class that uses a pointer instance variable
	//   you must also define the "Big Three" - Destructor, Copy Constructor
	//   and Assignment Operator to manage the dynamic memory properly.

	//  We will now apply these concepts to develop our own MyVector class in 
	//   lab13a-3.cpp
	//
	system("pause");
	return 0;
}
