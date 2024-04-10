//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/?envType=daily-question&envId=2024-04-04

class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;

        stack<char> st;
        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                st.pop();
            }
            
            ans = max(ans, (int)st.size());
        }
        
        return ans;
    }
};