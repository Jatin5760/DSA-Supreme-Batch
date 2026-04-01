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
    int height(TreeNode* root){
        // Base Case
        if(root == NULL){
            return 0;
        }
        // left
        int left = 1 + height(root->left);
        // right
        int right = 1 + height(root->right);
        int ans = max(left, right);
        return ans;
    };

    bool isBalanced(TreeNode* root) {
        // Base Case
        if(root == NULL){
            return true;
        }

        int h1 = height(root->left);
        int h2 = height(root->right);

        int diff = abs(h1-h2);
        if(diff > 1){
            return false;
        }
        else{
            bool left = isBalanced(root->left);
            bool right = isBalanced(root->right);
            if(!left || !right){
                return false;
            }
        }
        return true;
    }
};