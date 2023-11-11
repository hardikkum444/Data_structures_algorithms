//deletion in doubly linked lists
#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node*prev;
    node*next;
    
    node(int d)
    {
        this->data =d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertHead(node* &head,int d)
{
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertTail(node* &tail, int d)
{
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void print(node* head)
{
    node* temp = head;
    int len=0;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        len++;
        temp = temp->next;
    }
    cout<<endl;
    cout<<"and the length is: "<<len<<endl;
}

void insertPosition(node* head, int pos,int d)
{
    node* temp = head;
    int cnt =1;
    while(cnt<pos-1)
    {
        temp = temp->next;
        cnt++;
    }
    node* insert = new node(d);
    insert->next = temp->next;
    temp->next->prev = insert;
    temp->next = insert;
    
}

void del(node* &head, int pos)
{
    if(pos==1)
    {
        node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node* previous = NULL;
        node* current = head;
        int cnt =1;
        while(cnt<pos)
        {
            previous = current;
            current = current->next;
            cnt++;
        }
        previous->next = current->next;
        current->next->prev = previous;
        current->next = NULL;
        delete current;
    }
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
    
    insertPosition(head,5,5);
    
    del(head,5);
    
    print(head);
}










