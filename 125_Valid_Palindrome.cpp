



class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 0)
            return true;
        
        string a;
        for (char x : s)
            if (isalnum(x))
                a += tolower(x);
        
        for (int i = 0; i < a.size() / 2; ++i)
            if (a[i] != a[a.size() - i - 1])
                return false;
        
        return true;
    }
};


