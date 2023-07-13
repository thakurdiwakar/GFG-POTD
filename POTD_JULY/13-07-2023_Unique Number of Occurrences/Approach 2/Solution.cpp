//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        
      //map to store frequency
        map<int, int> mppp; 
        for(int i=0; i<n; i++){
            mppp[arr[i]]++; 
        }
        //set to store unique frequency
        set<int> unique_set;         
        
        for(auto i:mppp){
            int val = i.second; 
            unique_set.insert(val); 
        }
      //compare size of map and set. IF frequency is unique size would be same. Else false. 
        if(mppp.size()==unique_set.size())
        return true; 
        
        else
        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends
