class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // Max Sum 
        int n = nums.size();
        int windowSum = 0;
        int maxSum = INT_MIN;

        for(int high = 0; high < n; high++){
            windowSum+= nums[high];
            maxSum = max(windowSum, maxSum);
            if(windowSum < 0){
                windowSum = 0;
            }
        }
        

        // Total Sum
        int totalSum = 0;
        for(int i = 0; i < n; i++){
            totalSum += nums[i];
        }

        // Min Sum
        windowSum = 0;
        int minSum = INT_MAX;
        for(int high = 0; high < n; high++){
            windowSum+= nums[high];
            minSum = min(windowSum, minSum);
            if(windowSum > 0){
                windowSum = 0;
            }
        }

        if(maxSum < 0){
            return maxSum;
        }
        return max(maxSum, totalSum - minSum);
    }
};