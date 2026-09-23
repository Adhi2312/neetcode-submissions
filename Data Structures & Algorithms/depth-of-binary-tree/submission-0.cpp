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
    int maxi=0;
    void depth(TreeNode* root,int i)
    {
        if(!root){maxi=max(maxi,i);return;}
        depth(root->left,i+1);
        depth(root->right,i+1);
    }
    int maxDepth(TreeNode* root) {
     depth(root,0);
     return maxi;   
    }
};
