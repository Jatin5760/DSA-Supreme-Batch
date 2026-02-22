class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }
        
        int secondLargest = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > secondLargest && arr[i] != largest){
                secondLargest = max(arr[i], secondLargest);
            }
        }
        
        if(secondLargest == INT_MIN) return -1;
        return secondLargest;
    }
};