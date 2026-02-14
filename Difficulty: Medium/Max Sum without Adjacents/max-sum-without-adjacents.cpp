// User function template for C++
class Solution {
  public:
    int solve(vector<int>& arr, int index, vector<int>&dp){
        // Base Case
        if(index >= arr.size()){
            return 0;
        }
        if(dp[index] != -1){
            return dp[index];
        }
        
        int pick = arr[index] + solve(arr, index + 2, dp);
        int notpick = 0 + solve(arr, index + 1, dp);
        return dp[index] =  max(pick, notpick);
    }
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        // code here
        int index = 0;
        int n = arr.size();
        vector<int>dp(n + 1, -1);
        int ans = solve(arr, index, dp);
        return ans;
    }
};