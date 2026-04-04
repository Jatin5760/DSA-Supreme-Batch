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
    void solve(TreeNode* root, int level, vector<int>& ans){
        // Base case
        if(!root){
            return;
        }
        // Logic
        if(level == ans.size()){
            ans.push_back(root->val);
        }
        level++;
        solve(root->right, level, ans);
        solve(root->left, level, ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        int level = 0;
        vector<int> ans;
        solve(root, level, ans);
        return ans;
    }
};