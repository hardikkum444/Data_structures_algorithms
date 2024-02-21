
#include <iostream>
using namespace std;

class Node
{
    public:
    char data;
    Node* next;

    //constructor
    Node(char data)
    {
        this->data = data;
        this->next = next;
    }

    //deconstructor
    ~Node()
    {
        char value = this->data;
        
        //freeing the memory
        if(this->next!=NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout<<"memory is free for data " <<value<<endl;
    }
};

void insertAtHead(Node* &head,char d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,char d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void middle(Node* &head, int position, char d)
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



void print(Node* &head,string &ans)
{
    Node* temp = head;
    int count = 1;

    while(temp!=nullptr)
    {
        // cout<<temp->data<<" ";
        ans += (temp->data);
        //  ans[count-1] = temp->data;
        temp = temp->next;
        count++;
    }
    // cout<<endl;
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
    string name;
    
    cout<<"Enter a string"<<endl;
    cin>>name;
    
    int size = name.size();
    
    // cout<<name[2]<<endl;
    
    
    
    Node* node1 = new Node(name[size-1]);
    Node* head = node1;
    Node* tail = node1;
    
    for(int i=size-2;i>=0;i--){
        insertAtHead(head,name[i]);
    }
    
    // insertAtHead(head,name[0]);
    // insertAtTail(tail,44);
    string ans;
    print(head,ans);
    
    // cout<<ans<<endl;
    
    // cout<<node1[1];

    // middle(head,3,69);
    // print(head);

    // del(head,2); //del 3
    // print(head);

    
    string ans2;
    head = reverseNode(head);
    print(head,ans2);  
    // cout<<ans2<<endl;
    
    if(ans == ans2){
        
        cout<<"is palindrome"<<endl;
    }else{
        
        cout<<"not a palindrome"<<endl;
    }
    
    
    cout<<"malik senior oreo 10 vali :{"<<endl;
}
