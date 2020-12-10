#include <iostream>

using namespace std;

int main()
{
    /* 1.)
    int weight, height, age, bars;
    float BMR;
    char gender;
    cout<<"Enter your weight(lbs), height(inches), and gender(M or F): ";
    cin>>weight>>height>>age;

    if(gender == 'F' || gender == 'f')
    {
        BMR = 655 + (4.3*weight) + (4.7*height) - (4.7*age);
    }
    else
    {
        BMR = 66 + (6.3*weight) + (12.9*height) - (6.8*age);
    }

    bars = BMR/230;
    cout<<"Number of chocolate bars to maintain weight: "<<bars;
    // end of problem 1 */



    //* 2.)
    int toothpicks = 23, input;

    while(toothpicks > 0)
    {
        cout<<"Enter 1, 2, or 3: ";
        cin>>input;

        while(input > 3 || input < 1)
         {
            cout<<"Wrong! Please enter 1, 2, or 3"<<endl;
            cin>>input;
        }
        toothpicks = toothpicks - input;

        if(toothpicks == 0)
        {
            cout<<"Sorry... You lost... Play again"<<endl;
            break;
        }


        if(toothpicks > 4)
        {
            toothpicks = toothpicks - 4;
        }
        else if(toothpicks > 1)
        {
            toothpicks = 1;
        }
        else
        {
            toothpicks = 0;
            cout<<"Computer loses!"<<endl;
        }
    }


    // end of problem 2*/
    return 0;
}
