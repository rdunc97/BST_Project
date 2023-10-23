//
// Created by Ryan Duncan on 3/4/23.
//

#ifndef UNTITLED_BINARYST_H
#define UNTITLED_BINARYST_H
#include "Node.h"

class BinaryST {
public:
    //default constructor
    BinaryST();

    //REORGANIZED THESE TO FIT CPP FILE IT JUST HELPS ME AS IM WORKING ON IT
    //defined them all in BinaryST.cpp its just how im used to doing it

    void inorder() const;
    //print tree inorder traversal format

    void preorder() const;
    //print tree in preorder traversal format

    void postorder() const;
    //print tree in postorder traversal format.

    int findHeight();
    //calculates and returns the height of the tree

    int findMin() const;
    //find minimum value in tree and return it

    int findMax() const;
    //find maximum value in tree and return it

    void insert(int item);
    //insert new node with the value item if it is not in the tree



private:
    //PRIVATE RECURSIVE FUNCTIONS

    void inorder(const Node* sroot) const; //recursive function for inorder traversal
    void preorder(const Node* sroot) const; //recursive function for preorder traversal
    void postorder(const Node* sroot) const; //recursive function for postorder traversal
    int findHeight(const Node* sroot) const; //recursive function to calculate and return tree height
    int findMin(Node* sroot) const; //recursive function to find minimum and return
    int findMax(Node* sroot) const; //recursive function toi find max and return
    void insert(int item, Node*& node); //recursive function for insert
    //tree private members
    Node* root; //tree root node

};


#endif //UNTITLED_BINARYST_H
