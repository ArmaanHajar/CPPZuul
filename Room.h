#pragma once
#include "Item.h"
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Room {
public:
  // Functions
  Room(char*, char*);
  void addNeighbor(char*, Room*);
  void addItem(Item*);
  void takeItem(char*);
  void printItems();
  void printNeighbors();
  Room* changeRoom(char*);
  Item* findItem(char*);
  char* getRoomName();
  char* getDescription();

  // Variables
  char itemName[15];
  char roomName[80];
  char roomDescription[200];
private:
  // Neighbors and Items Map and Vector
  map<char*, Room*> neighbors;
  vector<Item*> items;
};
