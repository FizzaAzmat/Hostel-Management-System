// BinaryTree.h

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
#include <string>

// Structure for a tree node
struct TreeNode {
    std::string roomNumber;
    double rent;
    TreeNode* left;
    TreeNode* right;

    TreeNode(std::string roomNumber, double rent) : roomNumber(roomNumber), rent(rent), left(nullptr), right(nullptr) {}
};

// Class for the binary tree
class BinaryTree {
private:
    TreeNode* root;

    // Helper functions
    void insertNode(TreeNode*& node, std::string roomNumber, double rent);
    TreeNode* searchNode(TreeNode* node, const std::string& roomNumber) const;
    void inOrder(TreeNode* node) const;

public:
    BinaryTree() : root(nullptr) {}
    void insert(std::string roomNumber, double rent);
    TreeNode* search(const std::string& roomNumber) const;
    void displayRooms() const;
};

#endif // BINARYTREE_H
