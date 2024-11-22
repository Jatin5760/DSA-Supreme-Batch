#include<iostream>
using namespace std;
bool maxSawHeight(int arr[], int M, int size, int mid)
    {
        int sumHeight = 0;

        for(int i = 0; i<size; i++)
            {
                if(arr[i]>mid)
                    {
                        sumHeight = (arr[i] - mid) + sumHeight;

                        if(sumHeight>=M)
                        {
                            return true;
                        }

                    }
                
            }
        
        return false;
    }
int main()
    {
        int arr[] = {4,42,40,26,46};
        int size = 5;
        int M = 20;

        int start = 0;
        int end = 46;

        int mid = start + (end - start) / 2;
        int ans = -1;

        while(start<=end)
            {
                if(maxSawHeight(arr, M, size, mid))
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

        cout<<"Your answer is: "<<ans<<endl;

    return 0;

    }