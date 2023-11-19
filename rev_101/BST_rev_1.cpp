//insertiona and inorder revision

#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
    
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* root;

class BST
{
    public:
    BST()
    {
        root = NULL;
    }
    void insert(int d);
    void inorder(node* root);
};

void BST :: insert(int d)
{
    node* temp = new node(d);
    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        node* curr = root;
        node* prev = NULL;
        
        while(curr!= NULL)
        {
            prev = curr;
            if(curr->data > d)
            {
                curr = curr->left;
            }
            else
            {
                curr = curr->right;
            }
        }
        
        if(prev->data < d)
        {
            prev->right = temp;
        }
        else
        {
            prev->left = temp;
        }
    }
}

void BST :: inorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    BST b;
    int n;
    cout<<"how many?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        b.insert(d);
        cout<<"accepted"<<endl;
    }
    
    b.inorder(root);
}













