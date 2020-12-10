// P15_2.cpp - Program to demonstrate the function search.
#include <iostream>
#include <cstddef>
#include <string>
using namespace std;
struct Node
{
    string item;
    int count;
    double cost;
    Node *link;
};

typedef Node* NodePtr;

NodePtr search(NodePtr head, string target_item);
NodePtr search(NodePtr head, double target_item);
void head_insert(NodePtr& head, string an_item, int a_number, double cost);
void show_list(NodePtr& head);
void total_cost(NodePtr& head);

int main()
{
    NodePtr head = NULL;
    head_insert(head, "Tea", 2, 5.19);
    head_insert(head, "Jam", 3, 4.59);
    head_insert(head, "Rolls", 10, 1.99);

    cout << "List contains:" << endl;
    show_list(head);
    int choice;
    cout << "Search by \n 1)item \n 2)cost" << endl;
    cin >> choice;
    if(choice == 1)
    {
        string target;
        cout << "Enter the name of the item: ";
        cin>>target;
        NodePtr result = search(head, target);
        if (result == NULL)
            cout << target << " is not in the cart." << endl;
        else
            cout << target << " is in the cart." << endl;
    }
    else
    {
        double target;
        cout << "Enter the cost of the item: ";
        cin>>target;
        NodePtr result = search(head, target);
        if (result == NULL)
            cout << target << " is not in the cart." << endl;
        else
            cout << target << " is in the cart." << endl;
    }
    return 0;
}


NodePtr search(NodePtr head, string target_item)
{
   // Point to the head node
    NodePtr here = head;
    // If the list is empty nothing to search
    if (here == NULL)
    {
        return NULL;
    }
    // Search for the item
    else
    {
        // while you have still items and you haven't found the target yet
        while (here-> item != target_item && here->link != NULL)
            here = here->link;

        // after the loop, determine the reason for loop exit
        if (here-> item == target_item) // Found the target, return the pointer at that location
            return here;
        else  // Search unsuccessful, return Null
            return NULL;
    }
}

NodePtr search(NodePtr head, double target_item)
{
   // Point to the head node
    NodePtr here = head;
    // If the list is empty nothing to search
    if (here == NULL)
    {
        return NULL;
    }
    // Search for the item
    else
    {
        // while you have still items and you haven't found the target yet
        while (here-> cost != target_item && here->link != NULL)
            here = here->link;

        // after the loop, determine the reason for loop exit
        if (here-> cost == target_item) // Found the target, return the pointer at that location
            return here;
        else  // Search unsuccessful, return Null
            return NULL;
    }
}


void head_insert(NodePtr& head, string an_item, int a_number, double a_cost)
{
    NodePtr temp_ptr;
    temp_ptr = new Node;
    temp_ptr -> item = an_item;
    temp_ptr -> count = a_number;
    temp_ptr -> cost = a_cost;
    temp_ptr->link = head;
    head = temp_ptr;
}
void show_list(NodePtr& head)
{
    NodePtr here = head;

    while (here != NULL)
    {
        cout << here-> item << "\t";
        cout << here-> count << "\t";
        cout << "$" << here-> cost << endl;

        here = here->link;
    }
}

void total_cost(NodePtr& head)
{
    NodePtr here = head;
    double sum = 0;
    while(here != NULL)
    {
        sum += (here->count * here->cost);
        here = here ->link;
    }
    cout << "The total cost is $" << sum << endl;
}
