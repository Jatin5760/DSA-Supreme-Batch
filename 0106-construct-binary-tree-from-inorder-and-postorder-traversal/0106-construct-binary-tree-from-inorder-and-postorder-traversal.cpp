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
    int findIndex(int element, vector<int>& inorder){
        for(int i = 0; i < inorder.size(); i++){
            if(inorder[i] == element){
                return i;
            }
        }
        return -1;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder,int& postorderIndex, int inorderIndexStart, int inorderIndexEnd){
        // Base Case
        if(postorderIndex < 0){
            return NULL;
        }
        if(inorderIndexStart > inorderIndexEnd){
            return NULL;
        }

        int element = postorder[postorderIndex];
        postorderIndex--;
        TreeNode* root = new TreeNode(element);
        int index = findIndex(element, inorder);
        root->right = buildTree(inorder, postorder, postorderIndex, index + 1, inorderIndexEnd);
        root->left = buildTree(inorder, postorder, postorderIndex, inorderIndexStart, index - 1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postorderIndex = postorder.size() - 1;
        int inorderIndexStart = 0;
        int inorderIndexEnd = inorder.size()-1;

        return buildTree(inorder, postorder, postorderIndex, inorderIndexStart, inorderIndexEnd);
    }
};