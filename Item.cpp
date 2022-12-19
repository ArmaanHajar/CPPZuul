#include "Item.h"
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

Item::Item(char* nameTemp) {
    name = new char[20];
    strncpy(name, nameTemp, 19);
}

char* Item::getName() {
    return name;
}