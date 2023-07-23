/**************
class Solution {
public:
    bool isUnivalTree(TreeNode* root)
    {
        if (root == NULL) {
            return true;
        }
        
        int parent = root->val;

        if(parent!=root->val)
        {
            return false;
        }

        if (root->left != NULL && root->left->val != parent) 
        {
            return false;
        }
        
        if (root->right != NULL && root->right->val != parent) 
        {
            return false;
        }

        return isUnivalTree(root->left) && isUnivalTree(root->right);
    }
    
};
********************************************/