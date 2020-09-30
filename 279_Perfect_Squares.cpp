class Solution {  
public:  
    int is_square(int n){  
        int temp = (int) sqrt(n);  
        return temp * temp == n;  
    }  
    int numSquares(int n) {  
        while ((n % 4) == 0)  
            n /= 4;
        
        if ((n % 8) == 7)
            return 4;
        
        if(is_square(n))
            return 1; 
        
        int sqrtn = (int)sqrt(n);  
        
        for(int i = 1; i <= sqrtn; i++) 
            if (is_square(n - i * i))
                return 2;
        
        return 3;  
    }  
};