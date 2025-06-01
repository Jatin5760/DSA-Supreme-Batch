#include<iostream>
using namespace std;

void merge(int arr[], int start, int end, int mid)
    {
        vector<int>temp(end - start + 1);

        int left = start;

        int right = mid + 1;

        int index = 0;

        while(left<=mid && right<=end)
            {
                if(arr[left] <= arr[right])
                    {
                        temp[index] = arr[left];
                        left++;
                        index++;
                    }
                else
                    {
                        temp[index] = arr[right];
                        index++;
                        right++;
                    }
            }

        // Pushing remaining elements left array

        while(left <= mid)
            {
                temp[index] = arr[left];
                index++;
                left++;
            }

         // Pushing remaining elements right array

        while(right <= end)
            {
                temp[index] = arr[right];
                index++;
                right++;
            }

        // Copying elements to actual array

        index = 0;
        while(start <= end)
            {
                arr[start] = temp[index];
                start++;
                index++;
            }

    }

void mergeSort(int arr[], int start, int end)
    {
        // Base Condition

        if(start == end)
            {
                return;
            }

        int mid = start + (end - start)/2;

        // Left part division

        mergeSort(arr,start,mid);

        // Right Part division

        mergeSort(arr,mid + 1,end);

        // Merging both by calling anaother function

        merge(arr, start,end,mid);

    }

int main()
    {
        int arr[] = {6,3,1,2,8,9,10,7,3,10};

        int start = 0;
        
        int end = 9;

        mergeSort(arr, start, end);

        for(int i = 0; i < 10; i++)
            {
                cout<<arr[i]<<" ";
            }

        return 0;
    }