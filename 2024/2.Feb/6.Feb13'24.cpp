//https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/?envType=daily-question&envId=2024-02-13

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto i:words){
            string s=i;
            reverse(s.begin(),s.end());
            if(s==i){
                return s;
            }
        }
        return "";
    }
};