class Solution {
    int digitSum(int n) {
        int res = 0;
        while (n) {
            res += n % 10;
            n /= 10;
        }  
        
        return res;
    }
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        int mx = 0, res = 0;
        for (int i = 1; i <= n; ++i)
            ++mp[digitSum(i)];
        for (auto x : mp)
            mx = max(mx, x.second);
        for (auto x : mp)
            if (x.second == mx)
                ++res;
        
        return res;
    }
};