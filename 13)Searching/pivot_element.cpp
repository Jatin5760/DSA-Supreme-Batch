#include<iostream>
using namespace std;
int pivotElement(int arr[], int size)
    {
        int s = 0;
        int e = size - 1;
        int mid = s + (e - s) / 2;

        while(s<=e)
            {
                if(s==e)
                    {
                        return s;
                    }
                if(mid - 1 >= s && arr[mid]<arr[mid - 1])
                    {
                        return mid - 1;
                    }
                if(mid + 1 <=e && arr[mid] > arr[mid + 1])
                    {
                        return mid;
                    }
                if(arr[s]> arr[mid])
                    {
                        e =  mid - 1;
                    }
                else
                    {
                        s = mid + 1;
                    }
                mid = s + (e - s) / 2;
            }
        return -1;
    }
int main()
    {
        int arr[] = {9, 10, 2, 4, 6, 8};
        int size = 6;

        int ans = pivotElement(arr,size);
        cout<<"Pivot element is: "<<arr[ans]<<endl;




    }