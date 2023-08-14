//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> arr) 
    {
       int  xorr=0;
    for(int i=0;i<arr.size();i++)
    {
        xorr=xorr^arr[i];
    }
    int cnt=0;
   
    while(xorr)
    {
        if(xorr&1)
        break;
        cnt++;

        xorr=xorr>>1;


    }
    int xor1=0,xor2=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]&(1<<cnt))
        {
            xor1=xor1^arr[i];
        } 
        else {
            xor2 = xor2^arr[i];
        }

    }

     if(xor1<xor2) 
     return {xor1,xor2};
    
    return {xor2,xor1};
               
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends