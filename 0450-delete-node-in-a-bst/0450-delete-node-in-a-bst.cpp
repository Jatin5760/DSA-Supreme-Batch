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
    int findMax(TreeNode* root){
        if(!root) return -1;
        while(root->right != NULL){
            root = root->right;
        }
        return root->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;

        if(root->val == key){
            if(!root->left && !root->right){
                TreeNode* temp = root;
                delete temp;
                return NULL;
            }
            else if(root->left && !root->right){
                TreeNode* temp = root;
                TreeNode* child = root->left;
                delete temp;
                return child;
            }
            else if(!root->left && root->right){
                TreeNode* temp = root;
                TreeNode* child = root->right;
                delete temp;
                return child;
            }
            else if(root->left && root->right){
                int leftMax = findMax(root->left);
                root->val = leftMax;
                root->left = deleteNode(root->left, leftMax);
            }
        }
        else{
            if(key > root->val){
                root->right = deleteNode(root->right, key);
            }
            else{
                root->left = deleteNode(root->left, key);
            }
        }
        return root;
    }
};