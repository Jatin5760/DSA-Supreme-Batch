#include<iostream>
using namespace std;

int main()
    {
        int arr[6] = {1, 2, -3, 4, -5, 6};
        int size = 6;

        int low = 0;
        int high = size - 1;

// This is Dutch National Flag algorithm (Two pointer appraoch)

        while(low <= high)
            {
                if(arr[low]< 0)
                    {
                        low++;
                    }
                else if(arr[low] > 0)
                    {
                        swap(arr[low], arr[high]);
                        high--;
                    }
            } 

              // Printing the Array
            for(int i = 0; i<size; i++)
                {
                    cout<<arr[i]<<" ";
                }

            cout<<endl;
            
        return 0;
    }