


class Solution {
public:
    int longestPalindrome(string s) {
        int res = 0, mx = -1;
        unordered_map<char, int> mp;
        bool flag = false;
        for (char x : s)
            ++mp[x];
        for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
            if (itr -> second & 1) {
                res += (itr -> second / 2) * 2;
                flag = true;
            }
            else
                res += itr -> second;
        }
        return res + flag;
    }
};


