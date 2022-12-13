#include <iostream>

using namespace std;

Room::Room(char* roomNameTemp, char* roomDescriptionTemp) {
  strncpy(roomName, roomNameTemp, 79);
  strncpy(roomDescription, roomDescriptionTemp, 199);
}

void Room::addNeighbor(char* direction, Room* neighbor) {
  neighbors.insert(pair<char*,Room*>);
}
