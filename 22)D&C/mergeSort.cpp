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
                if(arr[left]<=arr[right])
                    {
                        temp[index] = arr[left];
                        index++;
                        left++;
                    }
                else
                    {
                        temp[index] = arr[right];
                        index++;
                        right++;
                    }
            }

        // If Left array is not empty
        while(left<=mid)
            {
                temp[index] = arr[left];
                    index++;
                    left++;  
            }

        // If right array is not empty
         while(right<=end)
            {
                temp[index] = arr[right];
                    index++;
                    right++;  
            }

        // Put these values in original array
        index = 0;
        while(start<=end)
            {
                arr[start] = temp[index];
                index++;
                start++;
            }
    }
void mergeSort(int arr[], int start, int end)
    {
        // Base Condition

        if(start >= end)
            {
                return;
            }
        
        int mid = start + (end - start)/2;

        // Left part
        mergeSort(arr,start,mid);

        // Right Part
        mergeSort(arr,mid + 1,end);

        // Merge both parts
        merge(arr,start,end,mid);
    }
int main()
    {
        int arr[] = {6,3,1,2,8,9,10,7,3,10};
        int start = 0;
        int end = 9;
        mergeSort(arr, start, end);

        for(int i = 0; i<10; i++)
            {
                cout<<arr[i]<<" ";
            }
        return 0;
    }