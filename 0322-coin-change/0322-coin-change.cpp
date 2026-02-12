class Solution {
public:
    int solve(vector<int>& coins, int amount, vector<int>& dp){
        // Base case
        int mini = INT_MAX;
        if(amount == 0){
            return 0;
        }

        if(dp[amount] != -1){
            return dp[amount];
        }

        for(int i = 0; i < coins.size(); i++){
            if(coins[i] <= amount){
                int recurrAns =  solve(coins, amount - coins[i], dp);
                if(recurrAns != INT_MAX){
                    mini = min(1 + recurrAns, mini);
                }
            }

        }
        dp[amount] = mini;
        return mini;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int>dp(amount + 1, -1);
        int ans = solve(coins, amount, dp);

        if(ans == INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};