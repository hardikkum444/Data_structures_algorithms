#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(node* &head,int d)
{
    node* temp = new node(d);
    temp ->next =head;
    head = temp;
}

int main()
{
    node* node1 = new node(45);

    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;

    return 0;
}