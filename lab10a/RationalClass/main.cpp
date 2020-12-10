#include <iostream>
using namespace std;

// Define and demonstrate the Rational class


class Rational
{
    public:
       Rational();                  // default constructor
       Rational(int num, int den);  // explicit constructor
       void set();
       Rational add(Rational other);
       // add prototypes for subtract, multiply and divide

       void display();
    private:
      int numerator;
      int denominator;
};

int main()
{
    Rational r1, r2, r3(4,5), r4;

    cout<<"r1 = " << r1.display()<<endl;
    cout<<"r3 = " << r3.display()<<endl;


    return 0;
}

Rational::Rational()
{
    numerator = 0;
    denominator = 1;

}

Rational::Rational(int num, int den)
{
    numerator = num;
    denominator = den;
}

void Rational::display()
{
    cout<<numerator<<"/"<<denominator<<endl;
}

Rational Rational::add(Rational r)
{
    Rational sum;
    return sum;
}


