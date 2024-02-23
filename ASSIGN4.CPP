node* temp=root;
flag=0;
void insert(int val,node8 root)
{
	node* newnode=new node(val);
	if(root==NULL)
	{
		root=newnode;
	}
	
	do{
		if(val<temp->data)
		{
			if(temp->left==NULL)
			{
				temp->left=newnode();
				flag=1;
			}
			else
			{
				temp=temp->left;
			}
		}
		
		if(val>temp->data)
		{
			if(temp->right==NULL)
			{
				temp->right=newnode();
				flag=1;
			}
			else
			{temp=temp->right;
			}
		}
	}while(flag!=1)
}
