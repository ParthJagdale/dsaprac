#include<iostream>
using namespace std;

int main() {
int arr[10],i;
int n;

cin>>n;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}

   for(i=n;i>=1;i--)
   {
          cout<<arr[i]<<" ";
   } 
}