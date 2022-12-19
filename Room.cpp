#include <cstring>
#include <iostream>
#include <iterator>
#include <map>
#include <vector>

#include "Room.h"

using namespace std;

Room::Room(char* roomNameTemp, char* roomDescriptionTemp) {
  strncpy(roomName, roomNameTemp, 79);
  strncpy(roomDescription, roomDescriptionTemp, 199);
}

void Room::addNeighbor(char* direction, Room* neighbor) {
  neighbors.insert(pair<char*, Room*>(direction, neighbor));
}

void Room::addItem(Item* item) {
  items.push_back(item);
}

Room* Room::changeRoom(char* direction) {
  map<char*, Room*>::iterator itr;

  for (itr = neighbors.begin(); itr != neighbors.end(); itr++) {
    if (strcmp((itr->first), direction) == 0) {
      return itr->second;
    }
  }
  return NULL;
}

Item* Room::findItem(char* name) {
  vector<Item*>::iterator itr;

  for (itr = items.begin(); itr != items.end(); itr++) {
    char* itemName = (*itr)->getItemName();
    if (strcmp(itemName, name) == 0) {
      cout << "found item" << endl;
      return (*itr);
    }
    else {
      cout << "item not found" << endl;
    }
  }
  return NULL;
}

void Room::takeItem(char* name) {
  vector<Item*>::iterator itr;

  for (itr = items.begin(); itr != items.end(); itr++) {
    char* itemName = (*itr)->getItemName();
    if (strcmp(itemName, name) == 0) {
      items.erase(itr);
      cout << "took item" << endl;
    }
    else {
      cout << "item not taken" << endl;
    }
  }
}

void Room::printItems() {
  vector<Item*>::iterator itr;

  for (itr = items.begin(); itr != items.end(); itr++) {
    cout << (*itr)->getItemName() << endl;
  }
}

void Room::printExits() {
  map<char*, Room*>::iterator itr;
  
  for (itr = neighbors.begin(); itr != neighbors.end(); itr++) {
    cout << itr->first << endl;
  }
}

char* Room::getRoomName() {
  return roomName;
}

char* Room::getDescription(){
  return roomDescription;
}