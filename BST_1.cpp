//binary search tree
//inserting a node.

#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* root;

class BST
{
    public:
    BST()
    {
        root = NULL;
    }

    void insert_Node(int);
};



void BST::insert_Node(int d)
{
    Node* temp = new Node(d);

    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        Node* curr = root;
        Node* prev = NULL;
        
        while(curr!=NULL)
        {
            prev = curr;

            if(d < curr->data)
            {
                curr = curr->left;
            }

            else
            {
                curr = curr->right;
            }
        }

        if(d < prev->data)
        {
            prev->left = temp;
        }

        else
        {
            prev->right = temp;
        }
    }
}

int main()
{
    BST b;
    
    cout<<"Enter the number of elements you'd like to enter: "<<endl;
    
    int n;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        int d;
        cin>>d;
        b.insert_Node(d);
        cout<<"accepted: "<<d<<endl;

    } 
}

