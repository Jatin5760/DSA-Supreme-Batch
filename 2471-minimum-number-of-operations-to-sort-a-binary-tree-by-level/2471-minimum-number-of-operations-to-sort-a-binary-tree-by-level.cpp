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
    int minSwaps(vector<int>& nums) {
    int n = nums.size();
    vector<pair<int,int>> v;
    
    for(int i = 0 ; i < n ; i++){
        v.push_back({nums[i], i});
    }
    
    sort(v.begin(), v.end());
    int swaps = 0;
    for(int i = 0 ; i < n ; i++){
        int index = v[i].second;
        
        if(i != index){
            swaps++;
            swap(v[i], v[index]);
            i--;  
        }
    }
    return swaps;
};
    int minimumOperations(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*>q;
        int swaps = 0;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<int>temp;
            for(int i = 0; i < size; i++){
                TreeNode* front = q.front();
                q.pop();
                temp.push_back(front->val);
                if(front->left != NULL){
                    q.push(front->left);
                }
                if(front->right != NULL){
                    q.push(front->right);
                }
            }
            swaps += minSwaps(temp);
        }
        return swaps;
    }
};