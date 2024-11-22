#include<iostream>
using namespace std;

bool isPossible(int arr[], int k, int mid, int size)
    {
        int pos = arr[0];
        int c = 1;

        for(int i = 1; i<size; i++)
            {
                if(arr[i] - pos >= mid)
                    {
                        c++;
                        pos = arr[i];
                    }
                if(c==k) return true;
            }
        return false;
    }
int main()
    {
        int arr[] = {1,2,4,8,9};
        int size = 5;
        int k = 3;


        int start = 0;
        int end = arr[size - 1] - arr[0];

        int mid = start + (end - start) / 2;
        int ans = -1;

        while(start<=end)
            {
                if(isPossible(arr,k,mid, size))
                    {
                        ans = mid;
                        start = mid + 1;
                    }
                else
                    {
                        end = mid - 1;
                    }
                mid = start + (end - start) / 2;
            }


        cout<<"Answer is: "<<ans<<endl;

        return 0;

    }