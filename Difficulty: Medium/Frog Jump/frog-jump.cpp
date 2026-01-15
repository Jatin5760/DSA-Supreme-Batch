class Solution {
  public:
    int solve(vector<int>& height, vector<int>& dp, int n){
        if(n == 0){
            return 0;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        
        int left = solve(height, dp, n - 1) + abs(height[n] - height[n-1]);
        int right = INT_MAX;
        
        if(n > 1){
            right = solve(height, dp, n - 2) + abs(height[n] - height[n-2]);
        }
        
        return dp[n] = min(left, right);
    }
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        vector<int>dp(n+1, -1);
        return solve(height, dp, n-1);
    }
};