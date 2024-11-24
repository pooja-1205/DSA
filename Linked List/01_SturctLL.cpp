#include <iostream>
#include <vector>
using namespace std;

class Node {
public: // Access modifier (corrected from `Public`)
    int data;   // The data value
    Node* next; // Pointer to the next node

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
    Node* y = new Node(arr[0]);

    

    // Print the address of the node
    cout << "Node memory address: " << y << '\n';

    // Print the data stored in the node
    cout << "Node data: " << y->data << '\n';

    // Clean up memory
    delete y;

    return 0;
}
