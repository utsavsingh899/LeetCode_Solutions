


class Solution {
public:
    int subarrayBitwiseORs(vector<int>& A) {
        unordered_set<int> res, temp, curr;
        temp.insert(0);
        
        for (int n : A) {
            curr = {n};
            for (int x : temp)
                curr.insert(x | n);
            
            temp = curr;
            
            for (int x : temp)
                res.insert(x);
        }
        
        return res.size();
    }
};

