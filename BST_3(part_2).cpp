//my version/ better version of the binary search tree deletion 
//algorithm

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
    void insertNode(int );
    void inorder(node* root);
    
    node* minValue(node* root);
    node* maxValue(node* root);
    node* del(node* root, int value);
};

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

node* BST :: del(node* root, int k)
{
    //base case 1 
    if(root == NULL)
    {
        return root;
    }
    //base case 2
    if(root->data == k)
    {
        //-->no child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        
        //-->one child
        
        // 1) left child
        if(root->left != NULL && root->right == NULL)
        {
            node* temp = root->left;
            delete root;
            return temp;
        }
        //2) right child
        if(root->left == NULL && root->right != NULL)
        {
            node* temp = root->right;
            delete root;
            return temp;
        }
        
        //-->two child nodes
        if(root->left != NULL && root->right != NULL)
        {
            int mini = minValue(root->right)->data;
            root->data = mini;
            root->right = del(root->right, mini);
            return root;
        }
        
    }
    else if(root->data > k)
    {
        root->left = del(root->left,k);
        return root;
    }
    else if(root->data < k)
    {
        root->right = del(root->right,k);
        return root;
    }
    
    
    
}

node* BST :: minValue(node* root)
{
    node* temp = root;
    
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

node* BST :: maxValue(node* root)
{
    node* temp = root;    
    
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
    
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
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        b.insertNode(d);
        cout<<"accepted"<<endl;
    }
    
    // node* min = b.minValue(root);
    // node* max = b.maxValue(root);
    
    cout<<b.minValue(root)->data<<endl;
    cout<<b.maxValue(root)->data<<endl;
    
    b.inorder(root);
    cout<<endl;
    
    int d;
    cout<<"which element would you like to delete? "<<endl;
    cin>>d;
    root = b.del(root,d);
    
    b.inorder(root);
}







