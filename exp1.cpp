#include<iostream>
using namespace std;

class node
{
    public:
    string name;
    long long tel;
    int id;

    node()
    {
        tel=0;
        id=0;
    }
};

class Hashmap
{
    public:
    node* Hashtable[10];

    void create()
    {
        for(int i=0 ;i<10;i++)
        {
            Hashtable[i]= new node();
            Hashtable[i]->id=-1;
    
    }
    }

    int hashfunc(int id)
    {
        int key= id %10;
        return key;
    }

     void search(int id)
     {
         int index=hashfunc(id);
         if(Hashtable[index]->id==id)
         {
             cout<<endl;
            cout<<"Element Found - "<<endl;
            cout<<"Name - "<<Hashtable[index]->name<<endl;
            cout<<"Telephone - "<<Hashtable[index]->tel<<endl;
            cout<<endl;
            return;
         }
           int count=0;

     while(count< 10 || Hashtable[index]->id!=id )

    {
        index=(index+1)% 10;
        count++;
    }
    if (count==10){
        cout<<"Element not found";
    }
    else{
            cout<<endl;
            cout<<"No. Of Comparison - "<<count<<endl;
            cout<<"Element Found - "<<endl;
            cout<<"Name - "<<Hashtable[index]->name<<endl;
            cout<<"Telephone - "<<Hashtable[index]->tel<<endl;
            cout<<endl;

        }


     }
     //if value not found

   
        void Quadraticprobing(string name,long long tel, int id ,int index)
        {
            int count=0;
            int probe=1;
            while(count<10)
        {
        
            index=(index+(probe*probe))%10;
            if(Hashtable[index]->id==-1)
            {
               
                Hashtable[index]->name=name;
                Hashtable[index]->id=id;
                Hashtable[index]->tel=tel;
                cout<<"No. Of Comparison Taken Place - "<<probe<<endl;
            cout<<"Element Inserted Succussfully"<<endl;
            break;
             }
             probe++;
             count++;
        }
          if(count==10){
        cout<<"No Space Left In Hashtable"<<endl;
        return;
    }
    return;
        }
        void Linearprobing(string name,long long tel,int id,int index)
        {
            int count=1;
            
            while(count<10)
            {
                 index=(index +1)%10;
                if(Hashtable[index]->id==-1)
                {
                   break;
                }
                count++;
            }

            if(count==10)
            {
                cout<<"Element cant be inserted no space";
                return; 
            }

            Hashtable[index]->id=id;
            Hashtable[index]->name=name;
            Hashtable[index]->tel=tel;
            cout<<"Element haaas been inserted";
            return;
        }

        void insertElement(string name,int tel,int id)
        {
            int index=hashfunc(id);
            if(Hashtable[index]->id==-1)
            {
                Hashtable[index]->id=id;
                Hashtable[index]->name=name;
                Hashtable[index]->tel=tel;
            }
            else{
                int choice;
                cout<<"Linear Probing"<<endl;
                cout<<"Quadratic Probing"<<endl;
                cin>>choice;
                if(choice==1)
                {
                  
                 Linearprobing(name,tel,id,index);
                }
                else if(choice==2)
                {
                     Quadraticprobing(name,tel,id,index);
                }     else{
                    cout<<"Correct option";
                }
            }
            return;
        }

        void display()
        {
            for(int i=0;i<10;i++)
            {
                if(Hashtable[i]->id==-1)    
            
            {
                continue;
            } 
            
 else {
        cout<<endl<<"ID - "<<Hashtable[i]->id<<endl;
        cout<<"Name - "<<Hashtable[i]->name<<endl;
        cout<<"Telephone - "<<Hashtable[i]->tel<<endl;
        cout<<endl;
        } 
       
        }
         cout<<endl;
}
};
int main()
{
   int choice;
   Hashmap htable;
   htable.create();

        do{
            cout<<"1 Insert Element in HashTable "<<endl;
cout<<"2 Display Elements in HashTable "<<endl;
cout<<"3 Search Element in HashTable "<<endl;
cout<<"0 Exit "<<endl;
cout<<"Enter Your Choice - ";
cin>>choice;
cout<<endl;

    int id;
    string name;
    int tel;

    switch (choice)
    {
    case 1:
    cout<<"Enter ID - ";
    cin>>id;
    cout<<endl;

    cout<<"Enter Name - ";
    cin>>name;
    cout<<endl;

    cout<<"Enter Telephone - ";
    cin>>tel;
    cout<<endl;


    htable.insertElement(name,tel,id);
    break;
    

    
    case 2:
  cout<<endl;
  cout<<"Telephone Directory - "<<endl;
  htable.display();
  cout<<endl;
  break; 

case 3:
  int key;
  cout<<"Enter The Key "<<endl;
  cin>>key;
  htable.search(key);
  break;
 default:
    break;
    }
        }while (choice!=0);
}
