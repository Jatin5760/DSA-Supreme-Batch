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
    void solve(TreeNode* root, vector<int>& arr){
        if(!root) return;
        solve(root->left, arr);
        arr.push_back(root->val);
        solve(root->right, arr);
    }
    TreeNode* buildTree(vector<int>& arr, int s, int e){
        if(s > e) return NULL;
        
        int mid  = s + (e - s)/2;
        TreeNode* ans = new TreeNode(arr[mid]);
        ans->left = buildTree(arr, s, mid - 1);
        ans->right = buildTree(arr, mid + 1, e);
        return ans;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>arr;
        solve(root, arr);
        int s = 0;
        int e = arr.size()-1;
        return buildTree(arr, s, e);
    }
};