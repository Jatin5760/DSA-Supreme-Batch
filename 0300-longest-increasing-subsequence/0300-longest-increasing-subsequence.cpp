class Solution {
public:
    // Recurrsion

    // int solve(vector<int>& nums, int prev, int curr){
    //     // Base Case
    //     if(curr >= nums.size()){
    //         return 0;
    //     }

    //     // One case
    //     int include = 0;
    //     if(prev == -1 || nums[prev] < nums[curr]){
    //         include = 1 + solve(nums, curr, curr+1);
    //     }
    //     int exclude = 0 + solve(nums, prev, curr+1);
    //     return max(include, exclude);
    // }

    // Memoization
    // int solve(vector<int>& nums, int prev, int curr, vector<vector<int>>&
    // dp){
    //     // Base Case
    //     if(curr >= nums.size()){
    //         return 0;
    //     }
    //     if(dp[curr][prev + 1] != -1){
    //         return dp[curr][prev+1];
    //     }
    //     // One case
    //     int include = 0;
    //     if(prev == -1 || nums[prev] < nums[curr]){
    //         include = 1 + solve(nums, curr, curr+1, dp);
    //     }
    //     int exclude = 0 + solve(nums, prev, curr+1, dp);
    //     int finalAns =  max(include, exclude);
    //     dp[curr][prev + 1] = finalAns;
    //     return finalAns;
    // }

    // Tabulation
    int solve(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        for (int curr = n - 1; curr >= 0; curr--) {
            for (int prev = curr - 1; prev >= -1; prev--) {
                int include = 0;
                if (prev == -1 || nums[prev] < nums[curr]) {
                    include = 1 + dp[curr+1][curr+1];
                }
                int exclude = 0 + dp[curr+1][prev+1];
                int finalAns = max(include, exclude);
                dp[curr][prev + 1] = finalAns;
            }
        }
        return dp[0][0];
    }

    int lengthOfLIS(vector<int>& nums) {
        int prev = -1;
        int curr = 0;
        // int n = nums.size();
        // vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        // int ans = solve(nums, prev, curr, dp);
        int ans = solve(nums);
        return ans;
    }
};