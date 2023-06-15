//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    
    int f(int n ,vector<int>&dp)
    {
         int mod=1000000007;
        if(n<=2)
        return n;
        
        if(dp[n]!=-1)return dp[n];
        
        return dp[n]=(f(n-1,dp)+f(n-2,dp))%mod;
    }
    
    int countWays(int n)
    {
        // your code here
          int mod=1000000007;
        vector<int>dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        
        return f(n,dp)%mod;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends