#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Item {
public:
  Item(char*);
  char* getItemName();

  char* itemName;
};
