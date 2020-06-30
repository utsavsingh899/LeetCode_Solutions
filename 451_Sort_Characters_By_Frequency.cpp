class Solution {
public:
    string frequencySort(string s) {
        string res;
        unordered_map<char, int> freq;
        vector<pair<char, int>> p;
        for (char c : s)
            ++freq[c];
        
        for (auto x : freq)
            p.push_back({x.first, x.second});

        sort(p.begin(), p.end(), [&] (pair<char, int>& a, pair<char, int>& b) {
           return a.second > b.second; 
        });
        
        for (auto x : p) {
            while (x.second--)
                res += x.first;
        }
        return res;
    }
};