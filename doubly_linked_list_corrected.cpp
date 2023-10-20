#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;
    
    node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
    
    ~node()
    {
        int value = this->data;
        if(next!= NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"memory for node with data "<<value<<" has been freed"<<endl;
    }
};

void insertAtHead(node* &head,node* &tail,int d)
{
    if(head==NULL)
    {
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}

void insertAtTail(node* &tail,node* &head,int d)
{
    if(tail == NULL) {
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }
    else{
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;}
}

void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void getLen(node* head)
{
    node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    cout<<"lenght of data set is: "<<count<<endl;
}

void insertAtPos(node* &head, node* &tail, int pos, int d)
{
    if(pos == 1)
    {
        insertAtHead(head, tail,d);
        return;
    }
    node* temp = head;
    int count = 1;
    while(count<pos-1)
    {
        temp = temp->next;
        count++;
    }
    //inserting at the last
    if(temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }
    node* insert = new node(d);
    insert->next = temp->next;
    temp->next->prev = insert;
    temp->next = insert;
    insert->prev = temp;
}

void del(int pos,node* &head)
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
        //deleting the middle or last node
        node* curr= head;
        node* previ= NULL;
        int cnt = 1;
        while(cnt<pos)
        {
            previ=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev = NULL;
        previ->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
        
        


int main()
{
    node* node1 = new node(4);
    node* head = node1;
    node* tail = node1;
    
    insertAtHead(head,tail,3);
    insertAtTail(tail,head,5);
    display(head);
    getLen(head);
    
    insertAtPos(head,tail,2,2);
    display(head);
    
    del(2,head);
    display(head);
}









