//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int LCS(string &x,string &y,int n,int m,vector<vector<int>>&dp)
    {
        if(m==0||n==0)
        return 0;
        if(x[n-1]==y[m-1])
        return dp[n][m]=1+LCS(x,y,n-1,m-1,dp);
        
        if(dp[n][m]!=-1)
        return dp[n][m];
        
        return dp[n][m]=max(LCS(x,y,n-1,m,dp),LCS(x,y,n,m-1,dp));
    }
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
          vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
          
          return LCS(s1,s2,n,m,dp);
          
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends