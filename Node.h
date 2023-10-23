//
// Created by Ryan Duncan on 3/5/23.
// Node class with constructors

#ifndef UNTITLED_NODE_H
#define UNTITLED_NODE_H


//LEAVING THIS ONE AS IS WITH DEFINITIONS IN H FILE

class Node {
public:
    int element; //value of the node
    Node* left; //left node pointer
    Node* right; //right node pointer

    Node() //default constructor
    {
        element = NULL;
        left=right=nullptr;
    }
    Node(int e, Node* lt, Node* rt) //Constructor that takes left and right nodes
    {
        element = e;
        left = lt;
        right = rt;
    }
};



#endif //UNTITLED_NODE_H
