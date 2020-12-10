// Assignment 4           Lab4Function2.cpp         Your Name Here
//
//  See Chapter 5 and refer to Lab4.doc for instructions to complete this lab
//  

#include <iostream>

using namespace std;



int main(  )
{
//******************Problem 1 Using the pow functions ************** 
	
	

//***********************END Problem 1**************************/	
/******************Problem 2 Using other math functions ************** 

	float x;
	cout<<"Enter a value "<<endl;
	cin>>x;
	
	// show the fabs(x), sqrt(x) and result of one other function here	
        
	
//***********************END Problem 2**************************/	
/******************Problem 3 dollarValue Function ************** 
// a) type the function definition above main
// b) change the following program by replacing the math formula in the calculation line
//        dollars = ....    with a function call to your dollarValue function

	int  nickels, dimes;
	float dollars;
	cout<<"Enter number of nickels and dimes"<<endl;
	cin>>nickels>>dimes;
	dollars = 0.05*nickels + 0.10*dimes
	cout<<"The dollar value is "<<dollars<<endl;
	
//***********************END Problem 3**************************/	
/******************Problem 4 average Function ************** 
// a) type the function definition above main
// b) change the following program by replacing the math formula in the calculation line
//        with a function call to your avg3 function

	int  score1, score2, score3;
	float average;
	cout<<"Enter three test scores"<<endl;
	cin>>score1>>score2>>score3;
	average = (score1 + score2 + score3) / 3.0;
	cout<<"The average is "<<average<<endl;
	

	
//***********************END Problem 4**************************/	
/******************Problem 5 payCheck Function ************** 
// a) type the function definition above main
// b) change the following program by replacing the if/else calculation 
//        with a simple function call to your payCheck function

	int  rate;
	float hours, pay;

	cout<<"Enter hours worked and pay rate "<<endl;
	cin>>hours>>rate;
	if (hours>40)
		pay = rate*hours + 50;
	else
	 	pay = rate*hours;
	cout<<"Your paycheck is "<<pay<<endl;   
	
//***********************END Problem 5**************************/
/******************Problem 6 Grade Function ************** 
// a) type the function definition above main
// b) complete the program below using your function to convert a 
//      test score into a letter grade

	float score;
	char letter_grade;

	cout<<"Enter a test score"<<endl;
	cin>>score;
   
   // call your function here to convert the variable score into 
   //  the correct letter grade, and store the result in variable letter_grade here:

	cout<<"Your grade is "<<letter_grade<<endl;   
	
//***********************END Problem 6**************************/
/******************Problem 7 Grade of an Average score ************** 
// go back to problem 4 and use your grade function from problem 6 to 
//  show the letter grade for the average score.

//***********************END Problem 7**************************/
/******************Problem 8 Bool Function ************** 
// a) type the function definition above main
// b) complete the program below using your bool function to determine  
//      if a person is a teenager.

	int age;

	cout<<"Enter your age"<<endl;
	cin>>age;
 
    if (                       )        // fill in with a function call to your bool function   
		cout<<"You are a teenager. Yay!"<<endl;   
	else
		cout<<"sorry--not a teen!"<<endl;
	
//***********************END Problem 5**************************/
    system("pause");
    return 0;
}
