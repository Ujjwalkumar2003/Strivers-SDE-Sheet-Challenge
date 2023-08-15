//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
         int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==1)cnt++;
        }
        vector<int>arr(n,-1);
        for(int i=0;i<n;i++){   //make the array 0 as 1 and 1 as-1 
            if(a[i]==0)arr[i]=1;
        }
        int sum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum<0)
              sum=0;
             if(sum>maxsum)
               maxsum=sum;
        }
        int add=0;
        if(maxsum>0)
          add=maxsum;
          return maxsum+cnt;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends