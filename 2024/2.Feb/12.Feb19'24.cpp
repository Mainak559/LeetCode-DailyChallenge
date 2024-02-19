// https://leetcode.com/problems/power-of-two/description/?envType=daily-question&envId=2024-02-19

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        while( n%2 == 0 && n > 1)
        {
            if(n%2 != 0)
                return false;
            n=n/2;
        }
        if(n==1)
            return true;
        
        return false;
    }
};