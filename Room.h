#include <iostream>
#include <map>
#include <vector>

using namespace std:

class Room {
 public:
  Room(char*, char*);
  Item(char*);
  void addNeighbor(char*, Room*);
  void addItem(Item*);
  Item* getItem();

  char itemName[20];
  char roomName[80];
  char roomDescription[200];
  map<char*, Room*> neighbors;
  vector<Item*> items;
}
