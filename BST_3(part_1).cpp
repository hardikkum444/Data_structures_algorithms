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

Node* root;

class BST
{
    public:
    BST()
    {
        root = NULL;
    }
    void insertNode(int );
    void inorder(Node* root );
    Node* deleteNode(int );

    
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

Node* BST :: deleteNode(int k)
{
    int flag=0;
    int found=0;
    Node* temp = root;
    Node* prev, *curr;
    
    if(temp==NULL)
    {
        cout<<"BST is empty"<<endl;
        return NULL;
    }
    else
    {
        prev = temp;
        while(temp!= NULL)
        {
            if(temp->data==k)
            {
                break;
            }
            if(k < temp->data)
            {
                prev = temp;
                temp = temp->left;
            }
            else
            {
                prev = temp;
                temp = temp->right;
            }
        }
        if(temp==NULL)
        {
            return temp;
        }
        else
        {   // node have only right subtree
            if(temp->right!=NULL)
            {
                prev = temp;
                curr = temp->right;
                while(curr->left!= NULL)
                {
                    prev = curr;
                    curr = curr->left;
                }
                temp->data = curr->data;
                temp = curr;
            }
            //node have no child
            if(temp->left == NULL && temp->right == NULL)
            {
                if(temp!=root)
                {
                    if (prev->left == temp)
                    {prev->right=NULL;}
                    else
                    {
                        prev->right=NULL;
                    }
                }    
                    else
                    {
                        root=NULL;
                    }
                    delete temp;
                    return(root);
                
            }
            else if(temp->left!=NULL && temp->right == NULL)
            {
                if(temp!=root)
                {
                if(prev->left==temp)
                {
                    prev->left = temp->left;
                }
                else
                {
                    prev->right = temp->left;
                }
                }
                else
                {
                    root=temp->left;
                    delete temp;
                    return(root);
                }
            }
            
        }
    }
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

    cout<<endl<<"Inorder:\n";
    b.inorder(root);
    cout<<endl;
    b.deleteNode(15);
    cout<<endl<<"After deletion"<<endl;
    cout<<endl<<"Inorder:\n";
    b.inorder(root);
    

}


