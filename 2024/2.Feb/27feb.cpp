//https://leetcode.com/problems/diameter-of-binary-tree/submissions/1187470102/?envType=daily-question&envId=2024-02-27

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
    int f(TreeNode* root , int &diameter)
    {
        if(root == NULL) return 0;

        int left_height = f(root->left, diameter);
        int right_height = f(root -> right , diameter);

        diameter = max(diameter , left_height + right_height);
        return 1+ max(left_height , right_height);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter =0;
        f(root,diameter);
        return diameter;
    }
};