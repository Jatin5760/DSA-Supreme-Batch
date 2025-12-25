class Solution {
public:

    int longestOnes(vector<int>& nums, int k) {
        vector<int>freq(2, 0);
        int low = 0;
        int high = 0;
        int n = nums.size();
        int ans = 0;
        for(int high = 0; high < n; high++){
            freq[nums[high]]++;
            
            while(freq[0] > k){
                freq[nums[low]]--;
                low++;
            }

            int len = high - low + 1;
            ans = max(len, ans);
        }
        return ans;
    }
};