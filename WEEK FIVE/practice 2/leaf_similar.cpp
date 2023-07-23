/****************
  
  class Solution {
public:

    void leaf(TreeNode* node, vector<int>& leaves) {
        if (node == NULL) return;

        if (node->left == NULL && node->right == NULL) {
            leaves.push_back(node->val);
        }
        leaf(node->left, leaves);
        leaf(node->right, leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1;
        vector<int> leaves2;
        leaf(root1, leaves1);
        leaf(root2, leaves2);

        return leaves1 == leaves2;
    }
};


******************/