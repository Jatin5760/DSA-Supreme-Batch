#include<iostream>
using namespace std;

int pairSum(int arr[], int size)
    {
        for(int i = 0; i<size; i++)
            {
                for(int j = 1; j<size; j++)
                    {
                        if(arr[i]+arr[j] == 9)
                            { 
                                cout<<arr[i]<<" "<<arr[j]<<endl;
                            }
                    }
            }
    }

int main()
    {
        int arr[] = {1,3,5,7,2,4,6};
        int size = 7;

        int pair = pairSum(arr, size);
        cout<<pair<<endl;

        return 0;
    }