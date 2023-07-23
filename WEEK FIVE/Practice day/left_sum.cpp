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

int left(BinaryTreeNode<int>* root) {
    if (root == NULL) return 0;

    int sum = 0;

    // Check if the current node has a left child
    if (root->left != NULL) {
        sum += root->left->data;
        sum += left(root->left); // Recursively calculate sum of left subtree
    }

    // Recursively calculate sum of the left value of right subtree
    sum += left(root->right);

    return sum;
}

long long leftSum(BinaryTreeNode<int>* root) {
    int sum = left(root);
    return sum;
}
*/