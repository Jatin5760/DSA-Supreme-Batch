class Solution {
public:
    int solve(vector<int>& nums, int index, vector<int>&dp){
        if(index == 0){
            return nums[index];
        }
        if(index < 0){
            return 0;
        }

        if(dp[index] != -1){
            return dp[index];
        }

        int pick = nums[index] + solve(nums, index - 2, dp);

        int notpick = 0 + solve(nums, index - 1, dp);

        return dp[index] = max(pick, notpick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp1(n-1, -1);
        vector<int>dp2(n-1, -1);
        vector<int>temp1;
        vector<int>temp2;
        if(n==1)return nums[0];

        for(int i = 0; i < n; i++){
            if(i != 0){
                temp1.push_back(nums[i]);
            }
            if(i != n-1){
                temp2.push_back(nums[i]);
            }
        }

        return max(solve(temp1, n-2, dp1), solve(temp2, n-2, dp2));
    }
};