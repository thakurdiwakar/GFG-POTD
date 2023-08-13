class Solution {
public:
    int nthFibonacci(int n) {
        int prevFib = 1; // Previous Fibonacci number (initialized to F(1))
        int currFib = 1; // Current Fibonacci number (initialized to F(2))
        
        const int mod = 1e9 + 7; // Modulus constant to prevent integer overflow
        
        // Loop to calculate Fibonacci numbers iteratively
        for (int i = 3; i <= n; i++) {
            int newFib = (prevFib + currFib) % mod; // Calculate the next Fibonacci number
            prevFib = currFib; // Update previous Fibonacci number
            currFib = newFib;  // Update current Fibonacci number
        }
        
        return currFib; // Return the nth Fibonacci number
    }
};
