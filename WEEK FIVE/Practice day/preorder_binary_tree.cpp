/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};



void preorder(BinaryTreeNode<int> *root) {
  if (root == NULL) return;

  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void preOrder(BinaryTreeNode<int> *root) {
 

  preorder(root);
}
******************************************************************/
