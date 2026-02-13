class Solution {
public:
    int solve(int n, vector<int>& dp){
        //  Base Case

        // if(n == 0){
        //     return 1;
        // }

        // if(n == 1){
        //     return 1;
        // }

        dp[0] = 1;
        dp[1] = 1;

        // if(dp[n] != -1){
        //     return dp[n];
        // }

        for(int i = 2; i <= n; i++){
            int ans = dp[i - 1] + dp[i-2];
            dp[i] = ans;
            
        }
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n + 1, -1);
        int ans = solve(n, dp);
        return ans;
    }
};