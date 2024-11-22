#include<iostream>
using namespace std;
void bubbleSort(int arr[], int size)
    {
        for(int i = 1; i<size; i++)
            {
                for(int j = 0; j<size-i; j++)
                    {
                        if(arr[j]>arr[j+1])
                            {
                                swap(arr[j], arr[j+1]);
                            }
                    }
            }
    }
int main() 
    {
        int arr[] = {1,7,6,10,9,14,12};
        int size = 7;

        bubbleSort(arr, size);

        for(int i = 0; i<size; i++)
            {
                cout<<arr[i]<<" ";
            }
    }