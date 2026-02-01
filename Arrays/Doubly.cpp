#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

// ----------------- Utility Functions -----------------
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != nullptr) {
        len++;
        temp = temp->next;
    }
    return len;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// ----------------- Insertion -----------------
void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPosition(Node*& head, int position, int val) {
    if (position <= 1) {
        insertAtHead(head, val);
        return;
    }

    int len = getLength(head);
    if (position > len) {
        insertAtTail(head, val);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp != nullptr) {
        temp = temp->next;
        cnt++;
    }

    Node* nodeToInsert = new Node(val);
    nodeToInsert->next = temp->next;
    if (temp->next != nullptr)
        temp->next->prev = nodeToInsert;

    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

// ----------------- Deletion -----------------

void deleteAtHead(Node*& head) {
    if (head == nullptr) return;  // empty list

    Node* temp = head;
    head = head->next;
    if (head != nullptr)
        head->prev = nullptr;

    delete temp;
}

void deleteAtTail(Node*& head) {
    if (head == nullptr) return;  // empty list

    if (head->next == nullptr) {  // only one node
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->prev->next = nullptr;
    delete temp;
}

void deleteAtPosition(Node*& head, int position) {
    if (head == nullptr) return; // empty list

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
    int cnt = 1;
    while (cnt < position && temp != nullptr) {
        temp = temp->next;
        cnt++;
    }

    // unlink temp
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

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

    // Delete operations
    cout << "\nDeleting head:" << endl;
    deleteAtHead(head);
    print(head);

    cout << "\nDeleting tail:" << endl;
    deleteAtTail(head);
    print(head);

    cout << "\nDeleting node at position 3:" << endl;
    deleteAtPosition(head, 3);
    print(head);

    cout << "\nFinal length: " << getLength(head) << endl;

    return 0;
}
