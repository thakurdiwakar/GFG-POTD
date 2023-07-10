class Solution {
public:
    int setSetBit(int x, int y, int l, int r) {
        // Iterate over the range [l, r)
       
        for (int i = l - 1; i < r; i++) {
            // Get the i-th bit from y by shifting 1 by i positions to the left
            // and perform a bitwise AND with y
            int bit = y & (1 << i);
            
            // Set the i-th bit in x by performing a bitwise OR with the extracted bit
            x = x | bit;
        }
        
        return x;
    }
};
