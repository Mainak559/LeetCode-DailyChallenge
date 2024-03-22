//https://leetcode.com/problems/palindrome-linked-list/submissions/1210659555/?envType=daily-question&envId=2024-03-22



class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // Some Brute Force Steps to follow
        // 1) Reverse the list and store it in r_head;
        // and then compare head->val and r_head->val if equal move both the pointers otherwise if not equal return false.
        // When the loop will be executed fully retrun true
         if(head == NULL || head->next == NULL){
            return (head);
        }
        ListNode *r_head = NULL;
        ListNode *ptr = head;
        while(ptr!=NULL){
            ListNode *temp = new ListNode(ptr->val);
            temp ->next = r_head;
            r_head = temp;
            ptr = ptr->next;
        }
        while(head && r_head){
            if(head->val != r_head->val){
                return false;
            }
            head = head->next;
            r_head = r_head->next;
        }
        return true;
    }
};