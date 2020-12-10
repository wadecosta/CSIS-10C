#include<iostream>
#include<string>
using namespace std;

void write_vertical(int n);
long factorial(long n);
long iter_fact(long n);

int countX(string s);

int main()
{
	/***************  demo 1 *************
	cout << "write_vertical(1):" << endl;
	write_vertical(1);
	cout << "write_vertical(12):" << endl;
	write_vertical(12);
	cout << "write_vertical(12345):" << endl;
	write_vertical(12345);
	//**************************************/

	/***************** demo 2 ************
	cout << "factorial(1) = " << factorial(1) << endl;
	cout << "factorial(5) = " << factorial(5) << endl;
	cout << "factorial(8) = " << factorial(8) << endl;
	cout << "factorial(20) = " << factorial(20) << endl;
	//**************************************/

	//***************** demo 3 ************
	cout << "iter_fact(1) = " << iter_fact(1) << endl;
	cout << "iter_fact(5) = " << iter_fact(5) << endl;
	cout << "iter_fact(8) = " << iter_fact(8) << endl;
	cout << "iter_fact(30) = " << iter_fact(30) << endl;
	//**************************************/

	/***************** prob 1 ************
	cout << "triangle(1) = " << triangle(1) << endl;
	cout << "triangle(3) = " << triangle(3) << "should be 6 " << endl;
	cout << "triangle(8) = " << triangle(8) << "should be 36 " << endl;
	//**************************************/

	/***************** prob 2 ************
	cout << "sumDigits(126) = " << sumDigits(126) << " should be 9 "<< endl;
	cout << "sumDigits(49) = " << sumDigits(49) << " should be 13"<<endl;
	cout << "sumDigits(12) = " << sumDigits(12) << " should be 3" << endl;
	//**************************************/

	/***************** prob 3 ************
	cout << "countX(\"xxhixx\") = " << countX("xxhixx") << " should be 4 " << endl;
	cout << "countX(\"xhixhix\") = " << countX("xhixhix") << " should be 3 " << endl;
	cout << "countX(\"hi\") = " << countX("hi") << " should be 0 " << endl;
	//**************************************/

	/***************** prob 4 ************
	cout << "changePi(\"xpix\") = " << changePi("xpix") << " should give x3.14x " << endl;
	cout << "changePi(\"pipi\") = " << changePi("pipi") << " should give 3.143.14 " << endl;
	cout << "changePi(\"pip\") = " << changePi("pip") << " should give 3.14p " << endl;
	//**************************************/

	/***************** prob 5 ************
	cout << "reverseNumber(123): " << endl;
	reverseNumber(123);
	cout << "reverseNumber(12): " << endl;
	reverseNumber(12);
	cout << "reverseNumber(123456): " << endl;
	reverseNumber(123456);
	//**************************************/

	/***************** prob 6 - not too hard!  ************
	cout << "reverseIter(123): " << endl;
	reverseIter(123);
	cout << "reverseIter(12): " << endl;
	reverseIter(12);
	cout << "reverseIter(123456): " << endl;
	reverseIter(123456);
	//**************************************/


	return 0;
}

void write_vertical(int n)
{
    if(n<10)    // base case : n is a single digit, no recursive calls
        cout<<n<<endl;
    else    // general case : n is many digits
    {
        int last = n%10;    // last digit of n
        int everything_else = n/10;     // all digits in n but last
        write_vertical(everything_else);
        cout<<last<<endl;
    }
}

// factorial : 5! = 5*4*3*2*1
long factorial(long n)
{
    if(n==1)    //base case
        return 1;
    else
        return(n*factorial(n-1));
}

long iter_fact(long n)
{
    long result = 1;
    while(n>0)
    {
        result=result*n;
        n=n-1;
    }
    return result;
}



int countX(string s)
{
	if (s.length() == 0)
		return 0;
	else   // length is > 0
		//  if first letter is an 'x', return 1 + countX( remaining letters of s)

		// if the first letter is not an 'x'   ?????


		// More Hints: for example,    s = "albacore"
		//  first letter of s  :       s[0]            letter 'a', a char value
		//  remaining letters of s :   s.substr(1)     "lbacore"

	return 0;  // fix this if necessary
}

string changePi(string s)
{
	// if s.length() <= 1    --> return s    // can't have "pi" in it
	// else if s.substr(0,2) == "pi"  --> return "3.14" + s.substr(2)
	// else ???

}
