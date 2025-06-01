#include<iostream>
using namespace std;
int partition(int arr[], int start, int end)
    {
        int pos = start;
        for(int i = start; i<=end; i++)
            {
                if(arr[i] <= arr[end])
                    {
                        swap(arr[i], arr[pos]);
                        pos++;
                    }
            }
        return pos-1;
    }
void quickSort(int arr[], int start, int end)
    {
        if(start>=end)  
            {
                return;
            }

        int pivot = partition(arr,start,end);
        // Left side
        quickSort(arr, start,pivot-1);

        // Right Side
        quickSort(arr,pivot,end);
    }
int main()
    {
        int arr[] = {10,3,4,1,56,3,2,11,9}; 
        int start = 0;
        int end = 8;
        quickSort(arr, start,end);
        
        for(int i = 0; i<9;i++)
            {
                cout<<arr[i]<<" ";
            }

        return 0;
    }