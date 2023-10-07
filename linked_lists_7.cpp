#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* previous;

    
    //constructor
    Node (int data)
    {
        this->data = data;
        this->next = NULL;
        this->previous = NULL;
    }


    //destructor
    ~Node()
    {
        int value = this->data;
        
        //freeing the memory
        if(this->next!=NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for data " <<value<<endl;
    }
};

void insertionAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head->previous = temp;
    head = temp;
}

void inserionAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->previous = tail;
    tail = temp;
}

void insertionInMiddle(Node* &head, int position, int d)
{
    Node* temp = head;
    Node* insert = new Node(d);
    int cnt = 1;

    while(cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }
    insert->next = temp->next;
    temp ->next->previous = insert;
    temp->next = insert;
    insert->previous = temp;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void getlength(Node* &head)
{
    Node* temp = head;
    int ans = 0;
   

    while(temp!=NULL)
    {
        temp = temp->next;
        ans+=1;
    }
    cout<<ans<<endl;
}

void del(Node* &head, int position,Node* &tail)
{
    if(position==1)
    {
        Node* temp = head;
        temp->next->previous = NULL;
        head = temp->next;
        temp->next=NULL;
        delete temp;
    }
    

    
    else
    {
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;

    while(cnt<position-1)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    curr->next->previous = prev;
    prev->next = curr->next;
    if(curr == tail)
    {
        tail = prev;
    }
    curr->next = NULL;
    delete curr;
    }
}


int main()
{
    Node* node1 = new Node(32);
    Node* head = node1;
    Node* tail = node1;
    insertionAtHead(head,21);
    inserionAtTail(tail,100);
    print(head);
    insertionInMiddle(head,2,69);
    print(head);
    getlength(head);
    del(head,4,tail);
    cout<<tail->data<<endl;
    print(head);


}



