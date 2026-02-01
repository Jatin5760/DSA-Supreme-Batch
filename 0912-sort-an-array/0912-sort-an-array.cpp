class Solution {
public:
    /*  Merge Sort
    void merge(vector<int>& nums, int s, int e, int mid){
        vector<int> output;
        int low = s;
        int high = mid + 1;
        while(low <= mid && high<=e){
            if(nums[low] <= nums[high]){
                output.push_back(nums[low]);
                low++;
            }
            else{
                output.push_back(nums[high]);
                high++;
            }
        }

        while(low<=mid){
            output.push_back(nums[low]);
            low++;
        }
        while(high <= e){
            output.push_back(nums[high]);
            high++;
        }
        for (int i = 0; i < output.size(); i++) {
            nums[s + i] = output[i];
        }
    }
    void mergeSort(vector<int>& nums, int s, int e){
        // Base case
        if(s >= e){
            return;
        }
        int mid = s + (e-s)/2;
        // left merge
        mergeSort(nums, s, mid);
        // right merge
        mergeSort(nums, mid+1, e);
        // sorting 
        merge(nums, s, e, mid);
    }
    */

    // Quick Sort
    void quickSort(vector<int>& nums, int start, int end){
        
        if(start >= end) return;

        int i = start - 1;
        int j = start;

        int r = start + rand() % (end - start + 1);
        swap(nums[r], nums[end]);

        int pivot = end;

        

        while(j < pivot){
            if(nums[j] < nums[pivot]){
                i++;
                swap(nums[i], nums[j]);
            }
            j++;
        }
        i++;
        swap(nums[i], nums[pivot]);
        quickSort(nums, start, i - 1);
        quickSort(nums, i+1, end);
    }
    vector<int> sortArray(vector<int>& nums) {
        // int s = 0;
        // int e = nums.size()-1;
        // mergeSort(nums, s, e);
        
        int start = 0;
        int end = nums.size() - 1;
        quickSort(nums, start , end);

        return nums;
    }
};