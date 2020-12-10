// alpha3.cpp
#include <iostream>
#include <string>
using namespace std;

void swap (string& s, string& t);
// Swap contents of s and t.

int main()
{
   string w1, w2, w3;
   cout << "Enter 3 words: ";
   cin >> w1 >> w2 >> w3;
   if (w1 > w2) swap(w1,w2);
   if (w1 > w3) swap(w1,w3);
   if (w2 > w3) swap(w2,w3);
   cout << w1 << ' ' << w2 << ' ' << w3 << endl;
   return 0;
}

void swap (string& s, string& t) 
{
   string temp;
   temp = s;
   s = t;
   t = temp;
}

/*
Enter 3 words: ram  ewe  lamb
ewe lamb ram

Enter 3 words: screw pulley cog
cog pulley screw
*/

