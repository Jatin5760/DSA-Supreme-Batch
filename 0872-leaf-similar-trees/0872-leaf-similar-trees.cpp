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
    void solve(TreeNode* root, string &l){
        // Base Case
        if(root == NULL) return;

        if(root->left == NULL && root->right == NULL){
            l += to_string(root->val) +  ",";
        }
    
        solve(root->left, l);
        solve(root->right, l);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return true;
        if(!root1 || !root2) return false;
        string l1 = "";
        string l2 = "";
        
        solve(root1,l1);
        solve(root2, l2);
        if(l1 == l2){
            return true;
        }
        return false;
    }
};