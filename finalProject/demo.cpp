#include "Room.h"
#include <iostream>

using namespace std;

int main()
{
//    cout << "Hello world!" << endl;
//
//    Room* start = new Room("The Classroom", "A handful of students are nodding off as the lecturer drones on");
//    Room* current = start;    /// the address of the current room we are at
//
//
//    Room* temp = new Room("The Lab","Computer geeks flood the terminals, hacking their way intoA long corridor with doors on either side");
//
//    start->connect(EAST,temp,WEST); /// if we travel east from start we will enter the Hallway
//
//    current=current->east();  /// travel east from current room to hallway
//
//    cout<<current->name()<<": "<<current->description()<<endl;
    
    //(We will now make our own demo)
    
    Room* current;  ///made a room called current
                    ///keeps track of current room we are in
    current = new Room("kitchen", "A mess of dishes awaits cleaning");
    cout<<"Current room is "<<(*current)<<endl; ///without the * it will give actual loction in memory
                                                ///the class room is not taking a pointer, it is take the room itself
    ///Create the Den
    Room* temp = new Room("Den","TV is blaring loudly");    ///pointer room
    ///Connects Kitchen to the Den
    current -> connect(EAST, temp, WEST);  ///Exits east room, goes to temp, which is now west
    ///Move current to the new room
    current = current->east();
    cout<<"Current room is "<<(*current)<<endl;
    
    ///Create Bedroom
    temp = new Room("Bedroom", "the sun shines through in a picture window");
    ///connect Den to Bedroom
    current -> connect(SOUTH, temp, NORTH);
    ///Move current to the new room
    current = current->south();
    cout<<"Current room is "<<(*current)<<endl;
    
    ///Create Patio
    temp = new Room("Patio","A plastic table filled with BBQ food");
    ///connect Bedroom to Patio
    current -> connect(WEST, temp, EAST);
    ///Move current to the new room
    current = current->west();
    cout<<"Current room is "<<(*current)<<endl;
    
    ///move temp to Kitchen
    temp = temp->east()->north()->west();
    ///connect Pation to Kitchen
    current -> connect(NORTH, temp, SOUTH);
    ///Move current to the new room
    current = current->north();
    cout<<"Current room is "<<(*current)<<endl;

    



    return 0;
}
