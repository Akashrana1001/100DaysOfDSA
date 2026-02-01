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

// ---------------- INSERTION ----------------

void insertAtHead(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(Node*& head, int data, int pos) {
    if (pos <= 1) {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < pos - 1 && temp != nullptr) {
        temp = temp->next;
        cnt++;
    }

    // If position is beyond the current list length, insert at tail
    if (temp == nullptr) {
        insertAtTail(head, data);
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// ---------------- DELETION ----------------

void deleteAtHead(Node*& head) {
    if (head == nullptr) return;

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtTail(Node*& head) {
    if (head == nullptr) return;

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

void deleteAtPosition(Node*& head, int pos) {
    if (head == nullptr) return;
    if (pos == 1) {
        deleteAtHead(head);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < pos - 1 && temp->next != nullptr) {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == nullptr) return; // position out of bounds

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

// ---------------- PRINT ----------------

void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// ---------------- MAIN ----------------

int main() {
    Node* head = nullptr;

    insertAtHead(head, 60);
    insertAtTail(head, 50);
    insertAtTail(head, 70);
    print(head);

    cout << "After inserting 65 at position 3:" << endl;
    insertAtPosition(head, 65, 3);
    print(head);

    cout << "After deleting head:" << endl;
    deleteAtHead(head);
    print(head);

    cout << "After deleting tail:" << endl;
    deleteAtTail(head);
    print(head);

    cout << "After deleting node at position 2:" << endl;
    deleteAtPosition(head, 2);
    print(head);

    return 0;
}
