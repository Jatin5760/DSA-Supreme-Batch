class Solution {
  public:
  void subsum(vector<int>&arr, int sum, int index, vector<int>&ans){
      if(index == arr.size()){
          ans.push_back(sum);
          return;
      }
      
      // Pick
      subsum(arr, sum + arr[index], index + 1, ans);
      
      // Not pick 
      subsum(arr, sum, index + 1, ans);
  }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>ans;
        subsum(arr, 0, 0, ans);
        return ans;
    }
};