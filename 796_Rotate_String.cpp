



class Solution {
    string shift(string A) {
        string res = A.substr(1, A.size() - 1);
        res += A[0];
        return res;
    }
public:
    bool rotateString(string A, string B) {
        if (A == B)
            return true;
        for (int i = 0; i < A.size(); ++i) {
            A = shift(A);
            if (A == B)
                return true;
        }
        return false;
    }
};


