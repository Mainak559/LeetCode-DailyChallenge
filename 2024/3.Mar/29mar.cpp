//https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/submissions/1217136882/

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long int max_num = *max_element(nums.begin(),nums.end()),count = 0;
        long long int left = 0,right = 0,ans = 0;
        while(right<nums.size()){
            if(nums[right] == max_num)count++;
            
            while(count>=k){
                if(nums[left]==max_num)count--;
                left++;
                ans += nums.size()-right;
            }    
            right++;
        }


        return ans;
    }
};