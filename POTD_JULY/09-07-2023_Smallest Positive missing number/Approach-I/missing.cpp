//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
   
    int missingNumber(int arr[], int n) 
{
        // Sort the array
        sort(arr, arr + n);

   
        int missing = 1;

        // Iterating through the array elements.
        for (int i = 0; i < n; i++) {
            // If the current element is equal to the expected missing number,
            // increment the missing number by 1.
            if (arr[i] == missing) {
                missing++;
            }
        }

        // Returning the smallest positive number missing from the array.
        return missing;
}
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends
