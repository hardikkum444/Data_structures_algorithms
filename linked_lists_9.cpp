//reversal of linked list using 
//1)iterative method
//2)recursion method-1

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

void reverse(Node* &head, Node* curr, Node* prev)
{
    //base case
    if(curr == NULL)
    {
        head = prev;
        return;
    }

    Node* forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}
    
Node* reverseNode(Node* &head)
{
    Node* curr = head;
    Node* prev = NULL;
    reverse(head,curr,prev);
    return head;
}

// Node* reverse(Node* &head)
// {
//     Node* curr = head;
//     Node* prev = NULL;
//     Node* next = NULL;

//     while(curr!=nullptr)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;    
// }

//time complexity of this method of reversing a linked list 
//is O(n), since we are using a loop
//space complexity of this is O(1) as we have taken constant
//space

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




















