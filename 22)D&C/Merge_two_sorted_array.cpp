// Merge space can be done by no extra space jisko kehte hai inplace merge sort.
// Inversion count is famous question.
#include<iostream>
using namespace std;

void merge(int arr[], int s, int e)
    {
        int mid = (s+e)/2;

        int len1 = mid - s + 1;
        int len2 = e - mid;

        int* left = new int[len1];
        int* right = new int[len2];

        //copy values to left array
        int k = s;
        for(int i = 0; i<len1; i++)
            {
                left[i] = arr[k];
                k++;
            }

        //copy values to right array
        k = mid + 1;
        for(int i =0; i<len2; i++)
            {
                right[i] = arr[k];
                k++;
            }

        // Merge logic
        int leftIndex = 0;
        int rightIndex = 0;
        int mainArrayIndex = s;

        while(leftIndex < len1 && rightIndex < len2)
            {
                if(left[leftIndex] < right[rightIndex])
                    {
                        arr[mainArrayIndex++] = left[leftIndex++];
                    }
                
                else
                    {
                        arr[mainArrayIndex++] = right[rightIndex++];
                    }
            }
        
        // Copy Left array elements remaining ones
        while(leftIndex < len1)
            {
                arr[mainArrayIndex++] = left[leftIndex++];
            }

        // Copy Right array elements remaining ones
        while(leftIndex < len2)
            {
                arr[mainArrayIndex++] = right[rightIndex++];
            }
    }

void mergeSort(int arr[], int s, int e)
    {
        //Base case
        // S == e -> single element
        // s > e -> invalid array
        if(s >= e)
            {
                return;
            }
        
        int mid = (s+e)/2;

        //Left part sort kardo recurssion
        mergeSort(arr, s, mid);

        //Right part
        mergeSort(arr,mid + 1, e);

        // Now merge two sorted array
        merge(arr, s, e);
    }

int main()
    {
        int arr[] = {4,5,13,2,12};
        int n = 5;

        int s = 0;
        int e = n - 1;

        mergeSort(arr,s,e);

        // Print the array
        for(int i = 0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
        cout<<endl;

        return 0;

    }