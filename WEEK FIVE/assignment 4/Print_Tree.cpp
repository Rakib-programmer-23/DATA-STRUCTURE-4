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
        Node* p = q.front();
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
void levelorder(Node* root, vector<int>&s)
{
    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* f= q.front();
        q.pop();
        s.push_back(f->val);
        if(f->right) q.push(f->right);
        if(f->left)  q.push(f->left);
       
    }

}
int main()
{
    Node* root = input_tree();
    vector<int>v;
    levelorder(root,v);  
    reverse(v.begin(),v.end());
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}