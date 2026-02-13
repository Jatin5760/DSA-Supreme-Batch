class Solution {
  public:
    int solve(vector<int>& height, int index, vector<int>&dp){
        //  Base Case
        if(index >= height.size() - 1){
            return 0;
        }
        
        if(dp[index] != -1){
            return dp[index];
        }
        int left = solve(height, index + 1, dp) + abs(height[index+1] - height[index]);
        int right = INT_MAX;
        
        if((index + 2) < height.size()){
            right = solve(height, index + 2, dp) + abs(height[index + 2] - height[index]);
        }
        
        int ans = min(left, right);
        dp[index] = ans;
        return dp[index];
    }
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        int index = 0;
        vector<int>dp(n + 1, -1);
        int ans = solve(height, index, dp);
        return ans;
    }
};