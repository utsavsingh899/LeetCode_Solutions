
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0)
            return 0;
        if (haystack.size() < needle.size())
            return -1;
        
        bool flag = 0;
        for (int i = 0; i <= haystack.size() - needle.size(); ++i) {
            flag = 0;
            for (int j = i; j < needle.size() + i; ++j) {
                if(haystack[j] != needle[j - i]) {
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                return i;
        }
        return -1;
    }
};