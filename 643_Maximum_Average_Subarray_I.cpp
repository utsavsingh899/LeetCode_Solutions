



class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res, curr = 0.0;
        
        for (int i = 0; i < k; ++i)
            curr += nums[i];
        res = curr / k;
        
        for (int i = 1; i <= nums.size() - k; ++i) {
            curr += nums[i + k - 1];
            curr -= nums[i - 1];
            res = max(res, curr / k);
        }
        
        return res;
    }
};


