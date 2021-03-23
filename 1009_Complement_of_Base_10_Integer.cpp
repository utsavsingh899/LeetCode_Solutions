




class Solution {
public:
    int bitwiseComplement(int N) {
        if (N == 0)
            return 1;
        
        int res = 0;
        
        for (int i = 0; i < floor(log2(N)); ++i)
            if (!(N & (1 << i)))
                res |= (1 << i);
            
        return res;
    }
};




