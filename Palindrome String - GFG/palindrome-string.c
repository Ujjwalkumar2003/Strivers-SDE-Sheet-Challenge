//{ Driver Code Starts
 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// } Driver Code Ends
//User function template for C
int isPalindrome(char  S[])
    {
  unsigned long slen = strlen(S);
    unsigned long l = 0;
    unsigned long r = slen-1;
             while(l < r) {
        if (S[l++] != S[r--]) {
            return 0;
        }
    }
    return 1;
        
    }

//{ Driver Code Starts.

int main() {
    
    int t;

    scanf("%d", &t);

    while(t--){
        char s[200005];
        scanf("%s", &s);
        if(isPalindrome(s)) printf("1\n");
        else  printf("0\n");
    }
    return 0;
}
// } Driver Code Ends