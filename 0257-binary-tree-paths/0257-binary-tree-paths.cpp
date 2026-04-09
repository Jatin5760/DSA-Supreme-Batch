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
    void solve(TreeNode* root, string path, vector<string>& ans){
        if(!root) return;
        path += to_string(root->val);
        
        if(root->left == NULL && root->right == NULL){
            ans.push_back(path);
            return;
        }
        path += "->";
        solve(root->left,path,ans);
        solve(root->right,path, ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(!root) return ans;
        solve(root,"",ans);
        return ans;
    }
};