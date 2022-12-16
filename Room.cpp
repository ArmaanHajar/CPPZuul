#include <iostream>
#include <vector>
#include <cstring>
#include <map>

#include "Room.h"

using namespace std;

Room::Item(char* itemNameTemp) {
  strncpy(itemName, itemNameTemp, 19);
}

Room::Room(char* roomNameTemp, char* roomDescriptionTemp) {
  strncpy(roomName, roomNameTemp, 79);
  strncpy(roomDescription, roomDescriptionTemp, 199);
}

void Room::addNeighbor(char* direction, Room* neighbor) {
  neighbors.insert(pair<char*,Room*>);
}

void Room:addItem(Item* item) {
  items.push_back(item);
}
