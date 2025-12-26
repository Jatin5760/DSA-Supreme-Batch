class Solution {
public:
    int atMost(vector<int>& nums, int k){
        unordered_map<int, int> freq;
        int low = 0;
        int high = 0;
        int count = 0;
        
        for(int high = 0; high < nums.size(); high++){
            freq[nums[high]]++;
            while(freq.size() > k)
            {
                freq[nums[low]]--;
                if(freq[nums[low]] == 0)
                {
                    freq.erase(nums[low]);
                }
                low++;
            }

        count += high - low + 1;
    }
    return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};