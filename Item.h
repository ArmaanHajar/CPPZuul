#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Item {
public:
  // Functions
  Item(char*);
  char* getItemName();

  // Variables
  char* itemName;
};
