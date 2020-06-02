class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> freq;
        int gcd = 0;
        for (auto x: deck)
            ++freq[x];
        for (auto itr = freq.begin(); itr != freq.end(); ++itr)
            gcd = __gcd(gcd, itr -> second);
        return gcd == 1 ? false : true;
    }
};