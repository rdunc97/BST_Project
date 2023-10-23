//
//  main.cpp
//  Binary Search Tree
//  Main function to initialize variables, have user input ints in a list, convert that list to BST
//  and contains menu for various functions which are defined in CPP file
// Ryan Duncan - Created March 5, 2023

#include <iostream>
#include <list>
using namespace std;
//#include "Node.h"
#include "BinaryST.h"

int main() {
    int menu;               //initialize menu variable for me switch loop
    list<int> items = {}; //initialize empty list which will convert to a binary tree later
    int item;             //initialize each individual item which user will input

    //while loop to add elements to our future binary tree. -1 breaks the loop.
    while (true) {
        cout << "enter an integer to put into the binary tree. -1 to finish: \n";
        cin >> item;
        if (item == -1) {
            break;
        } else {
            items.push_back(item);
        }
    }

    //Create the tree object so the list items can be added to it
    BinaryST myTree;


    //turn the list into a binary tree using the insert function defined in BinarySt.cpp
    for(int i : items) {
            myTree.insert(i);
        }


    //user options menu that executes functions based on choice of number
    while(true)
    {
        cout << "Please enter a choice 1 - 8..." << endl;
        cout << "1:Find minimum value of Binary Search Tree" << endl;
        cout << "2:Find maximum value of Binary Search Tree" << endl;
        cout << "3:Insert new value in the tree" << endl;
        cout << "4:Display the tree in Preorder" << endl;
        cout << "5:Display tree in Postorder" << endl;
        cout << "6:Display tree in Inorder" << endl;
        cout << "7:Find Tree Height" << endl;
        cout << "8:exit" << endl;
        cin >> menu;
        if(menu == 8)
            break;
        switch(menu)
        {
            case 1:
                int resultMin;
                resultMin = myTree.findMin();
                cout<< "minimum value is :" << resultMin << endl;
                break;
            case 2:
                int resultMax;
                resultMax = myTree.findMax();
                cout << "maximum value is: " << resultMax << endl;
                break;
            case 3:
                //if user wants to input value.
                // prompt them and have an input. call insert func with value as parameter
                int value;
                cout<<"input value to insert into tree: ";
                cin>>value;
                myTree.insert(value);
                break;
            case 4:
                myTree.preorder();
                break;
            case 5:
                myTree.postorder();
                break;
            case 6:
                myTree.inorder();
                break;
            case 7:
                int resultHeight;
                resultHeight = myTree.findHeight();
                cout << "the height of this binary search tree is: " << resultHeight << endl;
                break;
            default:
                cout << "Please enter a valid choice" << endl;
        }

    }
    return 0;
}