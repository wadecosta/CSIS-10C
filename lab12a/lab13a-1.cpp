#include<iostream>
using namespace std;

// A RaceData class that demonstrates putting an array in an object

class RaceData
{
public:
    RaceData();// default constructor
	void set_distance(int d);
	void set_times(int i, double t);
	void display();
	void printStatistics();
	friend ostream& operator<<(ostream& out, RaceData rd);
private:
	double time[5];  //array of time in second
	int distance;    //distance in meter
};

RaceData::RaceData()
{
    distance = 0;
    for(int k = 0; k<5; k++)
        time[k] = 0;
}

void RaceData::set_distance(int d)
{
	distance = d;
}

void RaceData::set_times(int i, double t)
{
	time[i] = t;
}

void RaceData::display()
{
	cout <<"In the "<< distance << " meter race, the times are\n";

	for (int i = 0; i < 5; i++)
	{
		cout << time[i] << endl;
	}
}

// write printStatistics here
void RaceData::printStatistics()
{
    double small, large, average, sum;
    small  = time[0];
    for(int k = 0; k < 5; k++)
    {
        if(time[k]< small)
            small = time[k];
    }
    cout<<"Min is "<<small<<endl;

    large = time[0];
    average = 0;

    for(int k = 0; k < 5; k++)
    {
        if(time[k]> large)
            large = time[k];
        sum += time[k];
    }
    cout<<"Max is "<<large<<endl;
    average = sum/5;
    cout<<"Average is "<<average<<endl;

}


int main1()
{
	//*------------- Demo RaceData class -------------
	// A) Declare a RaceData object to represent your
	//  5 best times in the 800m race.

	RaceData myTimes;

	// B) Display the original object data

	cout<<"Here are my race times \n";
	myTimes.display();

	// C) Set the distance, the 5 times, then
	myTimes.set_distance(800);
	myTimes.set_times(0,186.1);
    myTimes.set_times(1,100.5);
    myTimes.set_times(2,154.5);
    myTimes.set_times(3,123.5);
	myTimes.set_times(4, 143.5);

	// D) Display the object data again
	cout<<"After setting distance and one time, \n";
	myTimes.display();


	//*/
	//*------------- Problem 1------------------------
	// Define the printStatistics method so it computes
	//   and prints the best, worst and average times
	// and add a statement to call it below.

	cout<<"Here are my race statistics: "<<endl;
	myTimes.printStatistics();


	//*/
	//*--------------Problem 2-------------------------
	// Define a default constructor that sets all the data fields to 0

	RaceData JaneTimes;

	cout<<"Here are Jane's race times before setting:\n";
	JaneTimes.display();


	//*/
	/*--------------Problem 3-------------------------
	// overload the output stream operator so you can print the data
	//  using the following statements

	cout<<"Here are your race times again"<<myTimes<<endl;
	cout<<"Here are Jane's race times again"<<JaneTimes<<endl;


	//*/
	//*--------------Demo 4-------------------------
	// Demonstrate the automatic Copy Constructor and Assignment Operator

	RaceData BobTimes(myTimes);  // BobTimes is created as a copy of myTimes
	RaceData MelTimes = JaneTimes; // still using Copy Constructor

	cout<<"Bob's times are \n";
	BobTimes.display();

	cout << "Mel's times are \n";
	MelTimes.display();

	MelTimes = myTimes;         // this uses the automatic assignment operator
	cout << "after MelTimes=myTimes, Mel's times are \n";
	MelTimes.display();

	//*/

	// Suppose we want to use a dynamic array in our class?
	// Open and run lab13a-2 to learn about the issues

	return 0;
}
