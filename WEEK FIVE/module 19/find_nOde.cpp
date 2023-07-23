/********************************************
 

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


bool find(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
        return false;

    if (root->data == x)
        return true;

    bool foundInLeft = find(root->left, x);
    bool foundInRight = find(root->right, x);

    return foundInLeft || foundInRight; // i have to return a value if i don't return anything it will not get any output
    
}

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    return find(root, x);
}



**********************************************/