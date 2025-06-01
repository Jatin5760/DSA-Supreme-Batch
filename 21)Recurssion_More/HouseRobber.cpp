#include<iostream>
using namespace std;
int robHelper(int arr[], int i, int& size)
    {
        // Base case
        if(i >= size)
            {
                return 0;
            }

        // One case

        int robAmt1 = arr[i] + robHelper(arr, i + 2, size);
        int robAmt2 = 0 + robHelper(arr, i + 1, size);

        return max(robAmt1, robAmt2);
        
    }
int main()
    {
        int arr[] = {2,1,1,2};
        int size = 4;
        int ans = robHelper(arr, 0, size);
        cout<<"Answer is: "<<ans<<endl;


        
    }