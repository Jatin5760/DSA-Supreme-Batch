class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int countZero = 0;
        int low = 0;
        int high = 0;
        int n = nums.size();
        int ans = 0;

        for(int high = 0; high < n; high++){
            if(nums[high] == 0){
                countZero++;
            }

            while(countZero> 1){
                if(nums[low] == 0){
                    countZero--;
                }
                low++;
            }

            int len = high - low + 1;
            ans = max(ans, len);
        }
        return ans - 1;
    }
};