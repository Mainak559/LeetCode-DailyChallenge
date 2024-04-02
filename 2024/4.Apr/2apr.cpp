//https://leetcode.com/problems/isomorphic-strings/description/


class Solution {
public:
    bool isIsomorphic(string s, string t) {
         unordered_map<char, char> mpp, mpp2;
         if(s.length() != t.length())
            return false;
        for (int i=0; i<s.length(); ++i) {
            if (mpp[s[i]] && mpp[s[i]]!=t[i]) return false;
            if (mpp2[t[i]] && mpp2[t[i]]!=s[i]) return false;
            mpp[s[i]]=t[i];
            mpp2[t[i]]=s[i];
        }
        return true;
    }
};