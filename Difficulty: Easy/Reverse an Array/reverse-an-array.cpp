class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int first = 0;
        
        int last = arr.size() - 1;
        
        for(int i = 0; i < arr.size()/2; i++){
            swap(arr[first], arr[last]);
            first++;
            last--;
        }
    }
};