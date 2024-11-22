// Isme ham sort karne walle hai array ko using 3 pointer approach.
#include<iostream>
using namespace std;

int main()
    {
        int arr[6] = {2,0,2,1,1,0};
        int size = 6;

        int low = 0;
        int mid = 0;
        int high = size - 1;

        while(mid <= high)
            {
                if(arr[mid] == 0)
                    {
                        swap(arr[mid], arr[low]);
                        low++;
                        mid++;
                    }
                else if(arr[mid] == 2)
                    {
                        swap(arr[mid], arr[high]);
                        high--;
                    }
                else
                    {
                        mid++;
                    }
            }    

            for (int i = 0; i < size; i++)
            {
                cout<<arr[i]<<" ";
            }
            
    }