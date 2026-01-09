class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<int>& temp,  vector<vector<int>>& ans, int index){
        // Base Case
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        if(index == candidates.size()){
            return;
        }

        if(candidates[index] <= target){
            temp.push_back(candidates[index]);
            solve(candidates, target - candidates[index], temp, ans, index);
            temp.pop_back();
        }
        solve(candidates, target, temp, ans, index + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(candidates, target, temp, ans, 0);
        return ans;
    }
};