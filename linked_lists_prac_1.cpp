//basic revision of linked lists 

#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertHead(node* &head,int d)
{
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertTail(node* &tail,int d)
{
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void print(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertMiddle(node* head, int pos, int d)
{
    node* temp = head;
    int cnt =1;
    while(cnt < pos-1)
    {
        temp = temp->next;
        cnt+=1;
    }
    node* insert = new node(d);
    insert->next = temp->next;
    temp->next = insert;
}

int main()
{
    node* node1 = new node(2);
    node* head = node1;
    node* tail = node1;
    
    insertHead(head,1);
    insertTail(tail,3);
    insertTail(tail,4);
    insertTail(tail,6);
    
    insertMiddle(head,5,5);
    
    print(head);
}















