#include <iostream>
#include <vector>
#include <cstring>

#include "Room.h"
#include "Item.h"

using namespace std;

int main() {
  vector<Item*> inventory;

  char roomName[80];
  char roomDescription[200];
  char itemName[20];
  
  char* north = new char[10];
  char* east = new char[10];
  char* south = new char[10];
  char* west = new char[10];
  strncpy(north. "north");
  strncpy(east, "east");
  strncpy(south, "south");
  strncpy(west, "west");
  
  strncpy(roomName, "Alaska");
  strncpy(roomDescription, "A Very Cold State");
  Room* alaska = new Room(roomName, roomDescription);

  strncpy(roomName, "Washington");
  strncpy(roomDescription, "A Very Rainy State With a Terrible Football Team");
  Room* washington = new Room(roomName, roomDescription);

  strncpy(roomName, "Oregon");
  strncpy(roomDescription, "A Very Rainy State With Lots of Trees");
  Room* oregon = new Room(roomName, roomDescription);

  strncpy(roomName, "California");
  strncpy(roomDescription, "A Sunny State With Lots of Beaches");
  Room* california = new Room(roomName, roomDescription);

  strncpy(roomName, "Montana");
  strncpy(roomDescription, "All You Can See is Trees and Mountains For Miles");
  Room* montana = new Room(roomName, roomDescription);

  strncpy(roomName, "Idaho");
  strncpy(roomDescription, "A Very Scenic State With Lots of Mountains");
  Room* idaho = new Room(roomName, roomDescription);

  strncpy(roomName, "Nevada");
  strncpy(roomDescription, "The Whole State Is A Desert, Wouldn't It Be Nice If There Were More Trees Here?");
  Room* nevada = new Room(roomName, roomDescription);

  strncpy(roomName, "Wyoming");
  strncpy(roomDescription, "This State Has Seven National Parks");
  Room* wyoming = new Room(roomName, roomDescription);

  strncpy(roomName, "Utah");
  strncpy(roomDescription, "The Second Driest State in the United States, Wouldn't It Be Nice If It Rained Here?");
  Room* utah = new Room(roomName, roomDescription);

  strncpy(roomName, "Arizona");
  strncpy(roomDescription, "Avoid Speaking With The Locals, Also, Why Is It So Hot Here?");
  Room* arizona = new Room(roomName, roomDescription);

  strncpy(roomName, "North Dakota");
  strncpy(roomDescription, "The Definition of Midwest, You're Pretty Much In Canada Right Now");
  Room* northdakota = new Room(roomName, roomDescription);

  strncpy(roomName, "South Dakota");
  strncpy(roomDescription, "Why Are There Two Dakotas? One is Enough");
  Room* southdakota = new Room(roomName, roomDescription);

  strncpy(roomName, "Nebraska");
  strncpy(roomDescription, "The State Of Funny Accents");
  Room* nebraska = new Room(roomName, roomDescription);
  
  strncpy(roomName, "Colorado");
  strncpy(roomDescription, "The Colorado Population Is Majority Tourists Who Enjoy Skiing");
  Room* colorado = new Room(roomName, roomDescription);
  
  strncpy(roomName, "New Mexico");
  strncpy(roomDescription, "Wait, This State Exists?");
  Room* newmexico = new Room(roomName, roomDescription);
  
  Item* snow = new Item("Snow");
  Item* rainwater = new Item("Rain Water");
  Item* trees = new Item("Trees");
  Item* skigear = new Item("Ski Gear");
  Item* accent = new Item("A Funny Accent");
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

  bool gameWon = false;

  while (gameWon == false) {

  }
}
