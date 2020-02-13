class Solution {
public:
    string breakPalindrome(string palindrome) {
        if (palindrome.size() == 1)
            return "";
        // if (palindrome[0] != 'a') {
        //     palindrome[0] = 'a';
        //     return palindrome;
        // }
        int i;
        for (i = 0; i < palindrome.size() / 2; ++i)
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        palindrome[palindrome.size() - 1] = 'b';
        return palindrome;
    }
};