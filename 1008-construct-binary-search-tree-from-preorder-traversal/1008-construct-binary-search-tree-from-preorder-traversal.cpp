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
    TreeNode* solve(vector<int>& preorder, int& index, int mini, int maxi){
        if(index >= preorder.size()){
            return NULL;
        }
        TreeNode* root;
        if(preorder[index] > mini && preorder[index] < maxi){
            root = new TreeNode(preorder[index]);
            index++;
        }
        else{
            return NULL;
        }
        root->left = solve(preorder, index, mini, root->val);
        root->right = solve(preorder, index, root->val, maxi);
        
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        int mini = INT_MIN;
        int maxi = INT_MAX;
      return solve(preorder, index, mini, maxi);
    }
};