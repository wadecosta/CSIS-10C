// Lab2a-If.cpp         Your Name Here
//
//  refer to Chapter 4 for in depth coverage of the material
//  described here. Problems 9-11 are worth 2 pts, 12 is worth 4 pts

#include <iostream>
using namespace std;

int main ()
{
////////////////////PART 1 DRILL EXERCISES//////////////
/******************Problem 1 Single Choice If**************
//	Use an if statement to show  "pass"  if score is>=65,
//  otherwise, nothing is displayed for any other number
//    Test your solution by entering different scores

float score;
cout<<"Enter a test score ";
cin>>score;
if (score >= 65) // <-- your if statement goes here
{
    cout<<"pass"<<endl;
}
//******************End Problem 1***********************/
/******************Problem 2 Error in Comparison*****
//  Run this program, enter a few different values for the test score.
//   Look for mistakes in output, then find and correct the bug
int n;
cout<<"Enter a test score ";
cin>>n;
if (n>=65)
   cout<<n<<" is a Passing score"<<endl;
if (n<65)
   cout<<n<<" is a Failing score"<<endl;
if (n!=100)
   cout<<n<<"--Sorry, Not a perfect 100!"<<endl;
if (n=100)
   cout<<n<<"--Congratulations, A perfect Score!"<<endl;

//******************End Problem 2***********************/
/******************Problem 3 If-Else*******
//  Use an if-else statement to choose one of the following:
//     Show "pass" if score is>=65,
//     otherwise show "fail"  (use  if-else)
//    Test your solution by entering different scores

float score;
cout<<"TWO CHOICE TEST \n";
cout<<"Enter a test score ";
cin>>score;
					// <-- your if-else statement goes here


//******************End Problem 3***********************/
/******************Problem 4 Compound Statements
// This has a syntax error. It calculates normal pay or overtime pay,
// and displays a message indicating which formula was used.
// A) Fix it so it works OK.  B) Then combine the two if-else statements
// into a single if-else that uses { } to package the appropriate
// statements together.  When you're finished the program will be easier
// to read, and it will work exactly the same.

	const float RATE=10.00;  // pay rate per hour of work for employee
	float hours, pay;
	cout<<"Enter number of hours worked"<<endl;
	cin>>hours;
	if (hours > 40.0)
		pay = 40.0 * rate + 50;
	else
		pay = hours * rate;

	cout << "pay is " << pay;

	if (hours > 40.0)
		cout << " overtime worked";
	else
		cout << " no overtime worked";

//******************End Problem 4***********************/
/******************Problem 5 Nested if-else****
// Study the Lecture 2a	slides and then write a nested if-else statement
//    that displays  "A" if the variable score is >= 90,
//            "B" if the variable score is >= 80,
//            "C" if the variable score is >= 65,
//            "D" if the variable score is >= 50, or
//            "F" if none of the above are true

float score;
cout<<"Enter a test score ";
cin>>score;
                         // <-- your nested if-else statement goes here





//******************End Problem 5***********************/
/******************Problem 6 **********
//   Write a nested if-else statement that displays "Too much"
//    if the variable cost is >= 25, "Maybe" if the variable cost
//    is >= 10 (but smaller than 25), and "I'll buy it!" if the
//    variable cost is smaller than 10.

float cost;
cout<<"Enter the cost of an item in dollars ";
cin>>cost;
	                   // <-- your nested if-else statement goes here

//******************End Problem 6***********************/
/******************Problem 7 Logical Operators ****************

//	 Now write an if-else statement that displays
//   "YES" if the variable cost is between 25 and 50 inclusive,
//      (it's both >= 25  and <= 50)
//   and "NO" if it is outside that range.  Use && to chain two
//   conditions together

float cost;
cout<<"Enter the cost of an item in dollars ";
cin>>cost;
	                   // <-- your if-else statement goes here

//******************End Problem 7***********************/
/******************Problem 8  More Logical Operators ****************
// At the farmers market, the sign says  "No dogs or smoking"
// Fix the logic in this program so it properly determines if a person
// can enter the market.
char dog, smoking;
cout<<"No dogs or smoking--"<<endl;
cout<<"Do you have a dog? y=yes, n=no ";
cin>>dog;
cout<<"Are you smoking? y=yes, n=no ";
cin>>smoking;

if (dog=='y' || smoking=='n')
   cout<<"OK, come on in!"<<endl;
else
   cout<<"Sorry, you can't come in! "<<endl;



//******************End Problem 8***********************/
///////////////// Part 2 Programming Problems
/******************Problem 9 (2 points)****************
// A) write a program in which the user inputs an age and the output
// states whether or not the person is a teenager.
// B) Modify your solution to A) so it also outputs "invalid age!"
// if the user enters an age that is negative or over 110.
// (see test plan)

int age;

cout<<"Please enter your age: ";
cin>>age;

if (age < 0 || age > 110)
{
    cout<<"invalid age!"<<endl;
}
else if(age >= 13 && age < 20)
{
    cout<<"a teen! wow!"<<endl;
}
else if (age < 13)
{
    cout<<"too young"<<endl;
}
else if (age > 19)
{
    cout<<"too old"<<endl;
}


//******************End Problem 9***********************/
/******************Problem 10 (2 points)****************************
// T-shirts are on sale for $12.00 each if fewer than three are
// purchased, $10.00 each if at least three but fewer than ten are
// purchased, and $7.00 each if at least ten are purchased.
// Write a program to input the number of shirts and output the
// total cost of the tshirts. (see test plan)

int num, total;

cout<<"Enter the number of shirts: ";
cin>>num;

if(num < 3)
{
    total = 12*num;
}
else if(num >= 3 && num < 10)
{
    total = 10*num;
}
else
{
    total = 7*num;
}

cout<<"$"<<total<<endl;


//******************End Problem 10***********************/
/******************Problem 11 (2 points)****************************

//  Write a program that inputs the suit (C, D, H, or S) and rank
//  (1, 2, …13) of a card and then outputs the rank and suit in words.
//  For example, the inputs D and 1 would result in the output
//  "Ace of Diamonds", and the inputs H and 13 would result in the
//  output Queen of Hearts.  (see test plan and see suit.cpp, p75)

char suit;
int num;

cout<<"Enter suit and number: ";
cin>>suit>>num;

if(num == 1)
{
    cout<<"Ace of ";

}
else if(num == 2)
{
    cout<<"Two of ";
}
else if(num == 3)
{
    cout<<"Three of ";
}
else if(num == 4)
{
    cout<<"Four of ";
}
else if(num == 5)
{
    cout<<"Five of ";
}
else if(num == 6)
{
    cout<<"Six of ";
}
else if(num == 7)
{
    cout<<"Seven of ";
}
else if(num == 8)
{
    cout<<"Eight of ";
}
else if(num == 9)
{
    cout<<"Nine of ";
}
else if(num == 10)
{
    cout<<"Ten of ";
}
else if(num == 11)
{
    cout<<"Jack of ";
}
else if(num == 12)
{
    cout<<"Queen of ";
}
else if(num == 13)
{
    cout<<"King of ";
}



if(suit == 'C')
{
    cout<<"Clubs";
}
else if(suit == 'D')
{
    cout<<"Diamonds";
}
else if(suit == 'S')
{
    cout<<"Spades";
}
else if(suit == 'H')
{
    cout<<"Hearts";
}
//******************End Problem 11***********************/
//******************Problem 12 (4 points)****************************
// Do either Problem 25 on p89 or Problem 26 on p90

int credits, tuition;
char residency;

cout<<"Enter number of credits: ";
cin>>credits;
cout<<"Enter (N or R) for residency: ";
cin>>residency;
if(credits > 20)
{
    cout<<"Error... Too many credits!"<<endl;
}
else if(credits < 0)
{
    cout<<"Error... Can't have negative credits!"<<endl;
}
else
{
    if(credits >= 12)
    {
        cout<<"Full Time"<<endl;
    }
    else
    {
        cout<<"Part Time"<<endl;

    }
    if(residency == 'R' || residency == 'r')
    {
        cout<<"Resident"<<endl;
        tuition = credits*250;
        if (tuition > 3350)
        {
            tuition = 3350;
        }
    }
    if(residency == 'N' || residency == 'n')
    {
        cout<<"Nonresident"<<endl;
        tuition = credits*450;
        if(tuition > 6000)
        {
            tuition = 6000;
        }
    }
    cout<<"Tuition is $"<<tuition<<endl;
}



//******************End Problem 12***********************/
//system("pause");
return 0;
}
