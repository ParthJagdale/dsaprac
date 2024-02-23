#include<iostream>
#include <stack>
using namespace std;
class node{
   public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};

class BinaryTree{
    private:
    node* root=NULL;
    void SetRoot(node* temp){
        root=temp;
    }
  
    public:

        node* GetRoot(){
        return root;
    }

    void InsertNode(int val){
        node* dataNode=new node(val);
        if(root==NULL){
            SetRoot(dataNode);
            return;
        } 
        node* temp = root;
        int flag=0;
        do{
            if(val<temp->data){
                if(temp->left==NULL){
                 temp->left=dataNode; 
                 flag=1;
                 cout<<"Node Inserted Succesfully "<<dataNode->data<<endl;
                 return; 
                }else{
                    temp=temp->left;
                }
            }
            else
            {
                 if(temp->right==NULL){
                 temp->right=dataNode; 
                 flag=1;
                 cout<<"Node Inserted Succesfully "<<dataNode->data<<endl;
                 return; 
                }else{
                    temp=temp->right;
                }
            }
        }while(flag!=1);
        
    }
 
    void Inorder(node* temp ){
        if(temp==NULL){
            return;
        }
        Inorder(temp->left);
        cout<<temp->data<<" ";
        Inorder(temp->right);
    }

     
    void Preorder(node* temp ){
        if(temp==NULL){
            return;
        }
        cout<<temp->data<<" ";
        Preorder(temp->left);
        Preorder(temp->right);

    }
     
    
    void Postorder(node* temp ){
        if(temp==NULL){
            return;
        }
        Postorder(temp->left);
        Postorder(temp->right);
        cout<<temp->data<<" ";
     
    }
  


// Non Recursive Code 
void NonRecInorder(node* temp){
    stack<node *> stk;
    
    while(temp!=NULL || !stk.empty()){

        //go to extreme left   
       while(temp!=NULL){
           stk.push(temp);
           temp=temp->left;
       }

        temp=stk.top();
           cout<<temp->data<<' ';
           stk.pop();
           temp=temp->right;
       
    }

}

void NonRecPreorder(node* temp){
    stack<node*> stk;
    stk.push(temp);
    while(!stk.empty()){
        //    pop the top element and print 
           temp = stk.top();
           cout<<temp->data<<" ";
           stk.pop(); 
        
        if(temp->right){
            stk.push(temp->right);
        }  
        
        if(temp->left){
            stk.push(temp->left);
        }    

    }
  
   }
    
void search(node* temp , int data){
   
   if(temp==NULL){
       cout<<"Value not found in the tree "<<endl;
       return;
   }
   if(data==temp->data){
    cout<<"Found Value "<<data<<" In Tree Successfully !"<<endl;
    return;
   }   
   if(data>temp->data){
       search(temp->right,data);
   }else if(data<temp->data){
       search(temp->left,data);
   }
}    
node* MinValueNode(node* temp){
   while(temp!=NULL && temp->left!=NULL){
           temp=temp->left;
   }
   return temp;
}
node* Delete(node* temp , int key){
   if(temp==NULL){
       return NULL;
   }
   if(key==temp->data){
    //  case 1 - node has no child;  

    if(temp->left==NULL && temp->right==NULL){
        return NULL;
    }

    // case 2 - node has 1 left child 
    if(temp->left!=NULL && temp->right==NULL){
       node* lchild = temp->left;
       delete temp;
       return lchild;
    }
    // case 2 - node has 1 right child 
    if(temp->right!=NULL && temp->left==NULL){
       node* rchild = temp->right;
       delete temp;
       return rchild;
    }

    // case 3 - node has 2 child

    }
   else if(key>temp->data){
       temp->right=Delete(temp->right,key);
   }
   else if(key<temp->data){
       temp->left=Delete(temp->left,key);
   }

return temp;
}
};
  




int main(){
  
    int choice;
    int val;
    BinaryTree btree;

    do
    {
        cout << "\nChoose from one of the following options." << endl;
        cout << "1. Insert a Node." << endl;

        cout << "2. Display Tree Inorder" << endl;
        cout << "3. Display Tree NON-REC Inorder" << endl;

        cout << "4. Display Tree Preorder" << endl;
        cout << "5. Display Tree NON-REC Preorder" << endl;

        cout << "6. Display Tree Postorder" << endl;
        cout << "7. Search In Tree " << endl;
        cout << "8. Delete In Tree " << endl;

        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "\nExiting" << endl;
            break;
        case 1:
            int dataVal;
            cout<<"Enter value you want to insert"<<endl;
            cin>>dataVal;
            btree.InsertNode(dataVal);
            break;
         
        case 2:
            btree.Inorder(btree.GetRoot());
            break;
        
        case 3:
            btree.NonRecInorder(btree.GetRoot());
            break;

       case 4:
            btree.Preorder(btree.GetRoot());
            break;
        case 5:
            btree.NonRecPreorder(btree.GetRoot());
        break;    

       case 6:
            btree.Postorder(btree.GetRoot());
            break;
        case 7:
            int key;
            cout<<"Enter the value you want to search ";
            cin>>key;
            btree.search(btree.GetRoot(),key);
            break;
        case 8:
            int Dkey;
            cout<<"Enter the value you want to Delete ";
            cin>>Dkey;
            btree.Delete(btree.GetRoot(),Dkey);
            break;
 
        default:
            cout << "\nOption does not exist" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}