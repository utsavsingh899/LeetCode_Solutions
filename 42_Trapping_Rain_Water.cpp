class Solution {
public:
    int trap(vector<int>& height) {
        const int n = height.size();
        
        int leftMax = 0, rightMax = 0, res = 0;
        int lo = 0, hi = n - 1;
        while (lo <= hi) {
            if (height[lo] < height[hi]) {
                height[lo] > leftMax ? leftMax = height[lo] : res += leftMax - height[lo];
                ++lo;
            }
            else {
                height[hi] > rightMax ? rightMax = height[hi] : res += rightMax - height[hi];
                --hi;
            }
        }
        
        return res;
    }
};

// Simpler to understand implementation wise 
class Solution {
public:
    int trap(vector<int>& height) {
        const int n = height.size();
        
        int leftMax = 0, rightMax = 0, res = 0;
        int lo = 0, hi = n - 1;
        while (lo <= hi) {
            if (height[lo] < height[hi]) {
                leftMax = max(leftMax, height[lo]);
                res += leftMax - height[lo];
                ++lo;
            }
            else {
                rightMax = max(rightMax, height[hi]);
                res += rightMax - height[hi];
                --hi;
            }
        }
        
        return res;
    }
};