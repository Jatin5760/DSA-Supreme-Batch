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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode* ans = NULL;
            ans = new TreeNode(val);
            return ans;
        };

        if(root->val > val){
            if(root->left != NULL){
                root->left = insertIntoBST(root->left, val);
            }
            else{
                root->left = new TreeNode(val);
            }
        }
        else{
            if(root->right != NULL){
                root->right = insertIntoBST(root->right, val);
            }
            else{
                root->right = new TreeNode(val);
            }
        }
        return root;
    }
};