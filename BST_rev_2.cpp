//lets revise BST once again because its a pain in the ass

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
        root=NULL;
    }
    
    void insert(int d);
    void inorder(node* root);
    
    void largest(node* root);
    node* smallest(node* root);
    
    node* del(node* root,int k);
};

node* BST :: del(node* root,int k)
{
    if(root == NULL)
    {
        return root;
    }
    
    if(root->data == k)
    {
        //no child no mercy
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        
        //if 1 child, some mercy is shown
        if(root->left != NULL && root->right == NULL)
        {
            node* temp = root->left;
            delete root;
            return temp;
        }
        
        if(root->left == NULL && root->right != NULL)
        {
            node* temp = root->right;
            delete root;
            return temp;
        }
        
        //if both child, nothing but respect is shown
        if(root->left != NULL && root->right != NULL)
        {
            int mini = smallest(root->right)->data;
            root->data = mini;
            root->right = del(root->right, mini);
            return root;
        }
        
    }
    else if(root->data < k)
    {
        root->right = del(root->right, k);
        return root;
    }
    else if(root->data > k)
    {
        root->left = del(root->left, k);
        return root;
    }
}

node* BST :: smallest(node* root)
{
    node* temp = root;
    while(temp->left!=NULL)
    {
        temp = temp->left;
    }
    return temp;
}

void BST :: largest(node* root)
{
    node* temp = root;
    while(temp->right!=NULL)
    {
        temp = temp->right;
    }
    cout<<"and the largest element is: "<<temp->data<<endl;
}

void BST :: insert(int d)
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
        
        while(curr!=NULL)
        {
            prev = curr;
            
            if(curr->data < d)
            {
                curr = curr->right;
            }
            else
            {
                curr = curr->left;
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
    cout<<"enter"<<endl;
    
    int n;
    cin>>n;
    BST b;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        b.insert(d);
        cout<<"accepeted"<<endl;
    }
    
    b.inorder(root);
    cout<<endl;
    
    b.largest(root);
    cout<<endl;
    
    root = b.del(root, 12);
    b.inorder(root);
}
