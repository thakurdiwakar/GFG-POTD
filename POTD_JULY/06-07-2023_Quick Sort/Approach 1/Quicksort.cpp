//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
//Main Solution
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        
        // code here
        //base case
        if(low>=high){
            return; 
        }
        
        
        int part = partition(arr, low, high);
        quickSort(arr, low ,part-1);
        quickSort(arr, part+1, high); 
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot = low; 
       int i=low; 
       int j=high; 
       int temp;
       
       while(i<j){
         //iterate till arr[i]>arr[pivot]
           while(arr[i]<arr[pivot]){
               i++; 
           }
         // iterate till arr[j]< arr[privot]
           while(arr[j]>arr[pivot]){
               j--;
           }
         //swap i with j
           if(i<j){
           temp = arr[i]; 
           arr[i] = arr[j];
           arr[j]=temp; 
           j--; 
           }
       }
      //when i>j swap pivot with j. Now we can say that element pivot is sorted
       if(j<i){
       temp = arr[j]; 
       arr[j]= arr[pivot]; 
       arr[pivot]=arr[j]; 
       }
      
    return j; 
        
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
