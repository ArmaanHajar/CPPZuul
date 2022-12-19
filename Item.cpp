#include "Item.h"
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

Item::Item(char* nameTemp) {
    strncpy(name, nameTemp, 19);
}

char* Item::getName() {
    return name;
}