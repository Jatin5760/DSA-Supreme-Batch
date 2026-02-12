class Solution {
public:
// Tabulation
    int solveTabulation(vector<int>&nums, int index, vector<int>&dp){
        int n = nums.size();
        dp[n] = 0;
        for(int i = n - 1; i >= 0; i--){
            int temp = 0;
            if(i+2 <= n){
                temp = dp[i+2];
            }
            int include = nums[i] + temp;
            int exclude = 0 + dp[i + 1];
            dp[i] = max(include, exclude);
        }
        return dp[0];
    }

    // This is memoization

    // int solve(vector<int>&nums, int index, vector<int>&dp){
    //     if(index >= nums.size()){
    //         return 0;
    //     }
    //     if(dp[index] != -1){
    //         return dp[index];
    //     }
    //     int include = nums[index] + solve(nums, index + 2, dp);
    //     int exclude = 0 + solve(nums, index + 1, dp);
    //     int ans = max(include, exclude);
    //     dp[index] = ans;
    //     return ans;
    // }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1, -1);
        int ans = solveTabulation(nums, 0, dp);
        return ans;
    }
};