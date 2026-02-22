class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        vector<int>ans;
        int smallest = INT_MAX;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] < smallest){
                smallest = arr[i];
            }
        }
        ans.push_back(smallest);
        int secondSmallest = INT_MAX;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] < secondSmallest && arr[i] != smallest){
                secondSmallest  = min(arr[i], secondSmallest);
            }
        }
        if(secondSmallest == INT_MAX){
            return {-1};
        }
        ans.push_back(secondSmallest);
        return ans;
    }
};