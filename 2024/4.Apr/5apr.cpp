//https://leetcode.com/problems/make-the-string-great/?envType=daily-question&envId=2024-04-05

class Solution {
public:
    string makeGood(string s) {
        std::stack<char> stack;
        
        for (char c : s) {
            if (!stack.empty() && std::abs(c - stack.top()) == 32) {
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        
        std::string result;
        while (!stack.empty()) {
            result = stack.top() + result;
            stack.pop();
        }
        
        return result;
    }
};