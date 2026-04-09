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
    void solve(TreeNode* root, vector<int>&ans, int sum){
        if(root == NULL) return;

        sum = sum * 10 + (root->val);
        if(!root->left&& !root->right){
            ans.push_back(sum);
            return;
        }
        solve(root->left, ans, sum);
        solve(root->right, ans, sum);
    }
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        vector<int>ans;
        int sum = 0;
        solve(root, ans, sum);

        int finalAns = 0;
        for(int i = 0; i < ans.size(); i++){
            finalAns += ans[i];
        }
        return finalAns;
    }
};