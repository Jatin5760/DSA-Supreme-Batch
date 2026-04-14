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
    void solve(TreeNode* root, vector<int>& inorderArray, int& index){
        if(!root) return;
        solve(root->left, inorderArray, index);
        root->val = inorderArray[index];
        index++;
        solve(root->right, inorderArray, index);
    }
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return NULL;
        if(!root->left && !root->right){
            return root;
        }
        vector<int>inorderArray;
        inorder(root, inorderArray);
        int n = inorderArray.size();
        for(int i = n-1; i >=0; i--){
            int firstEle = inorderArray[i];
            int nextVal = 0;
            if(i + 1 < n){
                nextVal = inorderArray[i+1];
            }
            int sum = firstEle + nextVal;
            inorderArray[i] = sum;
        }
        int index = 0;
        solve(root, inorderArray, index);
        return root;
    }
};