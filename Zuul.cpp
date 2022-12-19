#include <cstring>
#include <iostream>
#include <iterator>
#include <vector>

#include "Item.h"
#include "Room.h"

using namespace std;

void print(Room* toPrint, vector<Item*> inventory);
void goNextRoom(Room* currentRoom);
void pickUpItem(Room* currentRoom, vector<Item*> inventory);
void dropItem(char* item, Room* currentRoom, vector<Item*> inventory);
void printInventory(vector<Item*> inventory);

int main() {
  vector<Item*> inventory;

  char roomName[80];
  char roomDescription[200];
  char itemName[20];

  char* north = new char[10];
  char* east = new char[10];
  char* south = new char[10];
  char* west = new char[10];
  strncpy(north, "north", 9);
  strncpy(east, "east", 9);
  strncpy(south, "south", 9);
  strncpy(west, "west", 9);

  strncpy(roomName, "Alaska", 79);
  strncpy(roomDescription, "A Very Cold State", 199);
  Room* alaska = new Room(roomName, roomDescription);

  strncpy(roomName, "Washington", 79);
  strncpy(roomDescription, "A Very Rainy State With a Terrible Football Team", 199);
  Room* washington = new Room(roomName, roomDescription);

  strncpy(roomName, "Oregon", 79);
  strncpy(roomDescription, "A Very Rainy State With Lots of Trees", 199);
  Room* oregon = new Room(roomName, roomDescription);

  strncpy(roomName, "California", 79);
  strncpy(roomDescription, "A Sunny State With Lots of Beaches", 199);
  Room* california = new Room(roomName, roomDescription);

  strncpy(roomName, "Montana", 79);
  strncpy(roomDescription, "All You Can See is Trees and Mountains For Miles", 199);
  Room* montana = new Room(roomName, roomDescription);

  strncpy(roomName, "Idaho", 79);
  strncpy(roomDescription, "A Very Scenic State With Lots of Mountains", 199);
  Room* idaho = new Room(roomName, roomDescription);

  strncpy(roomName, "Nevada", 79);
  strncpy(roomDescription, "The Whole State Is A Desert, Wouldn't It Be Nice If There Were More Trees Here?", 199);
  Room* nevada = new Room(roomName, roomDescription);

  strncpy(roomName, "Wyoming", 79);
  strncpy(roomDescription, "This State Has Seven National Parks", 199);
  Room* wyoming = new Room(roomName, roomDescription);

  strncpy(roomName, "Utah", 79);
  strncpy(roomDescription,  "The Second Driest State in the United States, Wouldn't It Be Nice If It Rained Here?", 199);
  Room* utah = new Room(roomName, roomDescription);

  strncpy(roomName, "Arizona", 79);
  strncpy(roomDescription, "Avoid Speaking With The Locals, Also, Why Is It So Hot Here?", 199);
  Room* arizona = new Room(roomName, roomDescription);

  strncpy(roomName, "North Dakota", 79);
  strncpy(roomDescription,  "The Definition of Midwest, You're Pretty Much In Canada Right Now", 199);
  Room* northdakota = new Room(roomName, roomDescription);

  strncpy(roomName, "South Dakota", 79);
  strncpy(roomDescription, "Why Are There Two Dakotas? One is Enough", 199);
  Room* southdakota = new Room(roomName, roomDescription);

  strncpy(roomName, "Nebraska", 79);
  strncpy(roomDescription, "The State Of Funny Accents", 199);
  Room* nebraska = new Room(roomName, roomDescription);

  strncpy(roomName, "Colorado", 79);
  strncpy(roomDescription, "The Colorado Population Is Majority Tourists Who Enjoy Skiing", 199);
  Room* colorado = new Room(roomName, roomDescription);

  strncpy(roomName, "New Mexico", 79);
  strncpy(roomDescription, "Wait, This State Exists?", 199);
  Room* newmexico = new Room(roomName, roomDescription);

  strncpy(itemName, "Snow", 19);
  Item* snow = new Item(itemName);
  strncpy(itemName, "Rain Water", 19);
  Item* rainwater = new Item(itemName);
  strncpy(itemName, "Trees", 19);
  Item* trees = new Item(itemName);
  strncpy(itemName, "Ski Gear", 19);
  Item* skigear = new Item(itemName);
  strncpy(itemName, "A Funny Accent", 19);
  Item* accent = new Item(itemName);

  alaska->addItem(snow);
  washington->addItem(rainwater);
  oregon->addItem(trees);
  colorado->addItem(skigear);
  nebraska->addItem(accent);

  alaska->addNeighbor(south, washington);
  washington->addNeighbor(north, alaska);
  washington->addNeighbor(east, montana);
  washington->addNeighbor(south, oregon);
  oregon->addNeighbor(north, washington);
  oregon->addNeighbor(east, idaho);
  oregon->addNeighbor(south, california);
  california->addNeighbor(north, oregon);
  california->addNeighbor(east, nevada);
  montana->addNeighbor(east, wyoming);
  montana->addNeighbor(south, idaho);
  montana->addNeighbor(west, washington);
  idaho->addNeighbor(north, montana);
  idaho->addNeighbor(east, utah);
  idaho->addNeighbor(south, nevada);
  idaho->addNeighbor(west, oregon);
  nevada->addNeighbor(north, idaho);
  nevada->addNeighbor(east, arizona);
  nevada->addNeighbor(west, california);
  wyoming->addNeighbor(east, southdakota);
  wyoming->addNeighbor(south, utah);
  wyoming->addNeighbor(west, montana);
  utah->addNeighbor(north, wyoming);
  utah->addNeighbor(east, nebraska);
  utah->addNeighbor(south, arizona);
  utah->addNeighbor(west, idaho);
  arizona->addNeighbor(north, utah);
  arizona->addNeighbor(east, colorado);
  arizona->addNeighbor(west, nevada);
  northdakota->addNeighbor(south, southdakota);
  southdakota->addNeighbor(north, northdakota);
  southdakota->addNeighbor(south, nebraska);
  southdakota->addNeighbor(west, wyoming);
  nebraska->addNeighbor(north, southdakota);
  nebraska->addNeighbor(south, colorado);
  nebraska->addNeighbor(west, utah);
  colorado->addNeighbor(north, nebraska);
  colorado->addNeighbor(south, newmexico);
  colorado->addNeighbor(west, arizona);
  newmexico->addNeighbor(north, newmexico);

  Room* currentRoom = nevada;
  char input[10];

  bool gameWon = false;
  cout << "---------------------------------------------------------" << endl;
  cout << "Welcome to the Mid-West Coast Zuul! Your job is to make it rain in Arizona and to bring trees to Nevada!" << endl;
  while (gameWon == false) {
    cout << "You are in: " << currentRoom->getName() << endl;
    print(currentRoom, inventory);
    cout << "---------------------------------------------------------" << endl;
    cout << "What Would You Like To Do? (GO/PICK UP/DROP/INVENTORY/QUIT)" << endl;

    cin.get(input, 10);
    cin.get();
    if (input[0] == 'g' || input[0] == 'G') {
      goNextRoom(currentRoom);
    } 
    else if (input[0] == 'p' || input[0] == 'P') {
      pickUpItem(currentRoom, inventory);
    } 
    else if (input[0] == 'd' || input[0] == 'D') {
      dropItem(itemName, currentRoom, inventory);
    } 
    else if (input[0] == 'i' || input[0] == 'I') {
      printInventory(inventory);
    }
    else if (input[0] == 'q' || input[0] == 'Q') {
      cout << "Thank You For Playing!" << endl;
      break;
    }
    else {
      cout << "Invalid Input" << endl;
    }
  }
  return 0;
}

void print(Room* toPrint, vector<Item*> inventory) {
  char output[150];
  strcpy(output,(toPrint->getDescription()));
  cout << output << endl;
  toPrint->printItems();
  cout << "There are exits:" << endl;
  toPrint->printExits();
  cout << endl;
  cout << "Your inventory has:" << endl;
  printInventory(inventory);
  cout << endl;
  cout << endl;
}

void goNextRoom(Room* currentRoom) {
  char direction[10];
  char* north = new char[10];
  char* east = new char[10];
  char* south = new char[10];
  char* west = new char[10];
  strncpy(north, "north", 9);
  strncpy(east, "east", 9);
  strncpy(south, "south", 9);
  strncpy(west, "west", 9);

  cout << "Which Direction Would You Like To Go?" << endl;
  cin.get(direction, 10);
  cin.get();

  if (direction[0] == 'n' || direction[0] == 'N') {
    currentRoom = currentRoom->changeRoom(north);
  } 
  else if (direction[0] == 'e' || direction[0] == 'E') {
    currentRoom = currentRoom->changeRoom(east);
  } 
  else if (direction[0] == 's' || direction[0] == 'S') {
    currentRoom = currentRoom->changeRoom(south);
  } 
  else if (direction[0] == 'w' || direction[0] == 'W') {
    currentRoom = currentRoom->changeRoom(west);
  } 
  else {
    cout << "Invalid Input" << endl;
  }
}

void pickUpItem(Room* currentRoom, vector<Item*> inventory) {
  char itemName[10];
  cout << "Which item would you like to pick up?" << endl;
  cin.get(itemName, 9);
  cin.get();

  if (currentRoom->findItem(itemName) != '\0') {
    inventory.push_back(currentRoom->findItem(itemName));
    currentRoom->takeItem(itemName);
  } else {
    cout << "This itme is not in this room!" << endl;
  }
}

void dropItem(char* itemName, Room* currentRoom, vector<Item*> inventory) {
  vector<Item*>::iterator itr;

  for (itr = inventory.begin(); itr != inventory.end(); itr++) {
    char* item = (*itr)->getName();
    if (strcmp(itemName, item) == 0) {
      currentRoom->addItem(*itr);
      inventory.erase(itr);
      break;
    }
  }
}

void printInventory(vector<Item*> inventory) {
  vector<Item*>::iterator itr;

  for (itr = inventory.begin(); itr != inventory.end(); itr++) {
    cout << (*itr)->getName() << "  ";
  }
}