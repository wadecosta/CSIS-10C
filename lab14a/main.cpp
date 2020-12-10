#include <iostream>
#include<list>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

int main()
{
    /*part 1
    // declare a list<int> variable

    list<char> lis;

    char letter;
    while(cin>>letter)
    {
        lis.push_back(letter);
        cout<<letter<<"-";
                //  change this to add letter to end of your list
    }
    cout<<endl;


    // insert z at from and q at end
    lis.push_front('z');
    lis.push_back('q');

    // print the list contents - no [] allowed for list!!
    for(list<char>::iterator it = lis.begin(); it != lis.end(); it++)
        cout<<*it<<" ";
    cout<<endl;


    // remove the first and last item (pop_front and pop_back)
    lis.pop_front();
    lis.pop_back();

    // print the list contents again
    for(list<char>::iterator it = lis.begin(); it != lis.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    */


    /*part2 (same thing with vector)


        vector<char> vector_list;

    char input;
    while(cin>>input)
    {
        vector_list.push_back(input);
        cout<<input<<"-";
                //  change this to add letter to end of your list
    }
    cout<<endl;


    // insert z at from and q at end
    vector_list.insert(vector_list.begin(), 'z');
    vector_list.push_back('q');

    // print the list contents - no [] allowed for list!!
    for(vector<char>::iterator it = vector_list.begin(); it != vector_list.end(); it++)
        cout<<*it<<" ";
    cout<<endl;


    // remove the first and last item (pop_front and pop_back)
    vector_list.erase(vector_list.begin());
    vector_list.pop_back();

    // print the list contents again
    for(vector<char>::iterator it = vector_list.begin(); it != vector_list.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    */




    // part 3 Palindrom Check!!

    stack<char> st;
    queue<char> qu;


    // repeat while loop above, only add letter to both st and qu
    char in;
    while(cin>>in)
    {
        st.push(in);
        qu.push(in);
    }
    cout<<endl;


    // after while loop

    bool isPalindrome = true;
    // (while) keep removing (pop) items from both st and qu while !empty
    //      if ever the two items are not the same, set isPalindrome = false
    while(isPalindrome == true && (!st.empty() &&  !qu.empty()))
    {
        if(st.top() != qu.front())
            isPalindrome = false;
        else
        {
            qu.pop();
            st.pop();

        }
    }

    // after loop, use isPalindrome to tell which is true (yes or no)
    if(isPalindrome == true)
        cout<<"YES"<<endl;
    else
        cout<<"NO!"<<endl;


    return 0;
}
