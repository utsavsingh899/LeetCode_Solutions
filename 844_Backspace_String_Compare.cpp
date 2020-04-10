class Solution {
    string process(string s) {
        string res = "";
        for (auto x : s) {
            if (x == '#' && res.empty())
                continue;
            if (x == '#')
                res.pop_back();
            else
                res.push_back(x);
        }
        return res;
    }
public:
    bool backspaceCompare(string S, string T) {
        string s1 = process(S), s2 = process(T);
        return s1 == s2;
    }
};