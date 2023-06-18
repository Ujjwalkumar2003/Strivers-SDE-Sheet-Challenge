//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
      bool static myComp(Job a, Job b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        //sort
        sort(arr, arr+n, myComp);
        
        //find maximum deadline
        int maxDead=arr[0].dead;
        for(int i=1;i<n;i++){
            maxDead=max(maxDead, arr[i].dead);
        }
        
        //insert -1 in slot[]
        int slot[maxDead+1];
        for(int i=0;i<=maxDead;i++){
            slot[i]=-1;
        }
        
        //finding maximum profit and no. of jobs that we can do 
        
        int countJobs=0, maxProfit=0;
        
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(slot[j]==-1){
                    slot[j]=i;
                    countJobs++;
                    maxProfit= maxProfit+arr[i].profit;
                    break;
                }
            }
        }
        
        //retruning the answer
        vector<int>ans;
        ans.push_back(countJobs);
        ans.push_back(maxProfit);
        return ans;
    }
        
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends