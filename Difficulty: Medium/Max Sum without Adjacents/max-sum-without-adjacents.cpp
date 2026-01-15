// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int solve(int index,vector<int>& arr, vector<int>& dp){
        if(index == 0){
            arr[index];
        }
        if(index < 0){
            return 0;
        }
        
        if(dp[index] != -1)return dp[index];
        int pick = arr[index]+solve(index-2, arr, dp);
        int notpick = 0 + solve(index-1, arr,dp);
        
        return dp[index] = max(pick, notpick);
    }
    int findMaxSum(vector<int>& arr) {
        // code here
        vector<int>dp(arr.size()+1, -1);
        return solve(arr.size()-1, arr,dp);
        
    }
};