class Solution {
  public:
    bool Sorted(vector<int>& arr, int n, int index){
        // base case
        if(index == n - 1){
            return true;
        }
        if(arr[index] > arr[index + 1]){
            return false;
        }
        return Sorted(arr, n, index + 1);
    }
    bool isSorted(vector<int>& arr) {
        // code here
        int index = 0;
        int n = arr.size();
        return Sorted(arr, n, index);
    }
};