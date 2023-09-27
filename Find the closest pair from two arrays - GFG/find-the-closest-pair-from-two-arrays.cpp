//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
              vector<int> ans;
        
        int i= 0;
        int j= m-1;
        int diff = INT_MAX ;
        
        while(i<n && j>=0){
            int currDiff;
            currDiff =  abs(x - (arr[i]+brr[j]));
            if(currDiff < diff ){
                diff = currDiff;
                ans.clear();
                ans.push_back(arr[i]);
                ans.push_back(brr[j]);
            }
            if(arr[i]+brr[j]<x) i++;
            else if(arr[i]+brr[j]==0) break;
            else j--;
        }
       
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends