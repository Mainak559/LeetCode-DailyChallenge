// https://leetcode.com/problems/same-tree/description/


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
    bool isSameTree(TreeNode* p, TreeNode* q) {
          // Base case: if both trees are null, they are identical
        if (p == NULL && q == NULL) {
            return true;
        }
        // If only one tree is null or the values are different, they are not identical
        if (p == NULL || q == NULL || p->val != q->val) {
            return false;
        }
        // Recursively check if the left and right subtrees are identical
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};