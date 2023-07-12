class Solution{
public:
 

    long long power(int N, int R)
    {
        
        
        if(R == 1)
        {
            return N % 1000000007;  // Return N modulo 1000000007
        }
        
        // Divide the problem into smaller subproblems
        long long result = power(N, R/2);  // Calculate power(N, R/2)
        
        result = (result * result) % 1000000007;  // Multiply the result with itself and take modulo
        
        if(R % 2 == 1)
        {
            result = (result * N) % 1000000007;  // If R is odd, multiply result with N and take modulo
        }
        
        return result;  // Return the final result
    }
};
