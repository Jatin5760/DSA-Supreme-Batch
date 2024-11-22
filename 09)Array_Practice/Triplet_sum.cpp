#include<iostream>
using namespace std;

int pairSum(int arr[], int size)
    {
        for(int i = 0; i<size; i++)
            {
                for(int j = i+1; j<size; j++)
                    {
                        for(int k = j+1; k<size; k++)
                            {
                                if(arr[i]+arr[j]+arr[k] == 80)
                                    {
                                        if(arr[i] == arr[j] || arr[j] == arr[k] || arr[i] == arr[k])
                                            {
                                                break;
                                            }
                                        else
                                        {
                                            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                                        }
                                    }
                            }
                    }
            }
    }

int main()
    {
        int arr[] = {10,20,30,40};
        int size = 4;

        int pair = pairSum(arr, size);
        cout<<pair<<endl;

        return 0;
    }