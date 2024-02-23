#include<bits/stdc++.h>
using namespace std;

class Node{  // //the NOde is created in the Stack Section of the Meomary
    public:
    int data; 
    Node* next; // Value at Address of next 

};

void print_LL(Node* n) // Creating a Variable of Node CLass to Traverse the Linked List
{
    while (n != NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
    
}

void insertbefore(Node** Head_ref,int new_data)
{
    Node* temp= new Node();
    temp->next=(*Head_ref)
    temp->data=new_data;
    temp=Head_ref;


}

void insertin(Node* node,int data)
{

}
int main()
{
    Node* Head=NULL; // first we are creating the empty nodes, value  at adderess of HEAD node  is NULL
    Node* First=NULL;// Value at adddress of First is Null // first we allocate the object of node class for making the empty nodes

    Head=new Node(); // then the new node HEAD are allocated the memory dynamically
    First=new Node(); //then the new node FIRST are allocated the memory dynamically in the heap

    Head->data=1;
    Head->next=First;

    First->data=2;
    First->next=NULL;

 print_LL(Head);
}