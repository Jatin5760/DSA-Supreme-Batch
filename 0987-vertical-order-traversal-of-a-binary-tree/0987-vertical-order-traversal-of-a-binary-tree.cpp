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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        queue<pair<TreeNode*, int>>q;
        map<int, vector<int>> mp;
        q.push({root, 0});

        while(!q.empty()){
            int size = q.size();
            map<int, multiset<int>> temp; 
            for(int i = 0; i < size; i++){
                pair<TreeNode*, int> frontpair = q.front();
                q.pop();
                TreeNode* front = frontpair.first;
                int hd = frontpair.second;
                temp[hd].insert(front->val); 
                if(front->left != NULL){
                    q.push({front->left, hd-1});
                }
                if(front->right != NULL){
                    q.push({front->right, hd+1});
                }
            }
            for(auto &x : temp){
                for(auto val : x.second){
                    mp[x.first].push_back(val);
                }
            }
        }
        for(auto x: mp){
                ans.push_back(x.second);
            }
        return ans;
    }
};