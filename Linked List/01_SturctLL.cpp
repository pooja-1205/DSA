// This code demonstrates the creation of a basic singly linked list node in C++ and the use of dynamic memory allocation.

#include <iostream>
#include <vector>
using namespace std;

class Node {
public: // Access modifier (corrected from `Public`)
    int data;   // Stores the data in the node
    Node* next; // Pointer to the next node in the linked list

    // Constructor with two arguments
    Node(int data1, Node* next1) {
        data = data1;   // Initialize data with the provided value
        next = next1;   // Initialize next with the provided value
    }

    // Constructor with one argument
    Node(int data1) {
        data = data1;   // Initialize data with the provided value
        next = nullptr; // Initialize next as null since it's the end of the list
    }
};

int main() {
    vector<int> arr = {2, 5, 8, 7}; // Example array of integers

    // Create a Node using the first element of the array
    Node* y = new Node(arr[2]);

    

    // Print the address of the node
    cout << "Node memory address: " << y << '\n';

    // Print the data stored in the node
    cout << "Node data: " << y->data << '\n';

    // Clean up memory
    delete y;

    return 0;
}


/*Output 
Node memory address: 0x27a697d1450
Node data: 8*/
