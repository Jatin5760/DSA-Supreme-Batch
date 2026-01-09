class Solution {
public:
    void setsub(vector<int>& nums, int index, int n, vector<int>part, vector<vector<int>>& ans){
        // Base case
       if(index == n){
        ans.push_back(part);
        return;
       }

       part.push_back(nums[index]);
       setsub(nums, index + 1, n, part, ans);
       part.pop_back();
       setsub(nums, index + 1, n, part, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<int>part;
      vector<vector<int>>ans;
      setsub(nums, 0, nums.size(), part, ans);
      return ans;
    }
};