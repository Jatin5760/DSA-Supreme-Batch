class Solution {
public:
    void solve(int index, int target, vector<int>& candidates, vector<int>&temp, vector<vector<int>>& ans){
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
            solve(index, target - candidates[index], candidates, temp, ans);
            temp.pop_back();
        }
        solve(index+1, target, candidates, temp, ans);
    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>temp;
        solve(0, target, candidates, temp, ans);
        return ans;
    }
};