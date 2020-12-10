// P62.cpp - This program uses a class for a loan, initializes it from the keyboard, then
// displays the class

#include<iostream>
#include<cmath>
using namespace std;

class Loan  // Loan is called structure tag
{
    public:
        void set( );
        void setID(int newID);
        float payment( );
        void display( );
        int getID( );
   private:
       int ID;  // assume an unique integer between 1111-9999
       float amount; // $ amount of the loan
       float rate; // annual interest rate
       int term;  // number of months, length of the loan
 };

 void Loan::setID(int newID)
 {
     ID = newID;
 }

 int Loan::getID()
 {
     return ID;
 }

 void Loan::set()
 {
      cout << "Enter the ID of this loan \n";
      cin >> ID;

      cout << "Enter the amount of this loan \n";
      cin >> amount;

      cout << "Enter the annual interest rate of this loan (in %) \n";
      cin >> rate;

      cout << "Enter the term (number of months, length of the loan) \n";
      cin >> term;
 }

float Loan::payment()
{
      float rt = rate/1200;  // To convert % yearly rate to monthly fraction
      return amount*rt*(  pow( (rt+1), term)/ (pow( (rt+1), term) - 1) );
}

void Loan::display()
{
    cout <<"ID: "<<ID<<" amount: $"<<amount<<" rate: "<<rate<<"% term "<<term<<" months"<<endl;
}

int main( )
{
      Loan loan1, loan2;
      float pay1, pay2;

      loan1.set(); // loan1 is called the implicit argument
      loan2.set();

      pay1  = loan1.payment();
      pay2  = loan2.payment();

      cout<<"this loan"<<endl;
      loan1.display();
      cout<<"has a payment of "<<pay1<<endl;

      cout<<"this loan"<<endl;
      loan2.display();
      cout<<"has a payment of "<<pay2<<endl;

      //cout << "The monthly payment for loan " << loan1.ID << " is: " << monthly_payment << endl;


       cout<<"Loan 1 ID: is "<<loan1.getID()<<endl;

       cout<<"combined payments are "<<loan1.payment()+loan2.payment()<<endl;

      return 0;
}
