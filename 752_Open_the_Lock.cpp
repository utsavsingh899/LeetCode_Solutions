class Solution {
    vector<string> neighbours(string code) {
        vector<string> res;
        
        for (int i = 0; i < 4; ++i) {
            for (int diff = -1; diff <= 1; diff += 2) {
                string curr = code;
                curr[i] = (curr[i] - '0' + diff + 10) % 10 + '0';
                res.push_back(curr);
            }
        }
        
        return res;
    }
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> seen(deadends.begin(), deadends.end());
        
        if (seen.count("0000"))
            return -1;
        
        queue<string> q;
        
        q.push("0000");
        seen.insert("0000");
        
        for (int steps = 0; !q.empty(); ++steps) {
            for (int i = q.size(); i > 0; --i) {
                string curr = q.front();
                q.pop();

                if (curr == target)
                    return steps;
                
                for (string neighbour : neighbours(curr)) {
                    if (seen.count(neighbour))
                        continue;
                    
                    q.push(neighbour);
                    seen.insert(neighbour);
                }
            }
        }
        
        return -1;
    }
};