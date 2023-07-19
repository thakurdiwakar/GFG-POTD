//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
  int longestPalinSubseq(string A) {
    // Get the length of the input string
    int n = A.size();
    
    // Create a 2D vector to store the dynamic programming table
    // Initialize it with zeros
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    // Iterate through the string
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        // Check if the current characters match
        if (A[i - 1] == A[n - j])
          dp[i][j] = 1 + dp[i - 1][j - 1]; // If they match, increment the length of the subsequence
        else
          dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); // If they don't match, choose the maximum of the previous subsequence lengths
      }
    }

    // Return the length of the longest palindromic subsequence
    return dp[n][n];
  }
};




//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
