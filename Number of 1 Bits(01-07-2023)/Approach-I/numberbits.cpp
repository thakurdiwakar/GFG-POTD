//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution {
public:
    int setBits(int N) {
        int count = 0;
        
        while (N) {
            count += N & 1; // Increment count if the last bit of N is 1
            N >>= 1; // Right shift N by 1 to check the next bit
        }
        
        return count; // Return the total count of set bits
    }
};






//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends
