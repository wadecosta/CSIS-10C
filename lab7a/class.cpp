// class.cpp
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void get_data (string& name,         // out
               int& scr1, int& scr2); // out

void find_mark (string name,        // in
                int scr1, int scr2, // in
                int& count,        // in-out
                ofstream& fout);  // in-out

void update_maxes (int scr1, int scr2,    // in
                   int& max1, int& max2); // in-out

void print_summary (int pass_count,      // in
                    int max1, int max2,  // in
                    ofstream& fout);   // in-out
int main()
{
   int num_students;
   string name;
   int score1, score2,
       max1, max2,
       pass_count;
   ofstream fout("output.txt");

   cout << "How many students? ";
   cin >> num_students;

   pass_count = 0;
   max1 = -1;  max2 = -1;
   for (int i=1; i <= num_students; i++)
      {
      get_data (name, score1, score2);
      find_mark (name, score1, score2, pass_count, fout);
      update_maxes (score1, score2, max1, max2);
      }
   print_summary (pass_count, max1, max2, fout);
   return 0;
}

void get_data (string& name,        // out
               int& scr1, int& scr2) // out
{
   cout << "Last name: "; cin >> name;
   cout << "Scores:    "; cin >> scr1 >> scr2;
}

void find_mark (string name,        // in
                int scr1, int scr2, // in
                int& count,         // in-out
                ofstream& fout)     // in-out
{
   double avg;
   avg = (scr1 + scr2) / 2.0;
   fout << setiosflags(ios::fixed | ios::showpoint)
        << setprecision(1);
   fout << name << setw(10-name.length()) << scr1
        << setw(3) << scr2 << setw(5) << avg;
   if (avg >= 60)
      {
      fout << "  Pass\n";
      count++;
      }
   else
      fout << "  Fail\n";
}

void update_maxes (int scr1, int scr2,   // in
                   int &max1, int& max2) // in-out
{
   if (scr1 > max1) max1 = scr1;
   if (scr2 > max2) max2 = scr2;
}

void print_summary (int pass_count,     // in
                    int max1, int max2, // in
                    ofstream& fout)     // in-out
{
   fout << pass_count << " students passed.\n";
   fout << "Highest score on exam 1: " << max1 << endl;
   fout << "Highest score on exam 2: " << max2 << endl;
}

/* Monitor:
How many students? 3
Last name: Adams
Scores:    60 70
Last name: Bond
Scores:    75 40
Last name: Clark
Scores:    70 82
*/

/* text file output:
Adams   60 70 65.0  Pass
Bond    75 40 57.5  Fail
Clark   70 82 76.0  Pass
2 students passed.
Highest score on exam 1: 75
Highest score on exam 2: 82
*/
