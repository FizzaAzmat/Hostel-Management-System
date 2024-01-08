#include "BinaryTree.h"
#include <iostream>

int main() {
    BinaryTree hostelRooms;
    std::string roomNumber;
    double rent;

    hostelRooms.insert("101", 3000);
    hostelRooms.insert("102", 3200);
    hostelRooms.insert("103", 3500);

    std::cout << "All Rooms:\n";
    hostelRooms.displayRooms();

    std::cout << "\nEnter room number to search: ";
    std::cin >> roomNumber;
    TreeNode* foundRoom = hostelRooms.search(roomNumber);

    if (foundRoom)
        std::cout << "Room found! Number: " << foundRoom->roomNumber << ", Rent: " << foundRoom->rent << std::endl;
    else
        std::cout << "Room not found." << std::endl;

    return 0;
}
