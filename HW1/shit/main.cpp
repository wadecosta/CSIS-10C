#include <iostream>
using namespace std;

int main()
{
   int feet, inches, pounds, age;
    float BMR;
    char gender;

    cout << "Are you male or female? (M or F)" << endl;
    cin >> gender;

    while (gender != 'M' || gender != 'm' || gender != 'F' || gender != 'f'){
        cout << "Please enter M or F" << endl;
        cin >> gender;
    }

    cout << "Please enter your height in feet." << endl;
    cin >> feet;
    inches = feet * 12;
    cout << "Please enter your weight in pounds." << endl;
    cin >> pounds;
    cout << "Please enter your age. " << endl;
    cin >> age;

    if (gender == 'M' || gender == 'm') {
        BMR = 66 + (6.3 * pounds) + (12.9 * inches) - (6.8 * age);
        cout << BMR << endl;
    }
    if (gender == 'F' || gender == 'f'){
        BMR = 655 + (4.3 * pounds) + (4.7 * inches) - (4.7 * age);
        cout << BMR << endl;
    }
}
