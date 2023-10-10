//simple binary tree 

// Node 
// root 
// children
// parent
// siblings
// ancestors
// descendent
// leaf  -->  the node at which termination of tree 
//            i.e no more children occur from that node

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
        this->right = NULL;
        this->left = NULL;
    }
};

Node* buildTree(Node* root)
{
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    cout<<"Root: "<<data<<endl;

    root = new Node(data);

    if (data==-1)
    {
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<root<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data for inserting in right of  "<<root<<endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{
    Node* root = NULL;
    root = buildTree(root);

    return 0;
}

//the difference between a binary tree and a binary search tree in thsat 
//binary tree is in any order however BST, to the left of it, is the smaller
//number and to the right of it is the larger number