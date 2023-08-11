class Solution {
public: 
    // Function to find the largest prime factor of a given integer N
    long long int largestPrimeFactor(int N) {
        long long i = 2;  // Initialize a variable 'i' to start checking from the smallest prime factor
        
        // Continue looping until N becomes 1 (meaning all prime factors have been found)
        while (N != 1) {
            // Check if 'i' is a factor of 'N'
            if (N % i == 0) {
                N /= i;  // Divide 'N' by 'i' to reduce it and move to the next factor
            } else {
                i++;    // If 'i' is not a factor, increment 'i' to check the next number
            }
        }
        
        return i;  // Return the largest prime factor of the original 'N'
    }
};
