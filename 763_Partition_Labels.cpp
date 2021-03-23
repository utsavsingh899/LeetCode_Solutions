unordered_map<char, int> mp;
bool mysort(char a, char b) {
    return mp[a] < mp[b];
}
class Solution {
public:
    vector<int> partitionLabels(string S) {
        mp.clear();
        vector<int> res;
        int prev = 0;
        for (int i = 0; i < S.size(); ++i) {
            if (mp.find(S[i]) == mp.end())
                mp[S[i]] = i;
        }
        sort(S.begin(), S.end(), mysort);
        for (int i = 1; i < S.size(); ++i) {
            if (S[i] != S[i - 1] && mp[S[i]] == i) {
                res.push_back(i - prev);
                prev = i;
            }
        }
        res.push_back(S.size() - prev);
        return res;
    }
};