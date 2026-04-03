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
    int getIndex(vector<int>& inorder, int element){
        for(int i = 0; i < inorder.size(); i++){
            if(inorder[i] == element){
                return i;
            }
        }
        return -1;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int& preOrderIndex, int inorderStartIndex, int inorderEndIndex){
        // Base case
        if(preOrderIndex > preorder.size()){
            return NULL;
        }

        if(inorderStartIndex > inorderEndIndex){
            return NULL;
        }

        int element = preorder[preOrderIndex];
        preOrderIndex++;

        TreeNode* root = new TreeNode(element);
        int index = getIndex(inorder, element);

        root->left = buildTree(preorder, inorder, preOrderIndex, inorderStartIndex, index-1);
        root->right = buildTree(preorder, inorder, preOrderIndex, index+1, inorderEndIndex);

        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preOrderIndex = 0;
        int inorderStartIndex = 0;
        int inorderEndIndex = inorder.size() - 1; 
        return buildTree(preorder, inorder, preOrderIndex, inorderStartIndex, inorderEndIndex);
    }
};