//https://leetcode.com/problems/find-the-pivot-integer/?envType=daily-question&envId=2024-03-13



class Solution {
public:
    int pivotInteger(int n) {
        double x = sqrt(n * (n + 1) / 2.0);
        
        if (fmod(x, 1.0) != 0) {
            return -1;
        } else {
            return static_cast<int>(x);
        }
    }
};