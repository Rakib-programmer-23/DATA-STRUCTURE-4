#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}

int left(BinaryTreeNode<int>* root, int sum) {
    if (root == NULL) return sum;

    // Check if the current node has a left child
    if (root->left != NULL) {
        sum += root->left->data;
    }

    // Recursively calculate sum of left child nodes in the left subtree
    sum = left(root->left, sum);

    // Recursively calculate sum of left child nodes in the right subtree
    sum = left(root->right, sum);

    return sum;
}

long long leftSum(BinaryTreeNode<int>* root) {
    int sum = 0;
    sum = left(root, sum);
    return sum;
}
*/
