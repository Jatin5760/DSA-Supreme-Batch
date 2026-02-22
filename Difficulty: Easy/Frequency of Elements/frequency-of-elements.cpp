class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        unordered_map<int, int> mp;
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        
        for(auto it: mp){
            ans.push_back({it.first, it.second});
        }
        return ans;
        
    }
};