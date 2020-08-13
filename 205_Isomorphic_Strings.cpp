




class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char> ms(256, '0'), mt(256, '0');
        for (int i = 0; i < s.size(); ++i) {
            if (ms[s[i]] == '0' && mt[t[i]] == '0') {
                ms[s[i]] = t[i];
                mt[t[i]] = s[i];
            }
            else if (ms[s[i]] != t[i] || mt[t[i]] != s[i])
                return false;
        }
        
        return true;
    }
};



