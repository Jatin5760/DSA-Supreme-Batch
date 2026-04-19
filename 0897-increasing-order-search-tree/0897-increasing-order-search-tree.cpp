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
    TreeNode* dummy = new TreeNode(-1);
    TreeNode* prev = dummy;
    
    TreeNode* solve(TreeNode* root){
        if(!root) return NULL;

        // L
        solve(root->left);

        // N
        TreeNode* curr = root;
        prev->right = curr;
        curr->left = NULL;
        prev = curr;

        // R
        solve(root->right);

        return dummy->right;
    }
    TreeNode* increasingBST(TreeNode* root) {
        return solve(root);
    }
};