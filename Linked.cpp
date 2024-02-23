#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *temp, *temp1, *head;
void create()
{
t
    head = NULL;
    int n;
    cout << "Enter the number of node to be inserted"
         << " ";
    cin >> n;
    while (n>0)
    {
         temp = (struct node *)malloc(sizeof(struct node ));
        cout << "Enter the data of the node ";
        cin >> temp->data;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp1=head;
            while (temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp;
        }
        n--;
    }
}

void display()
{
    temp1=head;
    while (temp1!= NULL)

    {
        cout << temp1->data << "->>";
        temp1 = temp1->next;
    }
    cout<<"NULL";
}
int main()
{

    create();
    display();
}
