#include<iostream>
#include<cstdlib>
using namespace std;


// Class for a pair of values of type T:
template<class T>
class Pair
{
public:
        Pair( );
        Pair(T first_value, T second_value);
        void set_element(int position, T value);

        T get_element(int position) const;

private:
        T first;
        T second;
};


template<class T>
Pair<T>::Pair(T first_value, T second_value) : first(first_value), second(second_value)
{
    // empty body
}

// Use iostream and cstdlib
template<class T>
void Pair<T>::set_element(int position, T value)
{
        if(position == 1)
            first = value;
        else if(position == 2)
            second = value;
        else
        {
            cout << "Error: Illegal pair position. \n";
            exit(1);
        }
}





int main()
{
    Pair<int> p(3,4);

    Pair<char>  pc('a','z');



}
