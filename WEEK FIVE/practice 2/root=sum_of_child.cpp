/*************
 


class Solution {
public:
    bool checkTree(TreeNode* root) {
        if (root == NULL) {
            return false;
        }

        int sum ;
        if (root->left && root->right) {
            int l = root->left->val;
            int r = root->right->val;
            sum = l + r;
        }

        return sum == root->val;
    }
};


 ****************/