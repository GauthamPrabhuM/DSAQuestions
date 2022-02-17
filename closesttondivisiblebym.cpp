#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    cin>>n>>m;
    int q=n/m;
    int n1=q*m>0?m*(q+1):m*(q-1);
    int n2=m*q;
    if(abs(n-n1)<abs(n-n2))
    cout<<n1;
    else
    cout<<n2;
	// your code goes here
	return 0;
}
