// politic.cpp
#include <iostream>
#include <string>
using namespace std;

void get_voter_data (string& f_name, string& party);
// Get voter's first name and party affiliation

void do_campaign_letter (string f_name, string party);
// Print a "personalized" form letter.

int  main()
{ 
   string first_name, party;
   get_voter_data(first_name, party);
   do_campaign_letter(first_name, party);
   return 0;	
}

void get_voter_data(string& f_name,  string& party)
{
    cout << "Enter voter's first name: ";
    cin >> f_name;
    cout << "Enter voter's party affiliation: ";
    cin >> party;
}

void do_campaign_letter (string f_name, string party)
{
   cout << "\nDear " << f_name << ":\n";
   cout << "     If you are familiar with my record, you know\n";
   cout << "that I am not afraid to make the tough decisions.\n";
   cout << "Rest assured that on the School Bond Issue, I will\n";
   cout << "work tirelessly to provide the highest quality\n";
   cout << "education for our youngsters, while keeping\n";
   cout << "property taxes as low as possible. To be effective\n";
   cout << "I especially need the support of " << party << "s like\n";
   cout << "yourself.\n";
   cout << "\nSincerely,\nAlex Hundt\n";
}

/* A sample run:
Enter voter's first name: Ross
Enter voter's party affiliation: Independent

Dear Ross:
     If you are familiar with my record, you know
that I am not afraid to make the tough decisions.
Rest assured that on the School Bond Issue, I will
work tirelessly to provide the highest quality
education for our youngsters, while keeping
property taxes as low as possible. To be effective
I especially need the support of Independents like
yourself.

Sincerely,
Alex Hundt
*/
