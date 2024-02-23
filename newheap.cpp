#include<iostream>
using namespace std;

class stud
{    
 	
	int mks[20];
	
	public:
		void insert(int tot);
		void display(int tot);
		void max(int tot);
		void min();
		
};
void stud::insert(int tot)
{
	
	for(int i=1;i<tot;i++)
	{
		cout<<"Enter marks";
		cin>>mks[i];
		int j=i;
		int par=j/2;
		
		while(mks[j]<mks[par] && j!=0)
		{
			int temp=mks[j];
			mks[j]=mks[par];
			j=par;
			par=j/2;	
		}	
	}
	 }
	 
	 void stud::display(int tot)
	 {
	 	for(int i=1;i<tot+1;i++)
	 	{
	 		cout<<mks[i];
		 }
	 	
	  } 
	  
	  void stud::max(int tot)
	  {
	  	int max1=mks[1];
	  	for(int i=2;i<=tot;i++)
	  	{
	  		if(max1<mks[i])
			  max1=mks[i];	
		}
		cout<<"MAX are:"<<max1;
	  } 

 void stud::min()
 {
 	cout<<"The minimum value is"<<mks[1];
 	cout<<"emndl";
  } 
  
  int main()
  {

  	int ch,cont,total,tmp;
  	int n;
  	stud s1;
  	do{
          
  		cout<<"SELECT FRO MENU GIVEN BELOW";
  		cout<<"1.INSERT"<<"endl";
  		cout<<"2.DISPLAY"<<"endl";
  		cout<<"3.MIN"<<"endl";
  		cout<<"4.MAX"<<"endl";
  		cin>>ch;
  		
  		switch(ch)
  		{
  			case 1:
  				cout<<"Enter the total no. to be entered"<<endl;
                  int total;
  				cin>>total;
  				s1.insert(total);
  				break;
  			
			  case 2:
			  cout<<"DIsplayed"<<endl;
			  s1.display(total);
			  break;
			  
			  case 3:
			  	s1.max(total);
			  	break;
			  	
			  case 4:
			  s1.min();	
			  break;
			  	
		  }
		  cout<<"Presss 1 to continue"<<endl;
    
		  cin>>cont;
  		
	  }while(cont==1);
	  
	  return 0;
  }

