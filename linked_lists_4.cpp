//code for deletion of a node

//#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this->data = data;
        this->next = next;
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

void insertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertInMiddle(Node* head,int position,int d)
{   
    if(position==1)
    {
        insertAtHead(head,d);
        return;
    }


    Node* temp = head;
    Node* insert = new Node(d);
    int cnt = 1;
    
    while(cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }

    insert->next = temp->next;
    temp->next = insert;

}

//apparently this does not work

// void del(Node* &head,int position)
// {
//     Node* temp = head;
//     int cnt = 1;

//     while(cnt<position-1)
//     {
//         temp = temp->next;
//     }

//     Node* dele = temp->next;
//     temp->next = dele->next;


// }


//so for the code of deletion, we first have to create a destructor
//also we have to create a code which handles the case of deletion node being head


void delNode(Node* &head,Node* &tail,int position)
{
    if(position==1)
    {
        Node* temp = head;
        head = head->next;
        //it is important to set temp->next Null because even after deletion, so that there is no node linking the new head or head in general.
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node* current = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt<position)
        {
            prev = current;
            current = current->next;
            cnt++;
        }

        prev->next = current->next;
        if(current = tail)
        {
            tail = prev;
        }
        current->next = NULL;
        delete current;
    }
}





int main()
{
    Node* node1 = new Node(24);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 5);
    insertAtTail(tail, 500);
    insertInMiddle(head,2,200);
    //del(head,1);
    delNode(head,tail,4);
    print(head);
    cout<<tail->data<<endl;

}


















    