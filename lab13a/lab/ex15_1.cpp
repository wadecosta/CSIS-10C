// P15_1.cpp - Program to demonstrate the function head_insert.
#include <iostream>
#include <cstddef>
#include <string>
using namespace std;

struct Node
{
    string item;  // food item
    int count;    // how many to buy
    double cost;
    Node *link;
};

typedef Node* NodePtr;

void head_insert(NodePtr& head, string an_item, int a_number, double a_cost);
void show_list(NodePtr& head);
void total_cost(NodePtr& head);

int main1()
{
    NodePtr head = NULL;

    head_insert(head, "Tea", 2, 5.19);
    head_insert(head, "Jam", 3, 4.59);
    head_insert(head, "Rolls", 10, 1.99);
//
    show_list(head);
    total_cost(head);
	//system("pause");
    return 0;
}

void head_insert(NodePtr& head, string an_item, int a_number, double a_cost)
{
    NodePtr temp_ptr;
    temp_ptr = new Node;

    temp_ptr-> item = an_item;
    temp_ptr-> count = a_number;
    temp_ptr-> cost = a_cost;

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
