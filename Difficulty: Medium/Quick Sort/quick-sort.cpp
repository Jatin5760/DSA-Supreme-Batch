class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low < high){
            int pindex = partition(arr, low, high);
            quickSort(arr, low, pindex-1);
            quickSort(arr, pindex+1, high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        // code here
        int pivot = arr[low];
        int i = low;
        int j = high;
        while(i < j){
            while(i <= high - 1 && arr[i] <= pivot){
                i++;
            }
            while(j >= low + 1 && arr[j] > pivot){
                j--;
            }
            if(i < j){
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);
        return j;
    }
};