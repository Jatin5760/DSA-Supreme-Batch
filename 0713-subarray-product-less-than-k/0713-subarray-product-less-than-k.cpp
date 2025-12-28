class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        int product = 1;
        int count = 0;
        for(int high = 0; high<nums.size(); high++){
            product *= nums[high];
            while(product >=k && low <= high){
                product /= nums[low];
                low++;
            }
            count += (high - low + 1);
        }
        return count;
    }
};