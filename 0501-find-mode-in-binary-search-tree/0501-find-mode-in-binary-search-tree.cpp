/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    TreeNode* prev = NULL; 
    int count = 0;
    int maxCount = 0;

public:
    void solve(TreeNode* root, vector<int>& ans){
        // Base Case
        if(!root) return;

        solve(root->left, ans);

        TreeNode* curr = root;
        if(prev && prev->val == curr->val){
            count++;
        }
        else{
            count = 1;
        }
        prev = curr;
        if(count > maxCount){
            maxCount = count;
            ans.clear();
            ans.push_back(curr->val);
        }else if(count == maxCount){
            ans.push_back(curr->val);
        }
        solve(root->right, ans);
        
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};