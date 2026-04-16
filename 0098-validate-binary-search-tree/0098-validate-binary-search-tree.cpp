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
class Info {
    public:
        long long minVal;
        long long maxVal;
        bool isBST;
};

class Solution {
public:
    Info solve(TreeNode* root){
        // Base case
        if(root == NULL){
            Info temp;
            temp.minVal = LLONG_MAX;
            temp.maxVal = LLONG_MIN;
            temp.isBST = true;
            return temp;
        }

        // LRN
        Info leftAns = solve(root->left);
        Info rightAns = solve(root->right);

        // Node
        Info currAns;
        if(root->val > leftAns.maxVal && root->val < rightAns.minVal && leftAns.isBST && rightAns.isBST){
            currAns.isBST = true;
            currAns.minVal = min((long long )root->val, leftAns.minVal);
            currAns.maxVal = max((long long )root->val, rightAns.maxVal);
        }
        else{
            currAns.isBST = false;
            currAns.minVal = LLONG_MIN;
            currAns.maxVal = LLONG_MAX;
        }
        return currAns;

    }
    bool isValidBST(TreeNode* root) {
        Info ans = solve(root);
        
        if(ans.isBST){
            return true;
        }
        return false;
    }
};