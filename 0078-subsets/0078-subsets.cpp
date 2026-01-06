class Solution {
public:
    void setsub(vector<int>& nums, int index, int n, vector<int>part, vector<vector<int>>& ans){
        // Base case
        if(index == n){
            ans.push_back(part);
            return;
        }
        part.push_back(nums[index]);
        setsub(nums, index+1, n, part, ans);
        part.pop_back();
        setsub(nums, index + 1, n, part, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int> >ans;
        vector<int>part;

        setsub(nums, 0, n, part, ans);
        return ans;
    }
};