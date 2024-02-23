#include<iostream>
#include<algorithm>

using namespace std;
class node{
    public:
    node* left;
    node* right;
    int  data;

    node(int val)
    {
        left = NULL;
        right=NULL;
        data = val;
    } 

};

class BST
{
  node* root;
  public:

  BST()
  {
    root=NULL;
  }   

  node* Getroot()
  {
      return root;
  }
  void insertElement(int val, node* root)
  {
      node* newnode= new node(val);
      if(root=NULL)
      {
          root=newnode;
          cout<<"Node inserted successfully";
          return;
      }

      node* temp =root;
      int flag=0;

     while (flag!=1)
     {
         if(val<temp->data)
         {
             if(temp->left==NULL)
             {
                 temp->left=newnode;
                 cout<<"Node inserted successfully at the right";
                 flag=1;
                 return;
             }
         }

         if(val>temp->data)
         {
             if(temp->right==NULL)
             {
                 temp->right=newnode;
                 cout<<"Inserted at the  right side";
                 return;
             }
             else
             {
                 temp=temp->right;
             }
         }
     }

  }


  void inorder(node *root)
  {
      if(root==NULL){
            return;
        }

      inorder(root->left);
      cout<<root->data;
      inorder(root->right);

  }

  void preorder(node* root)
  {
      if(root==NULL){
            return;
        }

      cout<<root->data;
      preorder(root->left);
      preorder(root->right);
    
  }


  void postorder(node* root)
  {
      if(root==NULL){
            return;
        }

      postorder(root->left);
      postorder(root->right);
      cout<<root->data;
  }

  void search(int key,node* root) // searching a node in a tree 
  {
      if (root==NULL)
      {
          cout<<"Element not found";
          return;
      }
        if(root->data==key)
        {
            cout<<"DATA FOUJND !!";
            return;
        }
    if(key<root->data)
    {
        search(key,root->left);
    }

    if(key>root->data)
    {
        search(key,root->right);

    }
      
  }

  void minelement(node *root)
  {
      while (root->left!=NULL)

      {
        root=root->left;
      }
      cout<<"minimum value is "<<root->data<<endl;
  }
};

int main()
{
    BST bstree;
    
    int choice;
    do {
         cout<<"1 Insert Elememts-"<<endl;
    cout<<"2 Inorder Traversal -"<<endl;
    cout<<"3 Preorder Traversal -"<<endl;
    cout<<"4 Postorder Traversal -"<<endl;
    cout<<"5 Search Element -"<<endl;
    cout<<"6 Mirror Binary Tree -"<<endl;
    cout<<"7 Height Of Binary Tree -"<<endl;    
    cout<<"8 Min Value Of Binary Tree -"<<endl;    
    cout<<"0 Exit-"<<endl;   
    cout<<"Enter Your Choice -";
    cin>>choice;
    int height;
    switch (choice)
    {
    case1:
    int inp;
     cout<<"enter the element";
    cin>>inp;
     bstree.insertElement(inp,bstree.Getroot());
        break;

     case 2:
            bstree.inorder(bstree.Getroot());
            cout<<endl;
            break;
     
        case 3:
            bstree.preorder(bstree.Getroot());
            cout<<endl;
            break;

        case 4:
            bstree.postorder(bstree.Getroot());
            cout<<endl;
            break;
        
        case 5:
            int key;
            cout<<"Enter The Element To Search -";
            cin>>key;
            bstree.search(key , bstree.Getroot());
            cout<<endl;
            break;
  /*      case 6:
            bstree.Mirror(Bstree.GetRoot());
            break;
*/
      /*  case 7:
             height = Bstree.Height(bstree.GetRoot());
            cout<<"Height of Tree is - "<<height<<endl;
            break;
*/
        case 8:
            bstree.minelement(bstree.Getroot());
            break;


        default:
        cout<<"Enter Valid Option"<<endl;
        break;
    }

    }while(choice!=0);
}
