#include <iostream>
#include <limits.h>
using namespace std;

 int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a > b)
			a-=b;
		else
			b-=a; 
	}

	return a;
}

int main() 
{
    
    	int a;
    	int b;
    	cin>>a>>b;
    	cout<<gcd(a, b);
    	return 0;
}
