#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public: 
         int val;
         Node* left;
         Node* right;
         Node(int val)
         {
            this->val = val;
            this->left  = NULL;
            this->right = NULL;

         }   

};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1)
    {
        root=NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node*p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;

        Node* myleft;
        Node* myright;

        if(l==-1)
        {
            myleft=NULL;
        }
        else
        {
            myleft= new Node(l);
        }
        if(r==-1)
        {
            myright=NULL;
        }
        else
        {
            myright= new Node(r);
        }

        p->left  =myleft;
        p->right =myright;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);



    }
    return root;
}
void levelorder(Node *root, int l)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    bool found = false;
    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        Node *f = parent.first;
        int level = parent.second;
        q.pop();

        if (level == l)
        {
            cout << f->val << " ";
            found = true;
        }
        if (f->left)
        {
            q.push({f->left, level + 1});
        }
        if (f->right)
        {
            q.push({f->right, level + 1});
        }
    }
    if (!found)
    {
        cout << "Invalid";
    }
}

int main()
{
    Node* root = input_tree();

    int level;
    cin>>level;
   levelorder(root,level);

      
    return 0;
}