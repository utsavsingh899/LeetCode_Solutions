


class Solution {
public:
    string reverseOnlyLetters(string S) {
        string str;
        for (char x : S)
            if (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
                str += x;
        
        reverse(str.begin(), str.end());
        
        int i = 0;
        for (char& x : S)
            if (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
                x = str[i++];
        
        return S;
    }
};

