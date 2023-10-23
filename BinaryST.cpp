//
// Created by Ryan Duncan on 3/4/23.
// Definitions for BinaryST constructor and methods. the public and private functions are paired together here
#include <iostream>
using namespace std;
#include "BinaryST.h"

//constructor definition
BinaryST::BinaryST() {
    root = nullptr;
}

//I am defining functions all in cpp because it's how I'm used to doing things, and it helps me.

void BinaryST::inorder() const {
    inorder(root);
}
void BinaryST::inorder(const Node *sroot) const {
    //private recursive function for inorder
    if (sroot != nullptr){
        //recursively call inorder function passing in left node
        inorder(sroot->left);
        //display the element
        cout<<sroot->element<<" ";
        //recursively pass inorder function passing in right node
        inorder(sroot->right);
    }
}


void BinaryST::preorder() const {
    preorder(root);
}
void BinaryST::preorder(const Node *sroot) const {
    //private recursive function for preorder
    if (sroot != nullptr){
        //if root is not null display element
        cout<<sroot->element<<" ";
        //recursively call preorder passing in node left of root
        preorder(sroot->left);
        //recursively call preorder passing in node right of root
        preorder(sroot->right);
    }
}


void BinaryST::postorder() const {
    postorder(root);
}
void BinaryST::postorder(const Node *sroot) const {
    //private recursive function for postorder

    //if tree empty output root element
    if (sroot != nullptr) {
        //recursive call for left and then right
        postorder(sroot->left);
        postorder(sroot->right);

        //print the elements
        cout<<sroot->element<<" ";
    }
}


int BinaryST::findHeight() {
    return findHeight(root);
}
int BinaryST::findHeight(const Node *sroot) const {
    //private recursive function to find height
    if (sroot == nullptr) {
        //check if tree is empty
        return -1;
    } else {
        //recursively call find height on right and left, finding max out of the two
        return 1 + max(findHeight(sroot->left), findHeight(sroot->right));
    }
}


int BinaryST::findMin() const {
    return findMin(root);
}
int BinaryST::findMin(Node *sroot) const {
    //private recursive function to find minimum

    //if root is null, list empty
    if(sroot == nullptr)
        return 0;
    //if root not pointing to anything on left, root is the smallest. return that element
    if(sroot->left == nullptr)
        return sroot->element;
    //if root is not null and above condition is not satisfied, keep recursively calling
    //find min function to eventually get to base case above
    return findMin(sroot->left);
}



int BinaryST::findMax() const {
    return findMax(root);
}
int BinaryST::findMax(Node* sroot) const {
//private recursive function to find max

//if nothing there return 0
if(sroot == nullptr)
    return 0;
//if root not pointing to any node on right, root is the max, so return that element
if(sroot->right == nullptr)
    return sroot->element;
//if above conditions not met, recursively call findMax to keep checking right side
//until base case fulfilled
return findMax(sroot->right);
}



void BinaryST::insert(int item) {
    return insert(item, root);
}
void BinaryST::insert(int item, Node*& rtnode) {
    //rtnode is just root node
    //check if root is null on left and right
    if (rtnode == nullptr) {
        //if so then set passed root node equal to a new node using the item passed
        rtnode = new Node(item, nullptr, nullptr);
        return;
    } else if (item < rtnode->element) {
        //if root not null, check if passed item is less than root element
        //recursively call insert function using next left node as root
        insert(item, rtnode->left);
    } else if (rtnode->element < item) {
        insert(item, rtnode->right);
    }
}