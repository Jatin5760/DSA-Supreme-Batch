class Solution {
    priority_queue<int>pq;
public:
    int minimumDeviation(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 != 0){
                nums[i] = nums[i] * 2;
            }
        }
        int mini = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            mini = min(mini, nums[i]);
            pq.push(nums[i]);
        }

        int ans = INT_MAX;
        while(true){
            int max = pq.top();
            if(max % 2 != 0){
                ans = min(ans, pq.top() - mini);
                break;
            }
            ans = min(ans, max - mini);
            pq.pop();
            pq.push(max/2);
            mini = min(max/2, mini);
        }
        return ans;
    }
};