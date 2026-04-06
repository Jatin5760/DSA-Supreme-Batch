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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            bool xFound = false;
            bool yFound = false;
            for(int i = 0; i < size; i++){
                TreeNode* front = q.front();
                q.pop();
                
                // Siblings check
                if(front->left && front->right){
                    if(front->left->val == x && front->right->val == y){
                        return false;
                    }
                    if(front->left->val == y && front->right->val == x){
                        return false;
                    }
                }
                if(front->left){
                    if(front->left->val == x) xFound = true;
                    if(front->left->val == y) yFound = true;
                    q.push(front->left);
                }
                if(front->right){
                    if(front->right->val == x) xFound = true;
                    if(front->right->val == y) yFound = true;
                    q.push(front->right);
                }
            }
            if(xFound && yFound){
                return true;
            }
            if(xFound || yFound){
                return false;
            } 
        }
        return false;
    }
};