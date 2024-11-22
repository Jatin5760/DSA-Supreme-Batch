#include<iostream>
using namespace std;

void maximumArrayElement(int arr[], int size)
    {
        int maxNum = INT_MIN;

        for(int i = 0; i<size; i++)
            {
                if(arr[i]> maxNum)
                    {
                        maxNum = arr[i];
                    }
            }

            cout<<"The maximum number is: "<<maxNum<<endl;
    }
int main()
    {
        int arr[7] = {2,4,1,6,8,9,0};
        int size = 7;

        maximumArrayElement(arr, 7);
    }