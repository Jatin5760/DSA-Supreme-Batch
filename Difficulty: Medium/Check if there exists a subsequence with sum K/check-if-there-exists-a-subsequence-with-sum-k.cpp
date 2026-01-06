class Solution {
  public:
     bool subSeq(vector<int>& arr, int k, int index, int& n, int sum){
        // Base case
        if(index == n){
            
            return sum == k;
        }
        
        if(sum > k) return false;


       return subSeq(arr, k, index+1, n, sum + arr[index]) || subSeq(arr, k, index+1, n, sum);
    }
    
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        int index = 0;
        int sum  = 0;
        
        if(subSeq(arr, k, index, n, sum)){
            return true;
        }
        return false;
    }
};