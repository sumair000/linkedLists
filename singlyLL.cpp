#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtHead(Node* &head, int data){

    // create a new node.
    Node* newnode = new Node(data);

    newnode->next = head;
    head = newnode;
}

void insertAtTail(Node* &tail,int data){

    // created a new node
    Node* newnode = new Node(data);
    
    tail->next = newnode;
    tail = newnode;
    
}

void print(Node* &head){

    Node* temp = head;

    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}


int main(){
    Node* node1 = new Node(5);

    Node* head = node1;
    Node* tail = node1;

    print(head);
    insertAtTail(tail,7);
    print(head);
    insertAtTail(tail,9);
    print(head);
    // cout<<node1->data;

}