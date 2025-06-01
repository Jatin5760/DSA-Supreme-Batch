#include<iostream>
using namespace std;
int sumArr(int arr[], int index)
    {
        if(index < 0)
            {
                return 0;
            }
        
        return arr[index] + sumArr(arr, index - 1); 

    }
int main()
    {
        int arr[] = {3,4,5,8,2};
        int index = 4;

        cout<<"Your answer: "<<sumArr(arr, index)<<endl;
    }