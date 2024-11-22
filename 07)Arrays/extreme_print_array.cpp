#include<iostream>
using namespace std;

void extremePrint(int arr[], int size)
    {
        int start = 0;
        int end = size - 1;

        while(start<end)
            {
                cout<<arr[start]<<" ";
                cout<<arr[end]<<" ";
                start++;
                end--;
            }
    }
int main()
    {
        int arr[8] = {10,20,30,40,50,60,70,80};
        int size = 8;
        extremePrint(arr, 8);

    }