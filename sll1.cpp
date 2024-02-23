#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

class Node
{
    public:
int roll;
Node *next;
Node()
{
    roll=0;
    next=NULL;
}
};

class SLL
{
Node *head;
public:
SLL()
{
    head=NULL;
}
void createlist();
};
void SLL :: createlist()
{ 
    
    Node *temp,*temp1;
    int n,count;
    cout<<"\n Enter the amount of nodes to be enteresd";
    cin>>n;

    int a=1;

    while(a<=n)
    {
        temp=new Node();
        cout<<"Enter the data of the Node"<<" "<<a<<" :";
        cin>>temp->roll;
      

        if(a==1)
        {
            head=temp;
            count++;
        }
        else{
            temp1=head;

            while(temp1->next!= NULL)
            {
                temp1=temp1->next;
            }
            temp1->next=temp;
            count++;
        }
          a++;
    }
    
}

void main()
{
    SLL s1;
    s1.createlist();
  
    getch();
}