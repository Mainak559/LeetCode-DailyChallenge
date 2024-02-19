// https://leetcode.com/problems/majority-element/description/?envType=daily-question&envId=2024-02-12

class Solution {
public:
    int majorityElement(vector<int>& v) {
        int cnt =0;
        int el = INT_MAX;
        int n = v.size();
        for(int i = 0 ; i < n ;i++)
        {
            if(cnt ==0)
            {
                cnt = 1;
                el = v[i];
            }
            else if(v[i] == el)
            {
                cnt++;
            }
            else
                cnt--;
        }

        int cnt1= 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(v[i] == el)
                cnt1++;
        }

        if(cnt1 > n/2)
            return el;
        
         return -1;
    }
};