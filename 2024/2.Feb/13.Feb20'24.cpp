//https://leetcode.com/problems/missing-number/description/?envType=daily-question&envId=2024-02-20


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        for(int i = 0 ; i < n ;i++)
        {
            st.insert(nums[i]);
        }

        for(int i = 0 ; i <= n; i++)
        {
            if(st.find(i) == st.end())
                return i;
        }

        return -1;
    }
};