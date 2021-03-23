




class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int, int> mymap;
        int i;

        for (i = 0; i < A.size(); ++i)
            ++mymap[A[i]];

        for (i = 0; i < A.size(); ++i)
            if (mymap[A[i]] > 1)
                break;

        return A[i];
    }
};



