//reverse a linked list

#include <iostream>
using namespace std;

class Node
{   
    //we will create class for a single linked lists as, we are
    //performing reversing on single linked list
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = next;
    }
};

Node* reverse(Node* &head)
{
    
if(head->next == NULL)
    {
        return head;
    }

    if(head == nullptr)
    {
        return head;     
    }
    
    Node* prev = NULL;
    Node *curr = head;
    Node* forward = NULL;

    while(curr!=NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

void insertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head)
{
    Node* temp  = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(23);
    Node* head = node1;
    insertAtHead(head,33);
    insertAtHead(head,66);
    print(head);

    head = reverse(head);
    print(head);

}
        

//so techinically what we have done is, that we have created a node type
//function which returns a node as the answer,
//and we have then made a while loop, which essentially goes and 
//traversing through all the elements, reversing their link and then 
//at the end of the function, the value of prev is returned, as that is 
//essentially our new head

//then when we use the print function, the new value of head is passed
//and sice the entire linked list has been reversed, 

//the reversed linked list is then printed
