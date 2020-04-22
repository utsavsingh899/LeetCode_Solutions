unordered_map<char, int> mp;
bool mysort(string a, string b) {
    int i = 0, m = a.size(), n = b.size();
    while (mp[a[i]] == mp[b[i]]) {
        ++i;
        if (i > min(m, n))
            return m > n ? false : true;
    }
    return  mp[a[i]] < mp[b[i]];
}
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<string> temp = words;
        for (int i = 0; i < order.size(); ++i)
            mp[order[i]] = i;
        sort(temp.begin(), temp.end(), mysort);
        for (int i = 0; i < words.size(); ++i)
            if (words[i] != temp[i])
                return false;
        return true;
    }
};