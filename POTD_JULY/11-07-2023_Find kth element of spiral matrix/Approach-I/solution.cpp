
class Solution{
public:
    int findK(int a[MAX][MAX], int n, int m, int k){
        int left = 0, top = 0;
        int bot = n - 1, right = m - 1;
        k--;
        
        while (left <= right && top <= bot) {
            // Traverse from left to right on the top row
            for (int i = left; i <= right; i++) {
                if (k == 0) {
                    return a[top][i]; }
                k--; 
            }
            top++; // Move the top row down
            
            // Traverse from top to bottom on the rightmost column
            for (int i = top; i <= bot; i++) {
                if (k == 0) {
                    return a[i][right]; 
                }
                k--; 
            }
            right--; // Move the rightmost column to the left
            
            // Traverse from right to left on the bottom row
            for (int i = right; i >= left; i--) {
                if (k == 0) {
                    return a[bot][i]; 
                }
                k--; 
            }
            bot--; // Move the bottom row up
            
            // Traverse from bottom to top on the leftmost column
            for (int i = bot; i >= top; i--) {
                if (k == 0) {
                    return a[i][left]; 
                }
                k--; 
            }
            left++; // Move the leftmost column to the right
        }
        
        return -1; // If k is not found within the matrix, return -1
    }
};
