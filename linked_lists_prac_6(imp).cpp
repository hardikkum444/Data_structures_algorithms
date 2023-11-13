//linked lists (singly) new and improved along with linked list reversal 

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

void insertHead(node* &head, int d)
{
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertTail(node* &tail, int d)
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
        cout<<temp->data;
        if(temp->next!=NULL){cout<<" -> ";}
        temp = temp->next;
    }
    cout<<endl;
}

void insertMiddle(node* head,int pos, int d)
{
    node* temp = head;
    int cnt = 1;
    while (cnt<pos-1)
    {
        temp = temp->next;
        cnt++;
    }
    node* ins = new node(d);
    ins->next = temp->next;
    temp->next = ins;
}

void del(node* head, int pos)
{
    if(pos == 1)
    {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node* curr = head;
        node* prev = NULL;
        int cnt =1;
        while(cnt<pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        
    }
}

node* reverse(node* &head)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    
    while(currptr!=NULL)
    {
        nextptr = currptr->next;
        
        currptr->next = prevptr;
        
        prevptr = currptr;
        currptr = nextptr;
    }
    
    head = prevptr;  // Update the head to point to the new first node (previously the last node)
    return head;
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
    
    print(head);
    
    insertMiddle(head,5,5);
    
    print(head);
    
    del(head, 5);
    
    print(head);
    
    reverse(head);
    
    print(head);
    
}
















