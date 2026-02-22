class Solution {
  public:
    // Function to sort the array in a custom pattern.
    vector<int> customSort(vector<int>& arr) {
        // your code
        int n = arr.size();
        int mid = n/2;
        
        sort(arr.begin(), arr.begin() + mid);
        sort(arr.begin() + mid, arr.end());
        
        reverse(arr.begin() + mid, arr.end());
        return arr;
    }
};