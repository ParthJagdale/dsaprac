#include<iostream>
using namespace std;

class node{
	int data;
	node* left,right;
	
	node(int val)
	{
		data=val;
		right=NULL;
		left=NULL;
	}
};

class BST
{
	node* root;
	
	BST()
	{
		root=NULL;
	}
	
	void Getroot()
	{
		return root;
	}
	
	void insert(int val,node* root)
	{
		
	}
}
