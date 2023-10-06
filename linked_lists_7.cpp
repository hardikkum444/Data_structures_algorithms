//deletion in double linked lists (two way linked lists) 

#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* previous;
    Node* next;

    //constructor
    Node(int d)
    {
        this->data = d;
        this->previous = NULL;
        this->next = NULL;
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

void print(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head)
{
    int length=0;
    Node* temp = head;
    while(temp!=NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}


void insertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head->previous = temp; //this is the new step we have added (i have added on my own hehe), which makes this a linked list 
    head = temp;
}

void insertAtTail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->previous = tail;
    tail = temp;
}

void insertAtPosition(Node* &head, int position, int d)
{
    if (position==1)
    {
        insertAtHead(head,d);
        return;
    }
    else
    {
        Node* temp = head;
        int cnt = 1;

        while(cnt<position-1)
        {
            temp = temp->next;
            cnt++;
        }
        Node* insert = new Node(d);
        /*1*/ insert->next = temp->next;
        temp->next->previous = insert;    
        /*2*/ temp->next = insert; //its VERY IMPORTANT to keep the steps in proper sequence otherwise entire function can give a wrong outputor even an error;
        insert->previous = temp;

    }
}

void del(Node* &head,Node* &tail,int position)
{
    if(position==1)
    {
        Node* temp = head;
        temp->next->previous = NULL;
        head = temp->next;
        temp->next=NULL;
        delete temp;
    }


    else{
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;

    while(cnt<position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    curr->next->previous = prev;
    prev->next = curr->next;
    if(curr==tail)
    {
        tail=prev;
    }
    else
    {
    curr->next = NULL;
    curr->previous = NULL;
    delete curr;
    }
}
    


int main()
{
    Node* node1 = new Node(4);
    Node* head = node1;
    Node* tail = node1;

    int len = getLength(head);
    print(head);
    insertAtHead(head,12);
    cout<<"length of your linked list is: "<<len<<endl;
    print(head);

    insertAtHead(head,14);
    print(head);
    
    insertAtHead(head,140);
    print(head);

    insertAtHead(head,111);
    print(head);

    insertAtTail(tail,69);
    print(head);

    // del(head,1);
    // print(head);

    del(head,6);
    print(head);
    cout<<tail->data<<endl;


}
