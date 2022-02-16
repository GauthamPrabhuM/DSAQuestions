// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++



class Solution{   
public:
    int maxSubarrayXOR(int N, int arr[]){    
        int ans=INT_MIN;
        
        for(int i=0; i<N; i++)
        {
            int curr=0;
            for(int j=i; j<N; j++)
            {
                curr=curr^arr[j];
                ans=max(curr,ans);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.maxSubarrayXOR(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
