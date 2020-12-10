// ATM_part1.cpp      the ATM Simulator for CSIS 10A Project 2
//
//  Your Name         Date

#include<ctime>
#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include<fstream>
using namespace std;

//FUNCTION PROTOTYPES ALPHABETIZED...Part 2 functions are commented out
void add_acct(); 
void admin();
void banner();
void cash();
void deposit(int validID);
//void delete_acct(); 
float getBalance(int validID);
void getDateAndTime(string & date, string & time);
void getLoginInfo(string & enteredName, int & enteredPIN); // out
void receipt(char code, int userID, double money, double balance);
//void recent_transactions(int userID);
bool verifyLogin(string enteredName, int enteredPIN,    // in
				  int & verifiedID);   // out
void view_accounts(); 
//void view_accounts_by_name();    
void view_transactions();
//void view_transactions_by_userID();
void withdraw(int validID);


int main()
{
char choice='D';
int UserID, PIN;
string name;
string date, time;

banner();
getLoginInfo(name, PIN);
getDateAndTime(date,time);

if (verifyLogin(name,PIN, UserID)) 
{
	while(choice!='Q'&&choice!='q')
	{
		system("cls"); // clear the screen
		banner();
		cout<<date<<"            "<<time<<endl;
		cout<<"Welcome, Valued Customer "<<name<<"! "<<"Your ID is "<<UserID<<"\n"<<endl;
		cout<<"Please Choose from the following: "<<endl;
		cout<<"D -- Deposit Money"<<endl;
		cout<<"W -- Withdraw Money"<<endl;
		cout<<"B -- Account Balance"<<endl;
		cout<<"R -- Recent Transactions"<<endl;
		cout<<"Q -- Quit"<<endl;

		cout<<"\n\nEnter your choice : ";
		cin>>choice;     /*read the choice*/

		switch (choice)
		{
		  case 'A': case 'a':
			if (UserID==1010)
				admin();               
			else
				cout<<"Permission Denied"<<endl;
			break;

		  case 'D': case 'd':
			deposit(UserID);               /*to deposit money*/
			break;

		  case 'W': case 'w':
			withdraw(UserID);              /*to withdraw money*/
			break;

		  case 'B': case 'b':	                                 /*to see the balance*/
			cout<<"Your balance is "<<getBalance(UserID)<<endl;
			system("pause");
			break;

		  case 'R': case 'r':	                              
	//		recent_transactions(UserID);
			break;

		  case 'Q': case 'q':
			  cout<<endl<<"Thankyou for banking with us!"<<endl;
			  break;
		  default:                              /*if choice is not valid*/
				cout<<"ERROR -- PLEASE TRY AGAIN";			
		}
	}
}
else
	cout<<"Incorrect PIN...Please try again later"<<endl;
system("pause");
return 0;
}  // close of main function


void add_acct()
{
 cout<<"add_acct:  waiting your definition"<<endl;
} // close of add_acct function

void admin()
{
 cout<<"admin:  waiting your definition"<<endl;
}  // close of admin function


void banner()
{  // taken from http://www.schnoggo.com/figlet.html
	cout<<"  ____                    _                 __ "<<endl;
	cout<<" | __ )    __ _   _ __   | | __     ___    / _|"<<endl;
	cout<<" |  _ \\   / _` | | '_ \\  | |/ /    / _ \\  | |_ "<<endl;
	cout<<" | |_) | | (_| | | | | | |   <    | (_) | |  _|"<<endl;
	cout<<" |____/   \\__,_| |_| |_| |_|\\_\\    \\___/  |_|  "<<endl;
	cout<<"                                               "<<endl;
	cout<<"     _                                _         "      <<endl; 
	cout<<"    / \\     _ __ ___     ___   _ __  (_)   ___    __ _ "<<endl;
	cout<<"   / _ \\   | '_ ` _ \\   / _ \\ | '__| | |  / __|  / _` |"<<endl;
	cout<<"  / ___ \\  | | | | | | |  __/ | |    | | | (__  | (_| |"<<endl;
	cout<<" /_/   \\_\\ |_| |_| |_|  \\___| |_|    |_|  \\___|  \\__,_|"<<endl;
	cout<<""<<endl;
} // close of banner function

void cash()
{
	cout<<"XXXXXXXXXXXXXXXXXXFEDERAL RESERVE NOTEXXXXXXXXXXXXXXXXXXX"<<endl;
	cout<<"XXX  XX       THE UNITED STATES OF AMERICA        XXX  XX"<<endl;
	cout<<"XXXX XX  -------       ------------               XXXX XX"<<endl;
	cout<<"XXXX XX              /   jJ===-\\    \\      C7675  XXXX XX"<<endl;
	cout<<"XXXXXX     OOO      /   jJ - -  L    \\      ---    XXXXXX"<<endl;
	cout<<"XXXXX     OOOOO     |   JJ  |   X    |       __     XXXXX"<<endl;
	cout<<"XXX    3   OOO      |   JJ ---  X    |      OOOO    3 XXX"<<endl;
	cout<<"XXX                 |   J|\\    /|    |     OOOOOO     XXX"<<endl;
	cout<<"XXX     C36799887   |   /  |  |  \\   |      OOOO      XXX"<<endl;
	cout<<"XXX                 |  |          |  |       --       XXX"<<endl;
	cout<<"XXX      -------    \\ /            \\ /                XXX"<<endl;
	cout<<"X  XX                \\ ____________ /               X  XX"<<endl;
	cout<<"XX XXX 3_________        --------  ___   _______ 3 XXX XX"<<endl;
	cout<<"XX XXX            ___   ONE DOLLAR  i              XXX XX"<<endl;
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;	
} // close of cash function


void deposit(int validID)
{ //DO NOT MODIFY THIS FUNCTION
	double balance;
	double money;
	string date, time;  // time and date information
	
	getDateAndTime(date, time);
	
	cout<<endl<<"Enter the amount of money to be deposited:  ";
	cin>>money;                       
	while(money<0)
	{
		cout<<endl<<"Please enter valid amount......."<<endl;
		cin>>money;
	}
	
	cout<<fixed<<setprecision(2)<<endl<<"\n$"<<money
		<<" will be deposited to your account"<<endl
		<<"within 3 business days"<<endl;
	
	balance = getBalance(validID);	
	balance+=money;

	cout<<"\nPlease take your receipt: "<<endl; 
	receipt('D', validID, money, balance);

	ofstream trans("transactions.txt", ios::app);
	trans<<date<<" "<<time<<setw(8)<<validID<<setw(6)<<'D'
		 <<fixed<<setprecision(2)<<setw(12)<<money<<setw(12)<<balance<<endl;
	trans.close();
	
	system("pause");
} // close of deposit function

float getBalance(int validID)
{ // Returns the validBalance of customer# validID
  
	int ID;              // ID read from file
	double balance, money,     // balance and money read from file
		   validBalance=0; // valid final balance from last transaction of validID
	char code;
	string date, time;  // time and date information
	
	ifstream trans("transactions.txt");
	if (!trans) {cout<<"file not found"; system("pause"); exit(1);}
	
	// Read through the transaction file one line at a time
	//   whenever an ID matches validID, capture the balance into validBalance
	// When the loop completes it will automatically have the last 
	//  balance of validID captured in validBalance
	cout<<"balance: awaiting definition"<<endl;
	
	trans.close();
	return validBalance;
} // close of getBalance function


void getDateAndTime(string & date, string & time)
{
	char dateStr[9], timeStr[9];  // time and date information
	_strdate(dateStr);            // dateStr now has date
	_strtime(timeStr);            // timeStr now has time
	date=dateStr;
	time=timeStr;	
} // close of getDateAndTime function

void getLoginInfo(string & enteredName, int & enteredPIN)  // out
{ 
	cout<<"getLoginInfo: awaiting definition"<<endl;
} // close of getLoginInfo function



void receipt(char code, int userID, double money, double balance)
{
 cout<<"receipt:  waiting your definition"<<endl;
} // close of receipt function



bool verifyLogin(string enteredName, int enteredPIN,    // in
				  int & verifiedID)   // out
// determines if login info is correct and returns verifiedID
//  using pass by reference, and true/false indicating success

{	string userName;
	int userID, PIN;
	double balance;

	ifstream accts("accounts.txt");

	while(accts>>userID>>userName>>PIN)
	{
		if (enteredName==userName && enteredPIN==PIN)
		{	accts.close(); // close file, you are done
			verifiedID=userID;
			return true;          // successful match
		}
	}
	accts.close();
	verifiedID=0;
	return false;  // unsuccessful match
} // close of verifyLogin function

void 	view_accounts()
{
 cout<<"view_accounts:  waiting your definition"<<endl;
}  // close of view_accounts function
  


void 	view_transactions()
{
 cout<<"view_transactions:  waiting your definition"<<endl;
} // close of view_transactions function



void withdraw(int validID)
{
 cout<<"withdraw:  waiting your definition"<<endl;
}





