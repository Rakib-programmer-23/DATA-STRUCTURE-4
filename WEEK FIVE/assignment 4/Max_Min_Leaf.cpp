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
        root==NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* p= q.front();
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

        p->left  = myleft;
        p->right = myright;

        if(p->left) 
        {
            q.push(p->left);
        }
        if(p->right)
        {
            q.push(p->right);
        }

    }
    return root;
}
void leaf(Node* root, vector<int>&s)
{
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL)
    {
        s.push_back(root->val);
    }
    leaf(root->left,s);
    leaf(root->right,s);
  
}
int main()
{
    Node* root = input_tree() ;
    vector<int>v;
    leaf(root,v);

    int mx = *max_element(v.begin(),v.end());
    int mn = *min_element(v.begin(),v.end());
    cout<<mx<<" "<<mn;
    return 0;
}