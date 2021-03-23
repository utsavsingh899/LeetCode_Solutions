class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        int temp, curr;
        bool flag;
        
        for (int i = left; i <= right; ++i) {
            flag = false;
            curr = i;
            while (curr) {
                temp = curr % 10;
                if (temp == 0 || i % temp != 0) {
                    flag = true;
                    break;
                }
                curr /= 10;
            }
            if(!flag)
                ans.push_back(i);
        }

        return ans;
    }
};