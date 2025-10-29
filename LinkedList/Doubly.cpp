#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
   
};
int getLength(Node*head){
    int len=0;
    Node*temp=head;
     while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}


void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAthead(int val,Node*&head){
    //we have to inserrtathead and this is  adoubly linked list 
    Node*temp=new Node(val);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

int main() {
     Node * node1 =  new Node(10);
     Node*head=node1;
     print(head);
     cout<<getLength(head);
     insertAthead(20,head);
     insertAthead(20,head);
     print(head);

    return 0;
}