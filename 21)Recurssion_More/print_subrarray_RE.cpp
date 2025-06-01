#include<iostream>
using namespace std;
void printSubArray(int arr[], int start, int end, int& size)
    {
        //base case
        if(end == size)
            {
                return; 
            }

        //One case
        for(int i = start; i<=end; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        printSubArray(arr, start, end +1,size);
    }
void printArray(int arr[],int size)
    {
        for(int start = 0;start<size;start++)
            {
                int end = start;
                printSubArray(arr,start,end,size);
            }
    }
int main()
    {
        int arr[] = {1,2,3,4,5};
        int size = 5;
        printArray(arr,size);
        
    }