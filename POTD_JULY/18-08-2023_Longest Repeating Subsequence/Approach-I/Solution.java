import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while (T-- > 0) {
            String str = br.readLine().trim();
            Solution ob = new Solution();
            int ans = ob.LongestRepeatingSubsequence(str);
            System.out.println(ans);
        }
    }
}

class Solution {
    public int LongestRepeatingSubsequence(String str) {
        // Get the length of the input string
        int n = str.length();

        // Create a 2D array to store the dynamic programming values
        // dp[i][j] represents the length of the longest repeating subsequence
        // in the substring str[0...i-1] and str[0...j-1]
        int[][] dp = new int[n + 1][n + 1];

        // Iterate over the substrings to fill the dp array
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                // If the characters at positions i-1 and j-1 are the same
                // and the positions i and j are not the same (to avoid counting the same
                // character twice)
                if (str.charAt(i - 1) == str.charAt(j - 1) && i != j) {
                    // Increment the length of the repeating subsequence by 1
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    // If the characters are different, take the maximum length
                    // from either excluding the character at position i or j
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        // The length of the longest repeating subsequence is stored in dp[n][n]
        return dp[n][n];
    }
}

// Time:- O(n^2)
// Space:- O(n^2)

// Enjoy POTD
// Keep Coding
