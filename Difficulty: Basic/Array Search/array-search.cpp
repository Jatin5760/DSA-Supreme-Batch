class Solution {
  public:
    int Search(vector<int>&arr, int x, int index){
        // Base case
        if(index == arr.size()){
            return -1;
        }
        
        if(arr[index] == x){
            return index;
        }
        
        return Search(arr, x, index + 1);
        
    }
    int search(vector<int>& arr, int x) {
        // code here
        return Search(arr, x, 0);
        
    }
};