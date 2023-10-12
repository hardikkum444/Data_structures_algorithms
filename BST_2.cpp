//inorder, postorder, preorder in binary search tree

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

Node* root; //creating universal root

class BST
{
    public:
    BST()
    {
        root = NULL;
    }
    void insertNode(int );
    void inorder(Node* root );
    void preorder(Node* root );
    void postorder(Node* root );
    
};

void BST :: inorder(Node* root )
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void BST :: preorder(Node* root )
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void BST :: postorder(Node* root )
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void BST :: insertNode(int d)
{
    Node* temp = new Node(d);

    if(root == NULL)
    {
        root = temp;
    }

    else
    {
        Node* prev = NULL;
        Node* curr = root;

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
    int n;
    cin>>n;

    for(int i =0;i<n;i++)
    {
        int d;
        cin>>d;
        b.insertNode(d);
        cout<<"Accepted"<<endl;
    }

    b.inorder(root);
    cout<<endl;
    b.preorder(root);
    cout<<endl;
    b.postorder(root);
    cout<<endl;


}


