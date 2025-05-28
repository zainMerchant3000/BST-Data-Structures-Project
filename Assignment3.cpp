//Zain-Abbas Merchant
//5/16/22
//CPSC 2430
// Assignment3.cpp 

#include <iostream>
#include "BST.h"
using namespace std;
//method prototypes
void menuDisplay();
//int menuChoice(int, BST& t);
int main()
{

     
    BST t;//create object
    bool done = false;//set bool variable to false
    int choice;//create variable to keep track of users choice (as an integer)
    while (!done) {//keep going until true (user enters 0)
        menuDisplay();//1 display menu first
        cout << "Please select an operation to test: ";//2)prompt user
        cin >> choice;//3) store user choice
        if (choice == 0) {//if user enters 0 (wants to quit)
            done = true;//set done to true (exit while loop and thus exit program)
        }//if
        else {//otherwise keep going 
            switch (choice) {
                int value;
            case 1:
                //insert value
                cout << "type in number to insert: ";
                cin >> value;
                t.insertNode(value);
                break;
            case 2:
                //search for value

                cout << "type in number you want to search for: ";
                cin >> value;
                t.searchBST(value);
                break;
            case 3:
                //predecessor
                cout << "type in number you want to find predecessor of: ";
                cin >> value;
                t.predecessorBst(value);
                break;
            case 4:
                //successor
                cout << "type in number you want to find successor of: ";
                cin >> value;
                t.successorBST(value);
                break;
            case 5:
                //height of tree
                t.heightBst();
                break;
            case 6:
                //# of nodes in tree
                t.nodesInBst();
                break;
            case 7:
                //delete node
                cout << "type in number you want to delete (value to be deleted must exist in tree): ";
                cin >> value;
                t.deleteBst(value);
                break;
            case 8:
                //traverse inorder display
                cout << endl << "inorder display: " << endl;
                t.inorderDisplay();
                break;
            case 9:
                //preorder
                cout << endl << "preorder display: " << endl;
                t.preorderDisplay();
                break;
            case 10:
                //postorder
                cout << endl << "postorder display: " << endl;
                t.postorderDisplay();
                break;
            case 11:
                //balance tree
                t.balancedBst();
                break;
            case 12:
                //destroy tree
                cout << endl << "destroying tree: " << endl;
                t.destroyBst();
                break;
            }//switch

        }//else

    }//while

   


}//main

void menuDisplay() {
    cout << endl << "1. Insert a node" << endl
        << "2. Search for a value" << endl
        << "3. Find predecessor for an existing value" << endl
        << "4. Find successor for an existing value" << endl
        << "5. Find height of tree" << endl
        << "6. Find total number of nodes in tree" << endl
        << "7. Delete a node" << endl
        << "8. Traverse inorder and display" << endl
        << "9. Traverse preorder and display" << endl
        << "10. Traverse postorder and display" << endl
        << "11. Check if tree is balanced" << endl
        << "12. Destroy tree" << endl
        << "0. Quit" << endl << endl;

}//menuDisplay
/*
int menuChoice(int choiceVal, BST& t ) {
    switch (choiceVal) {
        int value;
    case 1:
        //insert value
         
        cout << "type in number to insert: " << endl;
        cin >> value;
        t.insertNode(value);
        break;
    case 2:
        //search for value
       
        cout << "type in number you want to search for: " << endl;
        cin >> value;
        t.searchBST(value);
        break;
    case 3:
        //predecessor
        cout << "type in number you want to find predecessor of: " << endl;
        cin >> value;
        t.predecessorBst(value);
        break;
    case 4:
        //successor
        cout << "type in number you want to find successor of: " << endl;
        cin >> value;
        t.successorBST(value);
        break;
    case 5:
        //height of tree
        t.heightBst();
        break;
    case 6:
        //# of nodes in tree
        t.nodesInBst();
        break;
    case 7:
        //delete node
        cout << "type in number you want to delete (value to be deleted must exist in tree): " << endl;
        cin >> value;
        t.deleteBst(value);
        break;
    case 8:
        //traverse inorder display
        cout << endl << "inorder display: " << endl;
        t.inorderDisplay();
        break;
    case 9:
        //preorder
        cout << endl << "preorder display: " << endl;
        t.preorderDisplay();
        break;
    case 10:
        //postorder
        cout << endl << "postorder display: " << endl;
        t.postorderDisplay();
        break;
    case 11:
        //balance tree
        t.balancedBst();
        break;
    case 12:
        //destroy tree
        cout << endl << "destroying tree: " << endl;
        t.destroyBst();
        break;
    case 0:
        //quit program
        cout << endl << "quitting program" << endl;
        break;
}//switch





}//menuChoice
*/



