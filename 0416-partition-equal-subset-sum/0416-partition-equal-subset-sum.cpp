class Solution {
public:
    bool solve(vector<int>& nums, int target, int index, vector<vector<int> >& dp){
        // Base Case
        if(target == 0){
            return 1;
        }
        int n = nums.size();
        if(index >= n) return 0;
        if(index < 0) return 0;
        if(dp[index][target] != -1){
            return dp[index][target];
        }
        bool include = 0;
        if(nums[index] <= target){
            include = solve(nums, target - nums[index], index + 1, dp);
        }
        bool exclude = solve(nums, target, index + 1, dp);
        dp[index][target] = (include || exclude);
        return dp[index][target];
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        if(sum % 2 != 0) return false;
        int target = sum / 2;
        int index = 0;
        vector<vector<int>> dp(nums.size(), vector<int>(target + 1, -1));
        bool ans = solve(nums, target, index, dp);
        return ans;
    }
};