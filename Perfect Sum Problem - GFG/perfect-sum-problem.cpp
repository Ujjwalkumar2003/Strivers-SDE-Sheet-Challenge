//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        
           const int MOD = 1e9 + 7;
       
 vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
 
    // Initialize the dp array
    dp[0][0] = 1;
    for (int j = 1; j <= sum; j++)
        dp[0][j] = 0;
 
    // Fill the dp array
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (arr[i - 1] <= j)
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - arr[i - 1]]) % MOD;
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
 
    return dp[n][sum];
        
        
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends