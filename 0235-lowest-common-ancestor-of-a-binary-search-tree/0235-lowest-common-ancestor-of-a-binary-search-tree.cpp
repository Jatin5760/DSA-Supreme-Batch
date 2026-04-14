/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if(!root) return NULL;

        // if(root->val == p->val){
        //     return p;
        // }

        // if(root->val == q->val){
        //     return q;
        // }

        // TreeNode* left = lowestCommonAncestor(root->left, p, q);
        // TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // if(!left && !right){
        //     return NULL;
        // }
        // else if(left && !right){
        //     return left;
        // } 
        // else if(!left && right){
        //     return right;
        // }
        // return root;


        // Approach 2 (log n)
        if(!root) return NULL;
        if(p->val < root->val && q->val < root->val){
            TreeNode* left = lowestCommonAncestor(root->left, p, q);
            if(left != NULL){
                return left;
            }
        }
        if(p->val > root->val && q->val > root->val){
            TreeNode* right = lowestCommonAncestor(root->right, p, q);
            if(right != NULL){
                return right;
            }
        }
        return root;
    }
};