class Solution{
public:
    bool findTriplets(int arr[], int n)
    {
        // Function to find triplets with zero sum.
        
        // Sorting the array in ascending order.
        sort(arr, arr + n);
        
        // Loop through the array, considering each element as the first element of a potential triplet.
        for(int i = 0; i < n - 2; i++)
        {
            int j = i + 1; // Index of the second element.
            int k = n - 1; // Index of the third element.
            int target = -arr[i]; // The target sum for the second and third elements to become zero.
            
            // Using a two-pointer approach to find a pair with the sum equal to the target.
            while(j < k)
            {
                // If the sum of the current pair equals the target, we found a triplet with zero sum.
                if(arr[j] + arr[k] == target)
                    return true;
                // If the sum is greater than the target, we need to decrease the sum by moving the third pointer to the left.
                else if(arr[j] + arr[k] > target)
                    k--;
                // If the sum is less than the target, we need to increase the sum by moving the second pointer to the right.
                else
                    j++;
            }
        }
        
        // No triplet with zero sum found.
        return false;
    }
};
