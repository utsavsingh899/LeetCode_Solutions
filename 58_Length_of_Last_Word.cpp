

class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.size() == 0)
            return 0;
        int l = 0;
        bool space = 0;
        
        while (!s.empty() && s.back() == ' ')
            s.pop_back();
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                space = 1;
                l = 0;
            }
            else
                ++l;
        }
        return l;
    }
};
