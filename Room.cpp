#include <cstring>
#include <iostream>
#include <iterator>
#include <map>
#include <vector>

#include "Room.h"

using namespace std;

Room::Room(char* roomNameTemp, char* roomDescriptionTemp) { // Room constructor
  strncpy(roomName, roomNameTemp, 79);
  strncpy(roomDescription, roomDescriptionTemp, 199);
}

void Room::addNeighbor(char* direction, Room* neighbor) { // Adds a neighbor to the room
  neighbors.insert(pair<char*, Room*>(direction, neighbor));
}

void Room::addItem(Item* item) { // Adds an item to the room
  items.push_back(item);
}

Room* Room::changeRoom(char* direction) { // Changes the room
  map<char*, Room*>::iterator itr;

  for (itr = neighbors.begin(); itr != neighbors.end(); itr++) { // Iterates through the neighbors map
    if (strcmp((itr->first), direction) == 0) { // If the direction matches the key in the map
      return itr->second;
    }
  }
  return NULL;
}

Item* Room::findItem(char* name) { // Finds an item in the room
  vector<Item*>::iterator itr;

  for (itr = items.begin(); itr != items.end(); itr++) { // Iterates through the items vector
    char* itemName = (*itr)->getItemName();
    if (strcmp(itemName, name) == 0) { // If the name matches the item name
      return (*itr);
    }
  }
  return NULL;
}

void Room::takeItem(char* name) { // Removes an item from the room
  vector<Item*>::iterator itr;

  for (itr = items.begin(); itr != items.end(); itr++) { // Iterates through the items vector
    char* itemName = (*itr)->getItemName();
    if (strcmp(itemName, name) == 0) { // If the name matches the item name
      items.erase(itr);
      break;
    }
  }
}

void Room::printItems() { // Prints the items in the room
  vector<Item*>::iterator itr;

  for (itr = items.begin(); itr != items.end(); itr++) { // Iterates through the items vector
    cout << (*itr)->getItemName() << endl;
  }
}

void Room::printNeighbors() { // Prints the neighbors of the room
  map<char*, Room*>::iterator itr;
  
  for (itr = neighbors.begin(); itr != neighbors.end(); itr++) { // Iterates through the neighbors map
    cout << itr->first << endl;
  }
}

char* Room::getRoomName() { // Returns the room name
  return roomName;
}

char* Room::getDescription() { // Returns the room description
  return roomDescription;
}