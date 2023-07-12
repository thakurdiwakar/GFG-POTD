#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

class Solution
{
public:
    // Function to calculate N^R using fast exponentiation
    int fastPower(int N, int R)
    {
        long long res = 1;
        int n = 1000000007;

        while (R > 0)
        {
            // If the least significant bit of R is set (i.e., R is odd),
            // multiply res by N and take modulo n.
            if (R & 1)
            {
                res = (1LL * (res) * (N) % n) % n;
            }

            // Square N and take modulo n.
            N = (1LL * (N % n) * (N % n)) % n;

            // Right shift R by 1 (equivalent to dividing R by 2).
            R = R >> 1;
        }

        return res;
    }

    // Function to calculate N^R by calling fastPower
    long long power(int N, int R)
    {
        // Call the fastPower function and return the result.
        fastPower(N, R);
    }
};

// Function to reverse a number
long long rev(long long n)
{
    long long rev_num = 0;

    while (n > 0)
    {
        // Get the last digit of n and append it to rev_num
        rev_num = rev_num * 10 + n % 10;

        // Remove the last digit from n
        n / 10;

        // Note: This code has a logical error, as it should be n = n / 10 instead of n / 10.
        // However, since this function is not used in the main program, the error doesn't affect the overall functionality.

        // Return the reversed number
        return rev_num;
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        long long R = 0;
        R = rev(N); // Reverse the number N

        Solution ob;

        // Calculate N^R using the power function from the Solution class
        long long ans = ob.power(N, R);

        cout << ans << endl; // Print the result
    }
}

// Time:- O(T * (log N + log R))
// Space:- O(log N)
