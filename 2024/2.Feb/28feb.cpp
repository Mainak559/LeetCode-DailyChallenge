//https://leetcode.com/problems/find-bottom-left-tree-value/description/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
       queue<TreeNode*>q;

        q.push(root);
        TreeNode *a=NULL;
        while(!q.empty()){
            a = q.front();
            q.pop();

            if(a->right){
                q.push(a->right);
            }
            if(a->left){
                q.push(a->left);
            }
        }
        return a->val; 
    }
};