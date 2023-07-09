//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        
        //void rotate(long long arr1[], long long arr2[], int n, int m, int count)
        //{
            
        
            
            
       // }
        
        
        
        
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
         //int max1 = n-1; 
          
         /*
         while(count!=0);
         int i=0, count=-1;
         while(i<n&&i<m)
         {
           if(arr2[i]<arr1[max1]){
               count++; 
           } 
         i++;
         }
         
         int temp= arr1[max1]; 
         arr1[max1]= arr2[count]; 
         arr2[count]= temp; 
          
          */
          int i=0, max1 = n-1,count=0; 
          
          //compare intial elements of array 2 to last element of arr1
            
          while(i<n&&i<m)
          {
              if(arr2[i]<arr1[max1]){
              swap(arr2[i],arr1[max1--]);
              count++; 
                  
              }
            i++;
          }
          sort(arr1, arr1+n);
          sort(arr2, arr2+m);
           
        }
        
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends
