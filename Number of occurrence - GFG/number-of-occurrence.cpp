//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
    
    int count(int arr[], int n, int x) {
        int low = 0;
        int high = n - 1;
        int cnt = 0;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == x) {
                cnt++;
                
                // Check the left side of mid for more occurrences
                int left = mid - 1;
                while (left >= 0 && arr[left] == x) {
                    cnt++;
                    left--;
                }
                
                // Check the right side of mid for more occurrences
                int right = mid + 1;
                while (right < n && arr[right] == x) {
                    cnt++;
                    right++;
                }
                
                return cnt;
            }
            else if (arr[mid] > x) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends