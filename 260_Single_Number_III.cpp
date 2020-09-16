


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int nxor = 0, a = 0, b = 0;
        
        for (int n : nums)
            nxor ^= n;
        
        int mask = 1 << (__builtin_ctz(nxor));
        
        for (int n : nums) {
            if (n & mask)
                a ^= n;
            else
                b ^= n;
        }
        
        return {a, b};
    }
};

