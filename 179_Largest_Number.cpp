

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> s;
        for (int i = 0; i < nums.size(); ++i)
            s.push_back(to_string(nums[i]));
        
        sort(s.begin(), s.end(), [&](string& a, string& b) {
            string ta = a + b, tb = b + a;
            return ta > tb;
        });
        
        if (s[0] == "0")
            return "0";
        
        string res;
        for (string x : s)
            res += x;
        
        return res;
    }
};
