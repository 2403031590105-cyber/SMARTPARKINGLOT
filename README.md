# SMARTPARKINGLOT
This project is a simple Smart Parking Lot Management System implemented in C++. It allows users to efficiently manage parking slots, park and remove vehicles, view the current parking status, and check available slots through a menu-driven interface.

# Smart Parking Lot Management

This project is a simple Smart Parking Lot Management System implemented in C++. It allows users to efficiently manage parking slots, park and remove vehicles, view the current parking status, and check available slots through a menu-driven interface.

## Features

- **Park Vehicle:** Assigns the first available slot to a vehicle and records its number.
- **Remove Vehicle:** Frees up a slot by removing the parked vehicle.
- **View Parking Status:** Displays the status of all slots, showing which are occupied and the vehicle numbers.
- **View Available Slots:** Shows the number of free slots remaining.
- **Exit:** Quits the application.

## Project Structure

```
smart-parking-lot
├── CODE SPM.cpp        # Source code (main.cpp)
├── MAKE SPL.txt        # Build rules for compiling the project (Makefile)
└── README.md           # Documentation for the project
```

## Building the Project

To build the project, navigate to the project directory and run the following command:

```
make -f "MAKE SPL.txt"
```

Or, compile manually:

```
g++ CODE\ SPM.cpp -o smart-parking-lot.exe
```

## Running the Application

After building the project, you can run the application using the following command:

```
smart-parking-lot.exe
```

## Sample Output

```
Smart Parking Lot Management
1. Park Vehicle
2. Remove Vehicle
3. View Parking Status
4. View Available Slots
5. Exit
Choose: 1
Enter vehicle number: RJ14AB1234
Vehicle parked at slot 1.

Choose: 1
Enter vehicle number: RJ14CD5678
Vehicle parked at slot 2.

Choose: 3

Parking Status:
Slot      Status         Vehicle Number
1         Occupied       RJ14AB1234
2         Occupied       RJ14CD5678
3         Available      -
...       ...            ...

Choose: 4
Available Slots: 8 out of 10

Choose: 2
Enter slot number to remove vehicle: 1
Vehicle RJ14AB1234 removed from slot 1.

Choose: 5
```

## License

This project is open-source and available for
