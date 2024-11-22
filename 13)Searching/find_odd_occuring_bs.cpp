#include<iostream>
using namespace std;
int oddOccuring(int arr[], int size)
    {
        int s = 0;
        int e = size - 1;
        int mid = s + (e - s) / 2;
        int ans = -1;

        while(s<=e)
            {
                if(s==e)
                    {
                        return s;
                    }
                if(mid % 2 == 0)
                    {
                        if(arr[mid] == arr[mid + 1])
                            {
                                s = mid + 2;
                            }
                        else
                            {
                                e = mid;
                            }
                    }
                else
                    {
                        if(arr[mid] == arr[mid - 1])
                            {
                                s = mid + 1;
                            }
                        else
                            {
                                e = mid - 1;
                            }
                    }
                mid = s + (e - s) / 2;
            }
            return -1;
    }
int main()
    {
        int arr[13] = {1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
        int size  = 13;

        int finalans = oddOccuring(arr,size);

        cout<<"Index is: "<<finalans<<endl;
        cout<<"Value is: "<<arr[finalans]<<endl;

    }