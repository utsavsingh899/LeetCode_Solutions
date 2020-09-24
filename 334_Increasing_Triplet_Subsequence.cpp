



class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int small = INT_MAX, big = INT_MAX;
        
        for (int n : nums) {
            if (n <= small)
                small = n;
            else if (n <= big)
                big = n;
            else
                return true;
        }
        
        return false;
    }
};



