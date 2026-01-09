class Solution {
public:
    void permutations(vector<int>&nums, unordered_map<int, int>& mp, vector<int>& temp, vector<vector<int> >& ans){
        // Base case
        if(temp.size() == nums.size()){
            ans.push_back(temp);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(mp[i] == 1){
                continue;
            }

            mp[i] = 1;
            temp.push_back(nums[i]);
            permutations(nums, mp, temp, ans);
            temp.pop_back();
            mp[i] = 0;
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>temp;
        vector<vector<int> >ans;
        int index = 0;
        permutations(nums, mp, temp, ans);
        return ans;
    }
};