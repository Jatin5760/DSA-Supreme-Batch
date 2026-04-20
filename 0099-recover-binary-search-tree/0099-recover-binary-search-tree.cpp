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
    void inorder(TreeNode* root, vector<int>& ans){
        if(!root) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    void build(TreeNode* root, int& index, vector<int>& ans){
        if(!root) return;
        if(index >= ans.size()) return;

        build(root->left, index, ans);
        root->val = ans[index];
        index++;
        build(root->right, index, ans);
        
    }
    void recoverTree(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        sort(ans.begin(), ans.end());
        
        int index = 0;
        build(root, index, ans);
    }
};