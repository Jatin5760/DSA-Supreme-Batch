class Solution {
  public:
    int merge(vector<int>& arr, int low , int mid, int high){
        int count = 0;
        
        vector<int>temp;
        int left = low;
        int right = mid + 1;
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                count += mid - left + 1;
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }
        
        while(right <= high){
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i = low; i <=high; i++){
            arr[i] = temp[i - low];
        }
        return count;
    }
    int mergeSort(vector<int>& arr, int low, int high){
        // Base case
        int count = 0;
        if(low >= high) return count;
        
        int mid = low + (high - low)/2;
        count += mergeSort(arr, low , mid);
        count += mergeSort(arr, mid + 1, high);
        
        count+= merge(arr, low, mid , high);
        
        return count;
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        return mergeSort(arr, 0, n - 1);
    }
};