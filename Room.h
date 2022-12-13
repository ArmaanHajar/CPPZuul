#include <iostream>
#include <map>

using namespace std:

class Room {
 public:
  Room(char*, char*);
  void addNeighbor(char*, Room*);

  char roomName[80];
  char roomDescription[200];
 private:
  map<char*, Room*> neighbors;
}
