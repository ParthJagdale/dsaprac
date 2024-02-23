#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first=0;
    int second=1;
    cout<<first;
    cout<<second;

    while (n-2>0)
    {
        int third=first+second;
        first=second;
        second=third;
        cout<<third;
        n-=1;
    }
    
    return 0;
}