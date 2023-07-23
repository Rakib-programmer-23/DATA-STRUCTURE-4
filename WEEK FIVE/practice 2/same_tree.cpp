/****************
 


class Solution {
public:
    void binary(TreeNode* root, vector<int>& v) {
        if (root == NULL) {
            v.push_back(0);
            return;
        }
        
        v.push_back(root->val);
        binary(root->left, v);
        binary(root->right, v);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1;
        vector<int> v2;
        binary(p, v1);
        binary(q, v2);

        return v1 == v2;
    }
};





 *********************/