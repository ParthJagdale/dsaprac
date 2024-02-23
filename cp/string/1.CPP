#include<bits/stdc++.h>
using namespace std;
int main()
{
        string s1="AbssdDFFDsdsdo";

        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]>='a' && s1[i]<='z')
            {
                s1[i]-=32;
            }
        }
        cout<<s1;
}