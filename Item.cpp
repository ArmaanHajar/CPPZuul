#include "Item.h"
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

Item::Item(char* itemNameTemp) { // Item constructor
    itemName = new char[20];
    strncpy(itemName, itemNameTemp, 19);
}

char* Item::getItemName() { // Returns the item name
    return itemName;
}