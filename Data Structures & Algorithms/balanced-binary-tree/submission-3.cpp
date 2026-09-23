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
    bool bal=true;
    int depth(TreeNode* root)
    {
        if(!root)return 0;
        if(!bal)return 0;
        int left=depth(root->left);
        int right=depth(root->right);
        bal&=abs(right-left)<2;
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        depth(root);

        return bal;
    }
};