#include<iostream>
using namespace std;
int solve(int arr[], int target, int size)
    {
        if(target == 0)
            {
                return 0;
            }
        if(target < 0)
            {
                return INT_MAX;
            }

        int mini = INT_MAX;
        for(int i = 0; i<size; i++)
            {
                int ans = solve(arr, target - arr[i], size);
                if(ans!= INT_MAX)
                    {
                        mini = min(mini, ans + 1);
                    }
            }
        return mini;
    }

int main()
    {
        int arr[] = {1,2,5};
        int target = 3;
        int size = 3;

        int ans = solve(arr, target, size);
        cout<<"Answer is: "<<ans<<endl;

        return 0;
    }