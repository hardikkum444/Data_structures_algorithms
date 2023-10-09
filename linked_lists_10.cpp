//reversal of linked list using 
//3)recursive method-2

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

    //deconstructor
    ~Node()
    {
        int value = this->data;
        
        //freeing the memory
        if(this->next!=NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout<<"memory is free for data " <<value<<endl;
    }
};

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

void middle(Node* &head, int position, int d)
{
    Node* temp = head;
    int count = 1;

    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }

    Node* insert = new Node(d);
    insert->next = temp->next;
    temp->next = insert;
}

void del(Node* &head, int position)
{
    Node* curr = head;
    Node* prev = NULL;
    int count = 1;

    while(count<position)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}



void print(Node* &head)
{
    Node* temp = head;
    int count = 1;

    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
        count++;
    }
    cout<<endl;
}

Node* reverse1(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* smallerHead = reverse1(head->next);

    head->next->next = head;
    head -> next = NULL;

    return smallerHead;
}

//time complexity = O(n)
//space complexity = O(n)


    
Node* reverseNode(Node* &head)
{
    return reverse1(head);
}



int main()
{
    Node* node1 = new Node(3);
    Node* head = node1;
    Node* tail = node1;
    
    insertAtHead(head,4);
    insertAtTail(tail,44);
    print(head);

    middle(head,3,69);
    print(head);

    del(head,2); //del 3
    print(head);

    head = reverseNode(head);
    print(head);    
}



















