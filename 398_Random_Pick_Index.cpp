

//Reservoir Sampling Solution
class Solution {
    vector<int> a;
public:
    Solution(vector<int>& nums) {
        a = nums;
    }
    
    int pick(int target) {
        int res = -1, n = 0;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == target) {
                ++n;
                int num = rand() % n;
                if (num == 0)
                    res = i;
            }
        }
        
        return res;
    }
};
