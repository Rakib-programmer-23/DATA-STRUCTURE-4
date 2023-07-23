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
int count_Node(Node *root)
{
    queue<Node*>q;
    q.push(root);
    int node=0 ;
    while (!q.empty())
    {
        Node* f=q.front();
        q.pop();
        node++;
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    return node;
    
}
int maxheight(Node*root)
{
    if(root==NULL) return 0;
    int l= maxheight(root->left);
    int r= maxheight(root->right);

    return max(l,r)+1;
}
int main()
{
    Node* root = input_tree();

    int level;
    cin>>level;
    int H=maxheight(root);
    int count= pow( 2, H)-1;
    int N= count_Node(root);
    //cout<<count<<endl<<N;

    if(count==N)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

      
    return 0;
}