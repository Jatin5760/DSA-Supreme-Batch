class Solution {
public:
    void permutUni(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, unordered_map<int,int>& mp){
        // Base case
        if(temp.size() == nums.size()){
            ans.push_back(temp);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if( i > 0 && mp[i - 1] == 0 && nums[i] == nums[i - 1])continue;
            if(mp[i] == 1) continue;
            mp[i] = 1;
            temp.push_back(nums[i]);
            permutUni(nums, temp, ans, mp);
            temp.pop_back();
            mp[i] = 0;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        sort(nums.begin(), nums.end());
        permutUni(nums, temp, ans, mp);
        return ans;
    }
};