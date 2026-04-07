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
    unordered_map<TreeNode*, TreeNode*> parent;
    void inorder(TreeNode* root){
        if(!root)return;
        if(root->left != NULL){
            parent[root->left] = root;
        }
        inorder(root->left);
        if(root->right != NULL){
            parent[root->right] = root;
        }
        inorder(root->right);
    }

    void BFS(TreeNode* target, int k, vector<int>&result){
        queue<TreeNode*> q;
        q.push(target);
        unordered_set<int> visited;
        visited.insert(target->val);
        while(!q.empty()){
            int n = q.size();
            if(k == 0){
                break;
            }
            for(int i = 0; i < n; i++){
                TreeNode* front = q.front();
                q.pop();
                if(front->left != NULL && !visited.count(front->left->val)){
                    q.push(front->left);
                    visited.insert(front->left->val);
                }
                if(front->right != NULL && !visited.count(front->right->val)){
                    q.push(front->right);
                    visited.insert(front->right->val);
                }
                 if(parent.count(front) && !visited.count(parent[front]->val)){
                    q.push(parent[front]);
                    visited.insert(parent[front]->val);
                }
            }
            k--;
        }
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            result.push_back(temp->val);
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>result;
        inorder(root);
        BFS(target, k, result);
        return result;
    }
};