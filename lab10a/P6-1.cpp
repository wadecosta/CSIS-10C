// P61.cpp - This program creates uses a structure for loan, initialize it from the keyboard, then
// displays the struct

#include<iostream>
#include<cmath>
using namespace std;

struct Loan  // Loan is called structure tag
{
       int ID;  // assume an unique integer between 1111-9999
       float amount; // $ amount of the loan
      float rate; // annual interest rate
      int term;  // number of months, length of the loan
};

float payment(float amount, float rate, int term);
float payment(Loan l);

int main( )
{
      Loan loan1, loan2;
      float monthly_payment;

      initializer_loan(loan1);
      i

      // Initialize the loan1 structure
      cout << "Enter the ID of this loan \n";
      cin >> loan1.ID;

      cout << "Enter the amount of this loan \n";
      cin >> loan1.amount;

      cout << "Enter the annual interest rate of this loan (in %) \n";
      cin >> loan1.rate;

      cout << "Enter the term (number of months, length of the loan) \n";
      cin >> loan1.term;

//      monthly_payment  = payment(loan1.amount, loan1.rate, loan1.term);
        monthly_payment  = payment(loan1);

      cout << "The monthly payment for loan " << loan1.ID << " is: " << monthly_payment << endl;

      monthly_payment  = payment(loan1);

      cout << "The monthly payment for loan " << loan1.ID << " is: " << monthly_payment << endl;

      return 0;
}

float payment(float amount, float rate, int term)
{
      rate = rate/1200;  // To convert % yearly rate to monthly fraction
      return amount*rate*(  pow( (rate+1), term)/ (pow( (rate+1), term) - 1) );
}

float payment(Loan l)
{
      l.rate = l.rate/1200;  // To convert % yearly rate to monthly fraction
      return l.amount*l.rate*(  pow( (l.rate+1), l.term)/ (pow( (l.rate+1), l.term) - 1) );
}

