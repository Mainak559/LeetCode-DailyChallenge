//https://leetcode.com/problems/rearrange-array-elements-by-sign/description/?envType=daily-question&envId=2024-02-14

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
      vector<int> pos;
      vector<int> neg;

      for(int i = 0 ; i < n ; i++)
      {
          if(nums[i] < 0 )
            neg.push_back(nums[i]);
          else
            pos.push_back(nums[i]);
      }

      if(pos.size() < neg.size())
      {
          for(int i =0 ; i< pos.size(); i++)
          {
              nums[2*i] = pos[i];
              nums[2*i  + 1] = neg[i];
          }

          //if extra neg are left
          int index = 2*pos.size();
          for(int i = pos.size() ; i < neg.size(); i++)
          {
              nums[index] = neg[i];
              index++;
          }
      }
      else
      {
          for(int i = 0 ; i < neg.size() ; i++)
          {
              nums[2*i] = pos[i];
              nums[2*i +1] = neg[i];
          }

          //if extra pos are left
          int index = 2* neg.size();

          for(int i = neg.size() ; i < pos.size();i++)
          {
              nums[index] = pos[i];
              index++;
          }
      }
        return nums;


    }
};