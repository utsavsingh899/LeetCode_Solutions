class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        
        int res = 0;
        for (int x : nums) {
            if (seen.find(x - 1) == seen.end()) {
                int curr = x, count = 1;
                while (seen.find(curr + 1) != seen.end()) {
                    ++curr;
                    ++count;
                }
                
                res = max(res, count);
            }
        }
        
        return res;
    }
};