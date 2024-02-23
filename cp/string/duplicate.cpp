#include<bits/stdc++.h>
using namespace std;

void duplicate(string s1)
{
    unordered_map<char,int>mp;

    for(int i=0;i<s1.size();i++)
    {
        mp[s1[i]]++;
    }

    for (auto it: mp)
    {
        if(it.second>1)
        {
                cout<<it.first<<"Count:"<<it.second;
                cout<<endl;
        }
    }

    
}
int main()
{
    string s1;
    cin>>s1;

    duplicate(s1);
    return 0;
}