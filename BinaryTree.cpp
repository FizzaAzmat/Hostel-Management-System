// BinaryTree.cpp

#include "BinaryTree.h"

// Insert a node into the tree
void BinaryTree::insertNode(TreeNode*& node, std::string roomNumber, double rent) {
    if (!node)
        node = new TreeNode(roomNumber, rent);
    else if (roomNumber < node->roomNumber)
        insertNode(node->left, roomNumber, rent);
    else
        insertNode(node->right, roomNumber, rent);
}

void BinaryTree::insert(std::string roomNumber, double rent) {
    insertNode(root, roomNumber, rent);
}

// Search for a room in the tree
TreeNode* BinaryTree::searchNode(TreeNode* node, const std::string& roomNumber) const {
    if (!node || node->roomNumber == roomNumber)
        return node;
    if (roomNumber < node->roomNumber)
        return searchNode(node->left, roomNumber);
    else
        return searchNode(node->right, roomNumber);
}

TreeNode* BinaryTree::search(const std::string& roomNumber) const {
    return searchNode(root, roomNumber);
}

// In-order traversal for displaying rooms
void BinaryTree::inOrder(TreeNode* node) const {
    if (node) {
        inOrder(node->left);
        std::cout << "Room Number: " << node->roomNumber << ", Rent: " << node->rent << std::endl;
        inOrder(node->right);
    }
}

void BinaryTree::displayRooms() const {
    inOrder(root);
}
