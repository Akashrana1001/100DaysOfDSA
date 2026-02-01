#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// ----------------- Utility Functions -----------------

// Print the circular linked list
void print(Node* head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)" << endl;
}

// Get length of circular linked list
int getLength(Node* head) {
    if (head == nullptr) return 0;
    int len = 0;
    Node* temp = head;
    do {
        len++;
        temp = temp->next;
    } while (temp != head);
    return len;
}

// ----------------- Insertion -----------------

// Insert at head
void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        newNode->next = newNode; // points to itself
        head = newNode;
        return;
    }

    // Traverse to the last node
    Node* tail = head;
    while (tail->next != head) {
        tail = tail->next;
    }

    newNode->next = head;
    tail->next = newNode;
    head = newNode;
}

// Insert at tail
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    Node* tail = head;
    while (tail->next != head) {
        tail = tail->next;
    }

    tail->next = newNode;
    newNode->next = head;
}

// Insert at specific position (1-based)
void insertAtPosition(Node*& head, int position, int val) {
    if (head == nullptr || position <= 1) {
        insertAtHead(head, val);
        return;
    }

    int len = getLength(head);
    if (position > len) {
        insertAtTail(head, val);
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp->next != head) {
        temp = temp->next;
        cnt++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// ----------------- Deletion -----------------

// Delete at head
void deleteAtHead(Node*& head) {
    if (head == nullptr) return;

    // Only one node
    if (head->next == head) {
        delete head;
        head = nullptr;
        return;
    }

    Node* tail = head;
    while (tail->next != head) {
        tail = tail->next;
    }

    Node* temp = head;
    tail->next = head->next;
    head = head->next;
    delete temp;
}

// Delete at tail
void deleteAtTail(Node*& head) {
    if (head == nullptr) return;

    // Only one node
    if (head->next == head) {
        delete head;
        head = nullptr;
        return;
    }

    Node* prev = nullptr;
    Node* temp = head;
    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;
    delete temp;
}

// Delete at position
void deleteAtPosition(Node*& head, int position) {
    if (head == nullptr) return;

    int len = getLength(head);
    if (position <= 1) {
        deleteAtHead(head);
        return;
    }
    if (position >= len) {
        deleteAtTail(head);
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;
    int cnt = 1;

    while (cnt < position && temp->next != head) {
        prev = temp;
        temp = temp->next;
        cnt++;
    }

    prev->next = temp->next;
    delete temp;
}

// ----------------- MAIN -----------------

int main() {
    Node* head = nullptr;

    // Insert nodes
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtPosition(head, 3, 99);

    cout << "Initial list:" << endl;
    print(head);

    cout << "\nDeleting head:" << endl;
    deleteAtHead(head);
    print(head);

    cout << "\nDeleting tail:" << endl;
    deleteAtTail(head);
    print(head);

    cout << "\nDeleting node at position 3:" << endl;
    deleteAtPosition(head, 3);
    print(head);

    cout << "\nLength of list: " << getLength(head) << endl;

    return 0;
}
