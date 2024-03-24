//https://leetcode.com/problems/find-the-duplicate-number/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(mpp[nums[i]] == 0)
                mpp[nums[i]]++;
            else
                {
                    return nums[i];
                }
        }
        return -1;
    }
};