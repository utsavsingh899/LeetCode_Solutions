class Solution
{
public:
    bool isVowel(char c)
    {
        char ch[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for (auto x : ch)
            if (x == c)
                return true;
        return false;
    }
    string reverseVowels(string s)
    {
        stack<char> v;
        for (auto c : s)
            if (isVowel(c))
                v.push(c);
        for (auto &c : s)
            if (isVowel(c))
            {
                c = v.top();
                v.pop();
            }
        return s;
    }
};