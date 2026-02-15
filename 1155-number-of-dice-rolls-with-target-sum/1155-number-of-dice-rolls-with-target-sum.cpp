class Solution {
public:
    long long int mod = 1000000007;
    // Recurrssion

    // int solve(int n, int k, int target){
    //     // Base Case
    //     if(n < 0 || target < 0){
    //         return 0;
    //     }

    //     if(n == 0 && target == 0){
    //         return 1;
    //     }

    //     if(n == 0 && target != 0){
    //         return 0;
    //     }

    //     if(n != 0 && target == 0){
    //         return 0;
    //     }

    //     int ans = 0;
    //     for(int val = 1; val <= k; val++){
    //         ans += solve(n - 1, k, target - val);
    //     }
    //     return ans;
    // }


// Memoization
    int solve(int n, int k, int target, vector<vector<long long int> >& dp){

        // Base Case
        if(n < 0 || target < 0){
            return 0;
        }

        if(n == 0 && target == 0){
            return 1;
        }

        if(n == 0 && target != 0){
            return 0;
        }

        if(n != 0 && target == 0){
            return 0;
        }

        if(dp[n][target] != -1){
            return dp[n][target];
        }

        long long int ans = 0;
        for(int val = 1; val <= k; val++){
            ans = (ans%mod + solve(n - 1, k, target - val, dp)%mod)%mod;
        }
        dp[n][target] = ans;
        return ans;
    }


    int numRollsToTarget(int n, int k, int target) {
        vector<vector<long long int> >dp(n + 1, vector<long long int>(target+1, -1));
        int finalAns = solve(n, k, target, dp);
        return finalAns;
    }
};