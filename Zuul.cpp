#include <iostream>
#include <vector>
#include "Room.h"
#include <cstring>

using namespace std;

int main() {

  vector<Room*> roomList;
  // vector<Item*> inventory;

  char roomName[80];
  char roomDescription[200];

  strncpy(roomName, "Alaska");
  strncpy(roomDescription, "a cold ass state");
  Room* alaska = new Room(roomName, roomDescription);

  
}
