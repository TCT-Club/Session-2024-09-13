class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        int z = x ^ y;  // XOR operation to find differing bits
        for(int i = 0; i <= 31; i++) {  // Iterate through all 32 bits of an integer
            if(z & (1 << i)) {  // Check if the i-th bit is set or not
                ans++;  // Increment the count of differing bits
            }
        }
        return ans;  // Return the Hamming distance
    }
};