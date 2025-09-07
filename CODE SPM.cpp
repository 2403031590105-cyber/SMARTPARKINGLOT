#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Slot {
    bool occupied;
    string vehicleNumber;
};

int main() {
    const int totalSlots = 10;
    vector<Slot> parkingLot(totalSlots, {false, ""});

    while (true) {
        cout << "\nSmart Parking Lot Management\n";
        cout << "1. Park Vehicle\n2. Remove Vehicle\n3. View Parking Status\n4. View Available Slots\n5. Exit\nChoose: ";
        int choice;
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            int slot = -1;
            for (int i = 0; i < totalSlots; ++i) {
                if (!parkingLot[i].occupied) {
                    slot = i;
                    break;
                }
            }
            if (slot == -1) {
                cout << "Parking Lot Full!\n";
            } else {
                cout << "Enter vehicle number: ";
                getline(cin, parkingLot[slot].vehicleNumber);
                parkingLot[slot].occupied = true;
                cout << "Vehicle parked at slot " << slot + 1 << ".\n";
            }
        } else if (choice == 2) {
            cout << "Enter slot number to remove vehicle: ";
            int slot;
            cin >> slot;
            cin.ignore();
            if (slot < 1 || slot > totalSlots || !parkingLot[slot - 1].occupied) {
                cout << "Invalid slot or slot already empty.\n";
            } else {
                cout << "Vehicle " << parkingLot[slot - 1].vehicleNumber << " removed from slot " << slot << ".\n";
                parkingLot[slot - 1].occupied = false;
                parkingLot[slot - 1].vehicleNumber = "";
            }
        } else if (choice == 3) {
            cout << "\nParking Status:\n";
            cout << left << setw(10) << "Slot" << setw(15) << "Status" << setw(20) << "Vehicle Number" << endl;
            for (int i = 0; i < totalSlots; ++i) {
                cout << left << setw(10) << (i + 1)
                     << setw(15) << (parkingLot[i].occupied ? "Occupied" : "Available")
                     << setw(20) << (parkingLot[i].occupied ? parkingLot[i].vehicleNumber : "-") << endl;
            }
        } else if (choice == 4) {
            int available = 0;
            for (const auto& slot : parkingLot) {
                if (!slot.occupied) available++;
            }
            cout << "Available Slots: " << available << " out of " << totalSlots << endl;
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }
    return 0;
}