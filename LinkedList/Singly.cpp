#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //now we will make a constructor
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
    //now we will have to make a functoin to take the insertionathead
   
};
 void insertAtHead(int data,Node* &head){
        Node* newNode = new Node(data);
        newNode->next=head;
        head=newNode;
    }

    void print(Node * &head){
        //abhi hume tb tk print karana hai jab tk head null pe na aajaye 
        Node* temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl<<"LinkedList Complete";

    }
    
    void insertAtTail(Node*&tail,int data){
        Node * newNode= new Node(data);
        tail->next=newNode;
        tail=newNode;
    }
    
    void insertAtPosition(Node*head,Node*tail,int position,int data){
        Node*temp = head;
        int cnt=1;
        if(position==1){
            insertAtHead(data,head);
            return;
        }
        while(cnt<position-1){
            temp=temp->next;
            cnt++;
        }
        if(temp->next==NULL){
            insertAtTail(tail,data);
            return;
        }
        Node* newNode  = new Node(data);
        newNode->next=temp->next;
        temp->next=newNode;
    }
int main() {
     //sabse phle node ka ek instance create karenge 
      // Create the first node
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    // Insert 12 at the head
    insertAtHead(12, head);
    print(head);
    cout << endl;

    // Insert 15 at the head
    insertAtHead(15, head);
    print(head);
    cout << endl;

    // Insert 12 at the tail
    insertAtTail(tail, 12);
    print(head);
    cout << endl;

    // Insert 28 at the tail
    insertAtTail(tail, 28);
    print(head);
    cout << endl;

    // Insert 25 at position 3
    insertAtPosition(head, tail, 3, 25);
    print(head);
    cout << endl;

    // Insert 40 at position 6 (tail position)
    insertAtPosition(head, tail, 6, 40);
    print(head);
    cout << endl;

    return 0;
}