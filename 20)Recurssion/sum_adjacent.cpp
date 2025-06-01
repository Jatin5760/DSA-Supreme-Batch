#include<iostream>
using namespace std;
void solve(int arr[], int sum, int& maxi, int i, int size)
    {
        if(i>=size)
            {
                maxi = max(sum, maxi);
                return;
            }

        solve(arr, sum+arr[i], maxi, i+2, size);

        solve(arr, sum, maxi, i+1, size);
    }

int main()
    {
        int arr[] = {2,1,4,9};
        int sum = 0;
        int size = 4;
        int maxi = INT_MIN;
        int i = 0;
        solve(arr, sum, maxi, i,size);
        cout<<"Maximum adjacent sum is:"<<maxi<<endl;
        return 0;
    }