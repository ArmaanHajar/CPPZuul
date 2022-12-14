#include <iostream>
#include <vector>
#include <cstring>

#include "Room.h"
#include "Item.h"

using namespace std;

int main() {

  vector<Room*> roomList;
  vector<Item*> inventory;

  char roomName[80];
  char roomDescription[200];
  char itemName[20];

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
  strncpy(roomDescription, "Nothing But Casinos and Deserts for Miles");
  Room* nevada = new Room(roomName, roomDescription);

  strncpy(roomName, "Wyoming");
  strncpy(roomDescription, "This State Has Seven National Parks");
  Room* wyoming = new Room(roomName, roomDescription);

  strncpy(roomName, "Utah");
  strncpy(roomDescription, "The Second Driest State in the United States");
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

  strncpy
}
