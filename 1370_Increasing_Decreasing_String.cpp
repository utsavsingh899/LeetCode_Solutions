class Solution {
public:
    string sortString(string s) {
        map<char, int> mp;
        string res = "";
        bool flag = true;
        for (auto x: s)
            ++mp[x];
        while (flag) {
            flag = false;
            for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
                if (itr -> second > 0) {
                    flag = true;
                    res += itr -> first;
                    --itr -> second;
                }
            }
            flag = false;
            for (auto itr = mp.rbegin(); itr != mp.rend(); ++itr) {
                if (itr -> second > 0) {
                    flag = true;
                    res += itr -> first;
                    --itr -> second;
                }
            }
        }
        return res;
    }
};