#pragma once
#include "Item.h"
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Room {
public:
  Room(char*, char*);
  void addNeighbor(char*, Room*);
  void addItem(Item*);
  void takeItem(char*);
  void printItems();
  void printExits();
  Room* changeRoom(char*);
  Item* findItem(char*);
  char* getName();
  char* getDescription();

  char roomName[80];
  char roomDescription[200];
  map<char*, Room*> neighbors;
  vector<Item*> items;
};
