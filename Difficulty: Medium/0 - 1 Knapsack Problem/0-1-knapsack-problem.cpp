class Solution {
  public:
  
    int solve(int W, vector<int> &val, vector<int> &wt, int index, vector<vector<int>>& dp){
        // Base Case
        int ans = 0;
        if(index ==  wt.size()){
            return 0;
        }
        
        if(dp[W][index] != -1){
            return dp[W][index];
        }
        
        int include = 0;
        int exclude = 0;
        
        // Include
        if(wt[index] <= W){
            include = val[index] + solve(W-wt[index], val, wt, index+1, dp);
        }
        // Exclude
        exclude = 0 + solve(W, val, wt,index+1, dp);

        ans = max(include, exclude);
        dp[W][index] = ans;
        return ans;
    }
    
    
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int index = 0;
        int n = wt.size();
        vector<vector<int>>dp(W+1, vector<int>(n+1, -1));
        int ans = solve(W, val, wt, index, dp);
        return ans;
    }
};