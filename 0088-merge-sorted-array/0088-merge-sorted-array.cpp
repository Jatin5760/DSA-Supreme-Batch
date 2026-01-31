class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int first = m - 1;
        int second = n - 1;
        int last = m + n - 1;

        while(first >=0 && second>=0){
            if(nums1[first] > nums2[second]){
                nums1[last] = nums1[first];
                first--;
                last--;
            }
            else if(nums1[first] < nums2[second]){
                nums1[last] = nums2[second];
                second--;
                last--;
            }
            else{
                nums1[last] = nums1[first];
                first--;
                last--;
            }
        }

        while(second >=0){
            nums1[last] = nums2[second];
            second--;
            last--;
        }

        while(first >=0){
            nums1[last] = nums1[first];
            first--;
            last--;
        }
    }
};