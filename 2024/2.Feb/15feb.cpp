//https://leetcode.com/problems/find-polygon-with-the-largest-perimeter/description/?envType=daily-question&envId=2024-02-15


class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
          sort(nums.begin(), nums.end());
        long long sum = 0;
        int n = nums.size();
        for(int i = 0; i <n; i++){
            sum+=nums[i];
        }
        int k = n;
        while(k>=3){
            if(sum-nums[k-1]> nums[k-1]) return sum;
            sum-=nums[k-1];
            k--;
        }          
        return -1;    
    }
};