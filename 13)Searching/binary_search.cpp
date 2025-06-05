// Array should be in a monotonic order, ya toh increasing order me ho, ya toh decreasing order mai.
#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int target)
    {
        int s =  0;
        int e = size - 1;
        int mid = s+(e-s)/2;

        while(s<=e)
            {
                if(arr[mid]==target)
                    {
                        return mid;
                    }

                else if (arr[mid]<target)
                    {
                        s = mid + 1;
                    }
                else
                    {
                        e = mid - 1;
                    }
                
                mid = s+(e-s)/2;
            }


    return -1;
    }

int main()
    {
        int arr[] = {2,4,6,8,10,12,14};
        int size = 7;
        int target = 14;


        int result = binarySearch(arr,size,target);

        if(result == -1)
            {
                cout<<"Target not found"<<endl;
            }
        else
            {
                cout<<"Target found at "<<result<<endl;
            }
    }
