class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        
        unordered_set<int> st;
        for (int x : nums)
            st.insert(x);
        
        for (int x : nums) {
            if (st.find(x - 1) == st.end()) {
                int curr = x, count = 1;
                
                while (st.find(curr + 1) != st.end()) {
                    ++count;
                    ++curr;
                }
                
                res = max(res, count);
            }
        }
        
        return res;
    }
};