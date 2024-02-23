#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void PrintLL(Node* n)

{
        while(n!=NULL)
        {
            cout<<n->data<<"\n";
            n=n->next;
        }
}

void insertinfront(Node** head_ref)  // the input taken is [laced in the front of the LL
{
    struct Node* new_node= new Node();
    
    int val;
    cout<<"Enter the value to be entered at the first"<<"\n ";
    cin>>val;
    new_node->data=val;
    new_node->next=(*head_ref);
    *head_ref=new_node;
}
void insertAfter(Node* prev_node)
{
   int val;
   cout<<"Enter the node to place in between";
   cin>>val;
    if(prev_node==NULL)
    {
        cout<<"the list is empty";
    }
    struct Node* new_node=new Node();
    new_node->data=val;
    new_node->next=prev_node->next;
    prev_node->next=new_node;

}

void insertatlast(Node** ref_head)
{
    int val;
    cout<<"Enter the value to be entered at the last";
    cin>>val;

    struct Node* new_node=new Node();
    struct Node* last=(*ref_head);
    new_node->data=val;
     new_node->next=NULL;
    
    if(*ref_head==NULL)
    {
        cout<<"this is an empty list so cant insert";
    }

    while (last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
}

int main()
{
    struct Node* Head=new Node();
    struct Node*  temp=new Node();
    struct Node* temp1=new Node();

    Head->next=temp;
    temp->data=1;
    temp->next=temp1;
    temp1->data=2;
    temp1->next=NULL;

int ch;

do
{
    cout<<"Select from the option given below"<<"\n";
cout<<"1.Insert at the Begining"<<"\n";
cout<<"2Insert in between ofthe list"<<"\n";
cout<<"3.Insert at the Last"<<"\n";
cout<<"4.Print the List"<<"\n";

cin>>ch;


switch (ch)
{
case 1:
    insertinfront(&Head);
    break;
case 2:
insertAfter(Head->next);
break;

case 3:
insertatlast(&Head);
break;

case 4:
PrintLL(Head);
break;
    
}
} while (option);



}