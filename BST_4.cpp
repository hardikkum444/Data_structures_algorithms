//code to see whether the given BST is correctly made or not

//this can be simply done by checking if the inorder is sorted

//but to make this with the complexity of O(n) and also very short
//we use the concpet of recursion;

bool isisBST(int* node, int min, int max)
{
    //base case
    if(root==NULL)
    {
        return true;
    }

    if(root->data >= min && root->data <= max)
    {
        bool left = isisBST(root->left, min,root->data);
        bool right = isisBST(root->right, root->data, max);
        return left && right;
    }
    else
    {
        return false;
    }
}



bool isBST (int* node)
{
    return isisBST(node,__WINT_MIN__,__WINT_MAX__);
}