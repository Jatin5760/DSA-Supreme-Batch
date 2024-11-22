#include<iostream>
using namespace std;
//Positioning Method
int main()
    {
        int arr[5] = {3, 1, 3, 4, 2};
        int size = 5;


        int i = 0;
        int ans = 0;

        while(arr[0]!=arr[arr[0]])
            {
                swap(arr[0],arr[arr[0]]);

                if(arr[i] == arr[arr[i]])
                    {
                        ans = arr[i];
                        break;
                    }
            }

            cout<<ans<<" ";


    }