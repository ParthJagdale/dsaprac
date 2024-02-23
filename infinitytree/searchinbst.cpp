#include<iostream>
using namespace std;


class  Node {

public:
int data;
Node *left,*right;

 Node(){
        data=0;
        left=right=NULL;
    }

    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};


Node *bstinsert(Node *root,int value)
{
    if(root==NULL){
       return new Node(value); //For creating first Node Because initially root will be null while entering the data
    }
        if(value<root->data)
        
            root->left=bstinsert(root->left,value);
        
        if(value>root->data)
        
            root->right=bstinsert(root->right,value);
        
    return root;

}
void inOrder(Node *root)
{
    if(root==NULL)
        return ;
   
       inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
 
    
}

Node * search(Node *root,int key)
{
 if(root==NULL)
        return NULL;

    if(root->data==key)
    {
        return root;
    }
    if(key>root->data)
    
        return search(root->right,key);
else
    return search(root->left,key);
    
   
}

int main()
{
   
    Node *root;
    root=NULL;
    int value;

    do{

            cout<<"Enter The Data For Node (-1 If not)"<<" ";
            cin>>value;

            if(value!=-1)

                root=bstinsert(root,value);

    }while(value!=-1);

    cout<<"Inorder of the Tree is"<<" "<<endl;
    inOrder(root);


    int key;
    cout<<"Enter the Key to be searched";
    cin>>key;

   if(search1(root,key)==NULL){
        cout<<"\nSORRY : Key Not Found";
    }else{
        cout<<"\nWOW : Key Present in BST";
    }
       
    
    return 0;
  
}