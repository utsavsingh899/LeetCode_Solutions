class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char, int> mp;
        int res = 0;
        for (char x: S)
            ++mp[x];
        for (char x: J)
            res += mp[x];
        return res;
    }
};