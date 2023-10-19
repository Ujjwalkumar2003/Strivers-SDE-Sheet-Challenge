//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    vector<int>vis(V,0);
	    queue<int>q;
	    q.push(0);
	    vis[0]=1;
	    int level =0;
	    while(!q.empty())
	    {
	        int s=q.size();
	        for(int i= 0;i<s;i++)
	        {
	            int node=q.front();
	            q.pop();
	            if(node==X)return level;
	            for(auto it :adj[node])
	            {
	                if(!vis[it])
	                {
	                    q.push(it);
	                    vis[it]=1;
	                }
	            }
	           
	        }
	        level++;
	        
	    }
	    return -1;
	    
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends