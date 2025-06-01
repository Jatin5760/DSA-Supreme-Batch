#include<iostream>
using namespace std;
void maxiNum(int arr[], int size, int i, int& max)
    {
        if(i>=size)
            {
                return;
            }

        if(arr[i]>max)
            {
                max = arr[i];
            }
        maxiNum(arr, size, i+1, max);
    }
int main()
    {
        int arr[] = {10,30,15,21,44,26,17};
        int size = 7;

        int i = 0; 
        int max = INT_MIN;

        maxiNum(arr, size, i, max);

        cout<<"Answer is: "<<max<<endl;

        return 0;
    }