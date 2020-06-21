





class Solution {
public:
    int minMoves(vector<int>& nums) {
        int res = 0, mn = INT_MAX;
        
        for (int x : nums)
            mn = min(mn, x);
        
        for (int x : nums)
            res += x - mn;
        
        return res;
    }
};




