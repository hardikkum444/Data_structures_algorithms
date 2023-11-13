//lets do BST revision

//this also contains the self made algo which checks if a given number is present or not
//in your binary search tree.



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
        left = NULL;
        right = NULL;
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
    
    void insertNode(int );
    void inorder(node* root);
    void search(node* root,int k);
};

void BST :: search(node* root,int k)
{
    if(root == NULL)
    {
        cout<<"nothing present in tree"<<endl;
        return;
    }
    else
    {
        node* curr = root;
        node* prev = NULL;
        
        while(curr!= NULL)
        {
            if(k<curr->data)
            {
                curr= curr->left;
            }
            else if(k>curr->data)
            {
                curr = curr->right;
            }
            else if(curr->data == k)
            {
                cout<<"you data has been found"<<endl;
                return;
            }
            
        }
        cout<<"your data is not in the BST";
        return;
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

void BST :: insertNode(int d)
{
    node* temp = new node(d);
    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        node* prev = NULL;
        node* curr = root;
        
        while(curr!= NULL)
        {
            prev = curr;
            if(d<curr->data)
            {
                curr = curr->left;
            }
            else
            {
                curr = curr->right;
            }
        }
        if(d<prev->data)
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
    cout<<"how many nodes would you like your tree to have? "<<endl;
    int n;
    cin>>n;
    
    for(int i =0;i<n;i++)
    {
        cout<<"please enter data"<<endl;
        int d;
        cin>>d;
        b.insertNode(d);
    }
    cout<<"you data has been collected"<<endl;
    
    b.inorder(root);
    cout<<endl;
    
    b.search(root, 32);
}
























