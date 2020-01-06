class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans(digits);
        int c = 0, i;
        for (i = ans.size() - 1; i >= 0; --i) {
            if (ans[i] < 9) {
                ++ans[i];
                if (c == 1)
                    c = 0;
                break;
            }
            else {
                ans[i] = 0;
                c = 1;
            }
        }
        if (c == 1)
            ans.insert(ans.begin(), 1);
        return ans;
    }
}