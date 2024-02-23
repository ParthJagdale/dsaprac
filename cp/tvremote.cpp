#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,X,Y;
	cin>>t;
	while(t--)
	{
	    cin>>X>>Y;
	    
	    if(X>Y)
	    {
	        cout<<X-Y;
	    }
	    else
	    {
	        cout<<Y-X;
	    }
	}
	return 0;
}
