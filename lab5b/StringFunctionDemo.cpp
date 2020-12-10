#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a="the";
	   cout << a << endl;
	a = a + " truth"; 				// the truth
	   cout << a << endl;
	a.insert(3, " whole");   		// the whole truth
	   cout << a << endl;
	a.erase(4,1);					// the hole truth
	   cout << a << endl;
	a.replace(5, 3, "alf");			// the half truth
	
	cout << a.length() << endl;		// number of letters
	cout << a.find("half") << endl; // location of half in a
	cout << a.find("t",1) << endl;	// location of 2nd t in a
	
	// add statements to successively replace all 
	//   occurences of "th" in a with "--"
	
	
	
	

  	return 0;
}
