#include <iostream>
using namespace std;

int main() {
  int num_floors, num_rooms_on_floor, num_occupied_rooms;
  int total_rooms = 0, total_occupied_rooms = 0;

  // Input validation for number of floors
  do {
    cout << "Enter the number of floors in the hotel: ";
    cin >> num_floors;
    if (num_floors < 1) {
      cout << "Invalid input. Please enter a number of floors greater than or equal to 1.\n";
    }
  } while (num_floors < 1);

  // Loop through each floor
  for (int floor = 1; floor <= num_floors; ++floor) {
    // Input validation for number of rooms on the floor
    do {
      cout << "Enter the number of rooms on floor " << floor << ": ";
      cin >> num_rooms_on_floor;
      if (num_rooms_on_floor < 10) {
        cout << "Invalid input. Please enter a number of rooms greater than or equal to 10.\n";
      }
    } while (num_rooms_on_floor < 10);

    // Input validation for number of occupied rooms
    do {
      cout << "Enter the number of occupied rooms on floor " << floor << ": ";
      cin >> num_occupied_rooms;
      if (num_occupied_rooms > num_rooms_on_floor) {
        cout << "Invalid input. The number of occupied rooms cannot exceed the number of rooms on the floor.\n";
      }
    } while (num_occupied_rooms > num_rooms_on_floor);

    // Update total rooms and occupied rooms
    total_rooms += num_rooms_on_floor;
    total_occupied_rooms += num_occupied_rooms;
  }

  // Calculate and display occupancy rate
  int num_unoccupied_rooms = total_rooms - total_occupied_rooms;
  int occupancy_rate = (total_occupied_rooms * 100) / total_rooms;
  
  cout << "\nTotal number of rooms in the hotel: " << total_rooms << endl;
  cout << "Number of occupied rooms in the hotel: " << total_occupied_rooms << endl;
  cout << "Number of unoccupied rooms in the hotel: " << num_unoccupied_rooms << endl;
  cout << "Occupancy rate: " << occupancy_rate << "%" << endl;

  return 0;
}