#include<iostream>
using namespace std;

class node
{
	public:
	string label[10];
	node* child[10];
	int count;
};

class bookrecord
{
	public:
	node* book =NULL;
	
	void insert()
	{
		book=new node();
		
		cout<<"Enter the name of the book";
		cin>>book->label[10];
		
		cout<<"Enter the nummber of chapters"<<endl;
		cin>>book->count;
		
		for(int i=0;i<book->count;i++)
		{
			book->child[i]=new node();
			cout<<"Enter the name of the chapter";
			cin>>book->child[i]->label[10];
			cout<<"endl";
			
				cout<<"Enter the number of subsections";
		        cin>>book->child[i]->count;
		       
		        int subsection= book->child[i]->count;
		        
		        for(int j=0;j<subsection;j++)
		        {
		        	book->child[i]->child[j]=new node();
		        	cout<<"Enter the name of ths subsection";
		        	cin>>book->child[i]->child[j]->label[10];
		        	cout<<"endl";
		        	
				}
		}
		
	  
	}
	
	void Display(){
    cout<<book->label<<endl;
    for(int i=0 ; i<book->count ; i++){
    cout<<"--"<<book->child[i]->label[10]<<" "<<endl;
    for(int j=0 ; j<book->child[i]->count ; j++)
        cout<<" ----"<<book->child[i]->child[j]->label[10]<<" "<<endl;
    }
  }
};

int main()
{
	bookrecord bk;
	bk.insert();
	bk.Display();
}
