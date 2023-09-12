//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long s=0;
        if(N==1)
        return 0;
        for(long long i =2;i*i<N;i++)
        {
               if(N%i==0 && i!=N)
             {  
                 s+=(long long )N/i;// factor always happen to be in pair 
                 s+=i;// like for 6-> (1,6),(2.3) 
             }
            
        }
            if((s+1)==N) // for 6 ->(1,6) this is pair of factor but we can't include 6 
        return 1;
        else
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends