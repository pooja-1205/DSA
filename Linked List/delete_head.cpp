#include<iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor with both data and next node
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data (assuming next is initially null)
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to print the linked list
void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to remove the head of the linked list
Node* removeHead(Node* head) {
    if (head == NULL) {
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Function to create linked list from a vector
Node* createLinkedList(vector<int>& arr) {
    if (arr.empty()) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* current = head;
    
    for (int i = 1; i < arr.size(); i++) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    
    return head;
}

int main() {
    vector<int> arr = {12, 5, 6, 8};
    
    // Create the linked list from the vector
    Node* head = createLinkedList(arr);
    
    // Print original list
    cout << "Original list: ";
    printLL(head);
    
    // Remove head and print new list
    head = removeHead(head);
    
    cout << "List after removing head: ";
    printLL(head);

    return 0;
}

// Original list: 12 5 6 8 
// List after removing head: 5 6 8 