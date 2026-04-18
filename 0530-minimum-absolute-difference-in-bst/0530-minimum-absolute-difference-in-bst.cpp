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
    TreeNode* prev = NULL;
    int diff = 0;
    int minDiff = INT_MAX;

    void solve(TreeNode* root){
        // Base Case
        if(!root) return;

        solve(root->left);

        TreeNode* curr = root;
        if(prev){
            minDiff = min(minDiff, curr->val - prev->val);
        }
        prev = curr;
        solve(root->right);
        
    }
    int getMinimumDifference(TreeNode* root) {
        solve(root);
        return minDiff;
    }
};