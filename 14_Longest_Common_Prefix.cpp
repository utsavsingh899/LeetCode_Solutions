class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        
        string res;
        char ch;
        int i = 0;
        while (true) {
            if (i >= strs[0].size())
                return res;
            ch = strs[0][i];
            for (int j = 1; j < strs.size(); ++j) {
                if (i >= strs[j].size())
                    return res;
                if (ch != strs[j][i])
                    return res;
            }
            res += ch;
            ++i;
        }
        return res;
    }
};