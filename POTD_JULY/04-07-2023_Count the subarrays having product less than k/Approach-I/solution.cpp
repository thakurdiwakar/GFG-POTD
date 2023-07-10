//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution {
public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long p = 1; // initialize the product variable
        int ans = 0, i = 0, j = 0; // initialize variables for the answer, left pointer, and right pointer

        for (i = 0, j = 0; j < n; j++) { // iterate through the array using two pointers, i and j
            p *= a[j]; // multiply the product by the current element

            while (p >= k && i < j) { /
                p /= a[i]; // divide the product by the element at index i
                i++; 
            }

            if (p < k) // if the product is less than k
                ans += (j - i + 1); // increment the answer by the count of subarrays between i and j (inclusive)
        }

        return ans; // return the answer
    }
};







//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends
