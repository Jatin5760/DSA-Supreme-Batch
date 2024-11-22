#include<iostream>
using namespace std;
bool isPossible(int arr[], int N, int M, int mid)
    {
        int pagesum = 0;
        int c = 1;

        for(int i = 0; i<N; i++)
            {
                if(arr[i]>mid)
                    {
                        return false;
                    }

                if(pagesum + arr[i]>mid)
                    {
                        c++;
                        pagesum = arr[i];

                        if(c>M)
                            {
                                return false;
                            }
                    }
                else
                    {
                        pagesum = arr[i] + pagesum;
                    }        
            }
            
        return true;
    }

int main()
    {
        int arr[] = {12,34,67,90};
        int N = 4;
        int M = 2;

        if(M>N)
            {
                return -1;
            }
        
        int start = 0;
        int end;

        for(int i = 0; i<N; i++)
            {
                end = arr[i] + end;
            }

        int mid = start + (end - start) / 2;
        int ans = -1;

        while(start<=end)
            {
                if(isPossible(arr,N,M,mid))
                    {
                        ans = mid;
                        end = mid - 1;
                    }
                else
                    {
                        start = mid + 1;
                    }
            
            mid = start + (end - start) / 2;
            
            }


        cout<<"Your answer is: "<<ans<<endl;

        return 0;
    }