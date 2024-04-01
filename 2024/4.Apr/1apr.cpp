//https://leetcode.com/problems/length-of-last-word/description/?envType=daily-question&envId=2024-04-01


class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int length = 0;
        for(int i=n-1; i>=0; i--){
            if(s[i]!=' ')
                length++ ;
            if(s[i]==' ' && length!=0)
                break;
            
        }
        return length;
    }
};