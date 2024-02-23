#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int rec(int n)
{
    int f;
    if(n==1)
    {
        return 1;
    }
    else
    {
        f=n*rec(n-1);
        return(f);
    }
}
int main()
{
    int n,i,fact;
    cout<<"Enter the no";
    cin>>n;
    fact=rec(n);
    cout<<"FActorial is "<<fact;
    }