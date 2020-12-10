// P15_3.cpp - Program to demonstrate the function insert.
// It asks users to input an item and the count and will ask
// them where they want to insert the new node. If the request
// is valid, the new node will be inserted.
#include <iostream>
#include <cstddef>
#include <string>
using namespace std;
struct Node
{
    string item;
    int count;
    Node *link;
};

typedef Node* NodePtr;

void insert(NodePtr after_me, string an_item, int a_number);
void head_insert(NodePtr& head, string an_item, int a_number);
void show_list(NodePtr& head);
void delete_me(NodePtr target_ptr);
NodePtr search(NodePtr head, string target);


int main()
{
     string new_item, target;
     int new_count;
     NodePtr head = NULL;
     head_insert(head, "Tea", 2);
     head_insert(head, "Jam", 3);
     head_insert(head, "Rolls", 10);

    cout << "List contains:" << endl;
    show_list(head);
    cout << "Enter the item you wish to insert (string) \n";
    cin >> new_item;
    cout << "Enter the count of new item \n";
    cin >> new_count;
    cout << "Enter the item after which you want \n";
    cout << "to insert the new node \n";
    cin >> target;
    NodePtr target_ptr = search(head, target);

    if(target_ptr!= NULL)
    {
          cout << "\nWill insert " <<  new_item << " with count" << endl
                  << new_count << " after the node with "
                  << (target_ptr-> item) << endl << endl;
          insert(target_ptr , new_item, new_count);
          cout << "List now contains:" << endl;
          show_list(head);
     }
     else
     {
          cout << "I can't find " << target
                  << " in the list, so I can't insert anything \n";
     }

    cout << "Which node to delete after target?" << endl;
    cin >> target;
    target_ptr = search(head, target);
    delete_me(target_ptr);
    cout<<"List contains:"<<endl;
    show_list(head);
    /*while(before_pointer ->link != target_ptr)
        before_pointer -> link;
    //insert(target_ptr , new_item, new_count);
    before_pointer = target_ptr -> link;
    cout << "List now contains:" << endl;

    show_list(head);
    */

    delete target_ptr;


    return 0;
}

//Uses cstddef:
void insert(NodePtr target_ptr, string an_item, int a_number)
{
    NodePtr temp_ptr;
    temp_ptr = new Node;
    temp_ptr -> item = an_item;
    temp_ptr -> count = a_number;
    temp_ptr ->link = target_ptr -> link;
    target_ptr->link = temp_ptr;
}

//Uses cstddef:
void head_insert(NodePtr& head, string an_item, int a_number)
{
    NodePtr temp_ptr;
    temp_ptr = new Node;
    temp_ptr -> item = an_item;
    temp_ptr -> count = a_number;
    temp_ptr->link = head;
    head = temp_ptr;
}

//Uses iostream and cstddef:
void show_list(NodePtr& head)
{
    NodePtr here = head;
    while (here != NULL)
    {
          cout << here-> item << "\t";
          cout << here-> count << endl;
          here = here->link;
    }
}

NodePtr search(NodePtr head, string target)
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
        while (here-> item != target && here->link != NULL)
            here = here->link;
            // Found the target, return the pointer at that location
            if (here-> item == target)
                return here;
            // Search unsuccessful, return Null
            else
                return NULL;
    }

}

    void delete_me(NodePtr target_ptr)
    {
        NodePtr temp_ptr;
        temp_ptr = target_ptr->link;
        target_ptr->link = temp_ptr->link;
        delete temp_ptr;
    }
