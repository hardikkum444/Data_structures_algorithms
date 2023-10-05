//inserting in the element somewhere in the middle of a linked list


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


void middle(Node* &head,int position,int d)
{
    if(position==1)
    {
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }

    Node* nodeInsert = new Node(d);
    nodeInsert->next = temp->next;
    temp->next = nodeInsert;
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
    middle(head,2,100);
    middle(head,1,200);
    middle(head,6,400);
    print(head);

}