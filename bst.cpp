#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
		
		node(int val)
		{
			data=val;
			left=NULL;
			right=NULL;
		}
};

class BST
{
	node* root;
	public:
	BST()
	{
		root==NULL;
	}
	node* Getroot()
	{
		return root;
		
	}
	
	void insert(int val,node* root)
	{
		node* newnode= new node(val);
		if(root==NULL)
		{
			root=newnode;
			cout<<"Data insereted"<<endl;
			return;
		}
	
		node* temp=root;
	
		int flag=0;
		 	
		 	while(flag!=1)
		 	{
		 	
		 	 if(val<temp->data)
			  {
			  	if(temp->left==NULL)
			  	{
				  	temp->left=newnode;
			  	cout<<"Inserted at the lefft successfully"<<endl;
			  	flag=1;
			  	return;
				  }
				    	
			  }	else{
			  	temp=temp->left;
			  }
		 	if(val>temp->data)
		 	{
		 		if(temp->right==NULL){
		 				temp->right=newnode;
						 cout<<"inserted"<<endl;
						 return;	
				 }
				 else{
				 	temp=temp->right;
				 }
			 }
			}
	}
	
	void inorder(node* root)
	{
		if(root==NULL)
		{
			return;
		}
		inorder(root->left);
		cout<<root->data;
		inorder(root->right);
	}
	
	void preorder(node *root)
	{
		if(root==NULL)		{
	return;
		}
		cout<<root->data;
		preorder(root->left);
		preorder(root->right);
	}
	
	void postorder(node* root)
	{
		if(root==NULL)
		{
			return;
		}
		postorder(root->left);
		postorder(root->right);
		cout<<root->data;
	}
	
	void minvalue(node *root)
	{
		if(root==NULL)
		{
			return;
		}
		while(root->left!=NULL)
		{
			root=root->left;
		}
		cout<<"The minimum elemem is "<<root->data;
	}
	
	void search(int key,node* root)
	{
		if(root->data=key)
		{
			cout<<"datafound"<<"endl";
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
};

int main()
{
	BST btree;
	int choice;
	
	do{
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
    
    switch(choice){
    	case1:
    		int ele;
    		cout<<"Enter the elemetn to insert";
    		cin>>ele;
    		btree.insert(ele,btree.Getroot());
    	
    		break;
    		
    		case 2:
    			cout<<"The Preorder is"<<endl;
    			btree.preorder(btree.Getroot());
    		
    			break;
    			 case 8:
            btree.minvalue(btree.Getroot());
            break;

			   case 3:
            btree.preorder(btree.Getroot());
            cout<<endl;
            break;

        case 4:
            btree.postorder(btree.Getroot());
            cout<<endl;
            break;
        
        case 5:
            int key;
            cout<<"Enter The Element To Search -";
            cin>>key;
            btree.search(key , btree.Getroot());
            cout<<endl;
            break;

        default:
        cout<<"Enter Valid Option"<<endl;
        break;
	}
	}while(choice!=0);
}
