class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int high = k - 1;
        double sum = 0;
        double maxSum = INT_MIN;

        for(int i = low; i <= high; i++){
            sum += nums[i];
        }
        maxSum = sum;

        while(high < n - 1){
            
            sum -= nums[low];   
            low++;

            high++;
            sum += nums[high];  

            maxSum = max(maxSum, sum);
            }
        double avg = maxSum / k;
        return avg;
    }
};