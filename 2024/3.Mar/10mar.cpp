//https://leetcode.com/problems/intersection-of-two-arrays/submissions/1199152273/?envType=daily-question&envId=2024-03-10


class Solution {
public:

   
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       
        vector<int> vec;

        for(int i = 0;i<nums1.size();i++){
            for(int j = 0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    vec.push_back(nums1[i]);
                }
            }
        }
        sort(vec.begin(),vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        return vec;

        
    }
};