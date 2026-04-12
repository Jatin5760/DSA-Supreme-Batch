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
    int ans = 0;
    int solve(TreeNode* root, int maxi, int mini){
        if(!root) return 0;
        
        maxi = max(maxi, root->val);
        mini = min(mini, root->val);

        int diff = (maxi - mini);
        ans = max(ans, diff);

        if(root->left != NULL){
            solve(root->left, maxi, mini);
        }
        if(root->right != NULL){
            solve(root->right, maxi, mini);
        }
        return ans;
    }
    int maxAncestorDiff(TreeNode* root) {
        int maxi = root->val;
        int mini = root->val;
        return solve(root, maxi, mini);
    }
};