#include <iostream>
using namespace std;

int main() {
  int floors;
  int rooms;
  int occupied;
  int total_rooms = 0;
  int total_occupied = 0;

  //Input validation for number of floors
  do {
    cout << "How many floors does the hotel have?: ";
    cin >> floors;
    if (floors < 1) {
      cout << "Invalid input. Please enter a number greater than or equal to 1. \n";
    }
  }
  while (floors < 1);

  // Looping through each floor
  for (int floor = 1; floor <= floors; ++floor) {
    // Input validation for number of rooms on the floor
    do {
      cout << "Enter the number of rooms on floor " << floor << ": ";
      cin >> rooms;
      if (rooms < 10) {
        cout << "Invalid input. Please enter a number of rooms greater than or equal to 10." << endl;
      }
    } while (rooms < 10);

    // Input validation for number of occupied rooms
    do {
      cout << "Enter the number of occupied rooms on floor " << floor << ": ";
      cin >> occupied;
      if (occupied > rooms) {
        cout << "Invalid input. The number of occupied rooms cannot exceed the number of rooms on the floor." << endl;
      }
    } while (occupied > rooms);

    // Update total rooms and occupied rooms
    total_rooms += rooms;
    total_occupied += occupied;
  }

  // Calculating occupancy rate
  int unoccupied_rooms = total_rooms - total_occupied;
  int occupancy_rate = (total_occupied * 100) / total_rooms;
  
  //Dispaying total number of rooms, occupied rooms, unoccupied rooms, and occupancy rate
  cout << "Total number of rooms in the hotel: " << total_rooms << endl;
  cout << "Number of occupied rooms in the hotel: " << total_occupied << endl;
  cout << "Number of unoccupied rooms in the hotel: " << unoccupied_rooms << endl;
  cout << "Occupancy rate: " << occupancy_rate << "%" << endl;

  return 0;
}