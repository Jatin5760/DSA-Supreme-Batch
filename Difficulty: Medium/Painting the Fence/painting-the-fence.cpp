class Solution {
  public:
    int solve(int n, int k, vector<int>&dp){
        // Base Case
        if(n == 1){
            return k;
        }
        if(n == 2){
            return k * k;
        }
        
        if(dp[n]!= -1){
            return dp[n];
        }
        
        int ans = (solve(n-2, k, dp) + solve(n-1, k, dp))*(k-1); 
        dp[n] = ans;
        
        return ans;
    }
    int countWays(int n, int k) {
        // code here
        vector<int>dp(n+1, -1);
        int ans = solve(n, k, dp);
        return ans;
    }
};