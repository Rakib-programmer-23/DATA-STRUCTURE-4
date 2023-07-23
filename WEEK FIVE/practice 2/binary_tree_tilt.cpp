/*************

class Solution {
public:

    int tilt=0;

    int postorder(TreeNode* root)
    {
       if(root==NULL) return 0;
       int l= postorder(root->left);
       int r= postorder(root->right);

       tilt+= abs(l-r);

       return root->val+l+r;
    }
    int findTilt(TreeNode* root) {
        postorder(root);
        return tilt;
    }
};
EXPLAINATION:  

       4
     /   \
    2     9
   / \   /
  3   5 7

1.The findTilt function is called with the root node of the tree.
2.The postorder function is called on the root node (value: 4).
  .The left child (value: 2) is visited first.
    .The postorder function is called on the left child.
        .The left subtree has a sum of values equal to 3, so left is 3.
        .The right subtree has a sum of values equal to 5, so right is 5.
        .The tilt of the current node (2) is abs(3 - 5) = 2.
        .The cumulative tilt variable is updated to 2.
        .The function returns the sum of values of the current node (2) and the sum of left and right subtrees (3 + 5 + 2 = 10).
    .The left variable is now 10.
  .The right child (value: 9) is visited next.
    .The postorder function is called on the right child.
        .The left subtree has a sum of values equal to 7, so left is 7.
        .The right subtree is empty (NULL), so right is 0.
        .The tilt of the current node (9) is abs(7 - 0) = 7.
        .The cumulative tilt variable is updated to 2 + 7 = 9.
        .The function returns the sum of values of the current node (9) and the sum of left and right subtrees (7 + 0 + 9 = 16).
    .The right variable is now 16.
  .The tilt of the root node (4) is abs(10 - 16) = 6.
  .The cumulative tilt variable is updated to 9 + 6 = 15.
  .The function returns the sum of values of the root node (4) and the sum of left and right subtrees (10 + 16 + 4 = 30).
3.The findTilt function returns the final value of tilt, which is 15.
  .Therefore, in this example, the tilt of the binary tree is 15.

 **************/