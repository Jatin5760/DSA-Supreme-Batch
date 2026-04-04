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
    int solve(TreeNode* root, int ans){
        // Base Case
        if(!root){
            return INT_MAX;
        }

        if(!root->left && !root->right){
            return ans;
        }

        ans++;
        int left = solve(root->left, ans);
        int right = solve(root->right, ans);

        ans = min(left, right);
        return ans;

    }
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        int ans = 1;
        return solve(root, ans);
    }
};