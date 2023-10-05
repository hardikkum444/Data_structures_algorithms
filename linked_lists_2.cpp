//basic concepts of linked lists


#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int info)
    {
        this->data=info;
        this->next=next;
    }

};

void insertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next=temp;
    tail=tail->next;
}

int main()
{

    Node* node_1 = new Node(4);

    Node* head = node_1;
    Node* tail = node_1;

    insertAtHead(head,12);
    insertAtTail(tail,11);
    print(head);

}


//temp->next will point to a node 
//temp->data will point to a data
//node=temp->next