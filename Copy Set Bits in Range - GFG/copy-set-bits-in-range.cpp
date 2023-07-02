//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
            // code here
        int temp = x;
        x = x/pow(2, l-1);  //when l != 1 
        y = y/pow(2, l-1);  //update x and y accordingly
        int sum = 0;
        while (l <= r){     //travel from right to left
            if (y % 2 == 1 && x % 2 == 0){
                sum += pow(2, l-1);    //update sum only when y is set and x is not set 
            }
            y = y/2;        //update y
            x = x/2;        //update x;
            l++;            //update l  
        }
        return temp+sum;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends