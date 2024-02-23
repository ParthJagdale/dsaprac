#include <bits/stdc++.h>
using namespace std;
 
 class Node{
     public:
     int data;
     Node* next;
 };

 void push(Node** ref_head,int new_data)
 {
     Node* new_node= new Node();
     new_node->data=new_data;
     new_node->next=(*ref_head);
     *ref_head=new_node;
 }

 void insertAfter(Node* prev_node,int new_data)
 {
     if(prev_node==NULL)
     {
         cout<<"Node CAnt be entered because list does not  exist";
         return;
     }

     Node* new_node= new Node();
     new_node->data=new_data;
     new_node->next=prev_node->next;
     prev_node->next=new_node;
    
 }

 void append(Node** ref_head,int new_data)
 {
     Node* new_node= new Node();
     Node* last=(*ref_head);
     new_node->data=new_data;
     new_node->next=NULL;

     if(*ref_head==NULL)
     {
         *ref_head=new_node;
     }

     while (last->next!=NULL)
     {
        last=last->next;
     }
     last->next=new_node;

 }

 void PrintList(Node* node)
 {
     while (node->next !=NULL)
     {
        cout<< node->data<<"  ";
        node=node->next; 
     }
     
 }

 int main()
 {
     Node* head=NULL;

     push(&head,7);

     append(&head,8);
     
     push(&head,4);

     insertAfter(head->next,9);

     

     cout<<"Created Linked List is :"<< "   ";
     PrintList(head);

 }