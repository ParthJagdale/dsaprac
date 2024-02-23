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
    
    node* root=NULL;
    void SetRoot(node* temp){
        root=temp;
    }
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
      
        default:
            cout << "\nOption does not exist" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
