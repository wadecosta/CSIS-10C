#include "Room.h"
#include <iostream>
#include<vector>

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

    vecotr<Room*>allRooms;  ///vecotr of room points called allRooms
                            ///holds pointers to all rooms to the game

    Room* current;  ///made a room called current
                    ///keeps track of current room we are in
    current = new Room("kitchen", "A mess of dishes awaits cleaning");

    ///add kitchen pointer to all rooms
    allRooms.push_back(current);

    cout<<"Current room is "<<(*current)<<endl; ///without the * it will give actual loction in memory
                                                ///the class room is not taking a pointer, it is take the room itself

    ///Create the Den
    Room* temp = new Room("Den","TV is blaring loudly");    ///pointer room

    ///add Den pointer to all rooms
    allRooms.push_back(temp);

    ///Connects Kitchen to the Den
    current -> connect(EAST, temp, WEST);  ///Exits east room, goes to temp, which is now west
    ///Move current to the new room
    current = current->east();
    cout<<"Current room is "<<(*current)<<endl;

    ///Create Bedroom
    temp = new Room("Bedroom", "the sun shines through in a picture window");

    ///add Bedroom pointer to all rooms
    allRooms.push_back(temp);

    ///connect Den to Bedroom
    current -> connect(SOUTH, temp, NORTH);
    ///Move current to the new room
    current = current->south();
    cout<<"Current room is "<<(*current)<<endl;

    ///Create Patio
    temp = new Room("Patio","A plastic table filled with BBQ food");

    ///add Patio pointer to all rooms
    allRooms.push_back(temp);

    ///connect Bedroom to Patio
    current -> connect(WEST, temp, EAST);
    ///Move current to the new room
    current = current->west();
    cout<<"Current room is "<<(*current)<<endl;

    for (int k = 0; k<allRooms.size();k++)
    {
        cout<<"Room "<<k<<" is "<< allRooms[k]->name()<<endl;
    }

    ///move temp to Kitchen
    temp = temp->east()->north()->west();
    ///connect Pation to Kitchen
    //current -> connect(NORTH, temp, SOUTH);
    current-> connect(NORTH, allRooms[0], SOUTH)
    ///Move current to the new room
    current = current->north();
    cout<<"Current room is "<<(*current)<<endl;

    ///clean up - - remove all rooms from memory
    for (int k = 0; k<allRooms.size(); k++)
        allRooms[k]->~Room ();


    return 0;
}
