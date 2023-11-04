//BST revision and deletion of the smallest element



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
    void insert(int );
    void inorder(node* root);
    node* min(node *root);
    
    node* del(node* root, int k);
};

node* BST :: del(node* root, int k)
{
    if(root == NULL)
    {
        return root;
    }
    
    if(root->data == k)
    {
        //no child node
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        
        //1 left child node
        if(root->left!= NULL && root->right == NULL)
        {
            node* temp = root->left;
            delete root;
            return temp;
        }
        //1 right child node
        if(root->left== NULL && root->right != NULL)
        {
            node* temp = root->right;
            delete root;
            return temp;
        }
        
        //if both child nodes present
        if(root->left!= NULL && root->right != NULL)
        {
            int mini = min(root->right)->data;
            root->data = mini;
            root->right = del(root->right, mini);
            return root;
        }
    }
    else if(root->data > k)
    {
        root->left = del(root->left, k);
        return root;
    }
    else if(root->data < k)
    {
        root->right = del(root->right, k);
        return root;
    }
}

node* BST :: min(node* root)
{
    node* temp = root;
    
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

void BST :: inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void BST :: insert(int d)
{
    node* temp = new node(d);
    if(root==NULL)
    {
        root = temp;
    }
    else
    {
        node* curr = root;
        node* prev = NULL;
        
        while(curr!=NULL)
        {
            prev = curr;
            
            if(d > curr->data)
            {
                curr = curr->right;
            }
            else
            {
                curr = curr->left;
            }
        }
        
        if(d < prev->data)
        {
            prev->left = temp;
        }
        if(d > prev->data)
        {
            prev->right = temp;
        }
    }
}

int main()
{
    BST b;
    cout<<"how many elements: "<<endl;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        b.insert(num);
        cout<<"accepted"<<endl;
    }
    
    b.inorder(root);
    cout<<endl;
    node* minV = b.min(root);
    cout<<"and least value is: "<<minV->data<<endl;
    
    int minini = minV->data;
    b.del(root, minini);
    b.inorder(root);
}










