class Solution {
public:
    int solve(int n, vector<int>& dp){
        //  Base Case

        if(n == 0){
            return 1;
        }

        if(n == 1){
            return 1;
        }

        if(dp[n] != -1){
            return dp[n];
        }
        
        int ans = solve(n - 1, dp) + solve(n-2, dp);
        dp[n] = ans;
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n + 1, -1);
        int ans = solve(n, dp);
        return ans;
    }
};