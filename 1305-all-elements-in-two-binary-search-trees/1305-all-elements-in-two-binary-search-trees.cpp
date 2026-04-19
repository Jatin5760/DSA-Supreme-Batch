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
    void solve(TreeNode* root, vector<int>& arr){
        if(!root) return;

        // LNR
        solve(root->left, arr);
        arr.push_back(root->val);
        solve(root->right, arr);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>l1;
        vector<int>l2;
        solve(root1, l1);
        solve(root2, l2);

        vector<int> ans;
        int i = 0;
        int j = 0;

        while(i < l1.size() && j < l2.size()){
            if(l1[i] <= l2[j]){
                ans.push_back(l1[i]);
                i++;
            }
            else{
                ans.push_back(l2[j]);
                j++;
            }
        }
        while(i < l1.size()){
            ans.push_back(l1[i]);
            i++;
        }

        while(j < l2.size()){
            ans.push_back(l2[j]);
            j++;
        }
        return ans;
    }
};