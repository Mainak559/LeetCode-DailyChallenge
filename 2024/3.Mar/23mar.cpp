//https://leetcode.com/problems/reorder-list/submissions/1211563509/?envType=daily-question&envId=2024-03-23


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*> v;
        ListNode* curr = head;
        int n = 0, i = 0;
        while(curr != NULL){
            v.push_back(curr);
            curr = curr->next;
            n++;
        }
        if(n == 1) return;
        for(i = 0; i < n/2; i++){
            if(i == 0){
                curr = v[i];
                curr->next = v[n-i-1];
                curr = curr->next;
            }else{
                curr->next = v[i];
                curr = curr->next;
                curr->next = v[n-i-1];
                curr = curr->next;
            }
        }
        if(n%2){
            curr->next = v[i];
            curr = curr->next;
        }
        curr->next = NULL;
        return; 
    }
};