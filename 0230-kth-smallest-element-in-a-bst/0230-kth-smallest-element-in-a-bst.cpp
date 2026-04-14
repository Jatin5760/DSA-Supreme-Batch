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
    void inorder(TreeNode* root, vector<int>& inorderArray){
        if(!root) return;
        inorder(root->left, inorderArray);
        inorderArray.push_back(root->val);
        inorder(root->right, inorderArray);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorderArray;
        inorder(root, inorderArray);
        return inorderArray[k-1];
    }
};