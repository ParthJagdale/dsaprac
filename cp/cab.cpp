// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;


int main()
{
  int X;
    float Y;
 
   cin>>X>>Y;
   if((X%5==0.0) && (X>Y))
   {
       cout<<fixed<<setprecision(2);
       cout<<Y;
   }
   else if((X<Y) && (X%5==00))
   {
        float Z;
       Z=Y-X-0.50;
        cout<<fixed<<setprecision(2);
       cout<<Z;
   }
   else
   {
        cout<<fixed<<setprecision(2);
       cout<<Y;
   }
    return 0;
}
