class Solution {
public:
    int atMost(vector<int>& nums, int k){
        int low = 0;
        int high = 0;
        int count = 0;
        int sum = 0;
        
        for(int high = 0; high < nums.size(); high++){
            sum = sum + (nums[high] % 2);
            while(sum > k){
                sum = sum - (nums[low] % 2);
                low++;
            }

            count += high - low + 1;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};