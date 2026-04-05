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
    int find(vector<int>& postorder, int index){
        for(int i = 0; i < postorder.size(); i++){
            if(postorder[i] == index){
                return i;
            }
        }
        return -1;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& postorder, int preorderStart, int postorderStart, int preorderEnd){
        // Base Cases
        if(preorderStart > preorderEnd){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[preorderStart]);
        
        if(preorderStart == preorderEnd){
            return root;
        }
        int nextNode = preorder[preorderStart + 1];

        int index = find(postorder, nextNode);
        int num = index - postorderStart + 1;

        root->left = buildTree(preorder, postorder, preorderStart + 1, postorderStart, preorderStart + num);
        root->right = buildTree(preorder, postorder, preorderStart + num + 1, index + 1, preorderEnd);

        return root;

    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int preorderStart = 0; 
        int postorderStart = 0; 
        int preorderEnd = preorder.size() - 1;

        return buildTree(preorder, postorder, preorderStart, postorderStart, preorderEnd);
    }
};