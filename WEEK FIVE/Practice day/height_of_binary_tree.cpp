#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

int maxheight(TreeNode<int>* root)
{
    if(root==NULL) return 0;

    int l= maxheight(root->left);
    int r= maxheight(root->right);
    return  max(l,r)+1;
}
int maxDepth(TreeNode<int> *root) {
    // Write your code here.
    int height= maxheight(root);
    return height-1;
}
**********************************************************/