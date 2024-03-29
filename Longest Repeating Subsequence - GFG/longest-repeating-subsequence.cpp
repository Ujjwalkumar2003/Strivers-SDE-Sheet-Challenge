//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		     int s=str.length();
		    int dp[s+1][s+1];
		    for(int i=0;i<=s;i++){
		        dp[i][0]=0;
		        dp[0][i]=0;
		        
		    }
		    
		    int ans=0;
		    for(int i=1;i<=s;i++){
		        for(int j=1;j<=s;j++){
		            if(i!=j && str[i-1]==str[j-1]){
		                dp[i][j]=dp[i-1][j-1]+1;
		            }else{
		                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		            }
		            ans=max(ans,dp[i][j]);
		        }
		    }
		    
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends