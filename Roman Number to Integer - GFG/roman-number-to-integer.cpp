//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
         map<char,int>mp;
      mp.insert({'I',1});
       mp.insert({'V',5});
       mp.insert({'X',10});
         mp.insert({'L',50});
           mp.insert({'C',100});
             mp.insert({'D',500});
               mp.insert({'M',1000});
               int num=0;
               for(int i=0; i<str.size(); i++){
                   if(mp[str[i]]<mp[str[i+1]]){
                       num+=(mp[str[i+1]]-mp[str[i]]);
                       i++;
                       
                   }
                   else{
                       num+=mp[str[i]];
                      
                   }
               }
               return num; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends