#include<bits/stdc++.h>
using namespace std;

struct  Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node()
    {
       
        right= NULL;
        left=NULL;
    }
};

void printtree(Node* n)
{

  if(n!=NULL)
  {
      cout<<n->data<<"\n";
      cout<<n->left->data<<"\n";
      cout<<n->right->data<<"\n";
  }
}

int main()
{
    struct Node* root =new Node();
    root->left=new Node();
    root->right=new Node();
    root->data=4;
    root->left->data=5;
    root->right->data=6;
  
    printtree(root);
    

}