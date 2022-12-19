#include "Item.h"
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

Item::Item(char* itemNameTemp) {
    itemName = new char[20];
    strncpy(itemName, itemNameTemp, 19);
}

char* Item::getItemName() {
    return itemName;
}