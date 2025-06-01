#include<iostream>
using namespace std;
void subsetSum(int arr[],int index, int n, int sum)
    {
        // Base case
        if(index == n)
            {
                cout<<sum<<endl;
                return;
            }

        // Exclude case
        subsetSum(arr,index+1,n,sum);
        // Include
        subsetSum(arr,index+1,n,sum+arr[index]);
    
    }
int main()
    {
        int arr[] = {3,4,5};
        int n = 3;
        int index = 0;
        int sum = 0;
        subsetSum(arr,index,n,sum);
        return 0;  
    }