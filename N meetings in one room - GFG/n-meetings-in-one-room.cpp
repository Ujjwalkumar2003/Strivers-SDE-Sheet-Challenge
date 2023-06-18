//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    

public :

static bool compare(pair<int,int>p1, pair<int,int>p2){
        if(p1.second==p2.second) return p1.first<p2.first;
        
        return p1.second<p2.second;
    }

int maxMeetings(int start[], int end[], int n)
    {
      vector<pair<int,int>> v(n);
      for(int i=0;i<n;i++){
          v[i]={start[i],end[i]};
      }
      sort(v.begin(),v.end(),compare);
      
      int ii=0;
      int jj=ii+1;
      int maimumMeeting=0;
      
      while(jj<n){
          if(v[ii].second<v[jj].first){
              maimumMeeting++;
              ii=jj;
              jj++;
              
          }else{
              jj++;
          }
      }

return maimumMeeting+1;
    }



};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends