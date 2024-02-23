#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    n=13;
    int p=n;
    int res=0;
    while(n>0)
    {
        int rem=n%10;
        res=res+(rem*rem*rem);
        n=n/10;
    }

    if(res==p)
    {
        cout<<"THe NUmber is Armstrong number";
       
    }
    else{
        cout<<"NOT A ARMSTRONG";
    }

     return 0;
}