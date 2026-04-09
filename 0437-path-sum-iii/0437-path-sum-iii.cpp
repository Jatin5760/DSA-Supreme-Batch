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
    void solve(TreeNode* root, int& targetSum, long long currSum, unordered_map<long long, int>& mp, int& count){
        if(!root) return;

        currSum += root->val;

        if(mp.find(currSum - targetSum) != mp.end()){
            count += mp[currSum - targetSum];
        }
        mp[currSum]++;
        solve(root->left, targetSum, currSum, mp, count);
        solve(root->right, targetSum, currSum, mp, count);
        mp[currSum]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int>mp;
        mp[0] = 1;
        long long currSum = 0;
        int count = 0;
        solve(root, targetSum, currSum, mp, count);
        return count;
    }
};