// CSIS10C         Lab 11B Arrays of Objects        YourNameHere
#include <cstdlib>
#include <iostream>
#include <fstream>
#include<iomanip>
#include "Square.h"
#include "Rectangle.h"
#include "Student.h"

using namespace std;


int main ()
{
/* ----------------- Problem 1 ----------------------
// 1a)  Declare a default Square object sq1
//        and print its side length and area

	Square sq1;
	cout<<"Square sq1 = "<<sq1<<endl;
	cout<<"Area of sq1 = "<<sq1.area()<<endl;

// 1b)  Declare a Square object sq2 with side length 4
//        and print its side length and area

    Square sq2(4);


// Q: would you like to be able to read a Square from cin?
    Square sq3;
      cout<<"input a square object (type its side length)"<<endl;
       cin>>sq3;
      cout<<"you entered "<<sq3<<endl;

// A: then you have to define the input stream operator >>


//
// 1c)  Declare a Rectangle object r1 with length = 3 and width = 4
//        and print its information and area
    Rectangle r1(3,4);
    cout << "Rectangle is " << r1 << "\n" << "Area is "<< r1.area()<<endl;

// 1d)  Declare a Student object st1 and initialize its
//        information with data entered from the keyboard
//        (use the >> operator defined for Student)

	Student st1;
	cout<<"enter a Student last name, first name, email,\n"
		<<" street address, city, state, zip and phone#,\n"
		<<" all on separate lines"<<endl;

    cin>>st1;
    cout<<"You entered "<<st1<<endl;




//*/
/* ----------------- Problem 2 ----------------------
// 2) Make an array of 5 Square objects and print them out
//     and compute the sum of their areas

   Square shapes[5] = {1,2,3,4,5};  // using initializer list
   int areasum = 0;

        for(int k=0; k<5; k++)
        {
            //print the k'th Square in array shapes
            cout<<"The k'th square is " << shapes[k]<<endl;
            //add to areasum the area of the k'th square in shapes
            areasum += shapes[k].area();
        }




    cout<<" Sum of areas = "<<areasum<<endl;

//*/
/* ----------------- Problem 3 ----------------------
// 3) Make an array of 5 Rectangle objects
//    Print them out
//    Then set the length field of each Rectangle
//     in the array to 10
//    Print them out again

    Rectangle rects[] = {Rectangle(1,2), Rectangle(3,4), Rectangle(5,6),
    					 Rectangle(7,8), Rectangle(9,10)};

    cout<<"Before: ";
	for (int k=0; k<5; k++){
		cout<<rects[k]<<" ";
	}

	// set the length field of all rectangles to 10
	for(int k=0; k<5; k++)
    {
        rects[k].setLength(10);
    }

	cout<<endl;
	cout<<"After: ";
	for (int k=0; k<5; k++){
		cout<<rects[k]<<" ";
	}
    cout<<endl;

//*/
//* ----------------- Problem 4 ----------------------
//   a) Set up a filestream to read from "student.txt"

	ifstream fin("student.txt");
	if (fin.fail()){
		cout<<"file not found"<<endl;
		exit(1);
	}

//   b) read the first number into an int size variable
    int size;
    fin>>size;



//   c) declare a dynamic array of size Students called dbase
    Student* dbase = new Student[size];


//   d) read all size students into your array using >>
    for(int k=0; k<size; k++)
        fin>>dbase[k];


//   e) print all size students
	 cout<<"Student dbase contains: "<<endl;
	 for (int k=0; k<size; k++)
	 	cout<<k<<"-"<<dbase[k]<<endl;


     // when you are finished, close this project and open
     // StudentDatabase.dev multi-file project and continue working
     //  on the database project there.
//*/
}
