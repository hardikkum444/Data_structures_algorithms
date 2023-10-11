#include <iostream>
using namespace std;

//this is the algorithm which will return the value of kth smallest element in a binary tree
//we can do this simply by taking inorder and then returning the value of the kth element
//however, this method uses recursion, while using the same format of inorder.  


int solve(int* root, int &i, int k)
{
    if(root==NULL)
    {
        return -1;
    }
    //left side
    
    int left = solve(root->left,i,k);

    if(left!=-1)
    {
        return left;
    }
    
    //node side
    i++;
    if(i==k)
    {
        return root->data;
    }

    //right side
    return solve(root->right,i,k);

}

int kthsmallest(int* root,int i,int k)
{
    int ans = solve(root,i,k);
    return ans;
}