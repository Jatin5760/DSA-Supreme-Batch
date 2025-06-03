#include <iostream>
using namespace std;

int main()
{
    // int arr[1000];
    // int n;
    // cout << "Enter the size of Array";
    // cin >> n;
    // cout << "Enter the element in the Array";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = n - 2; i >= 0; i--)
    // {
    //     bool swapped = 0;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swapped = 1;
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }

    //     if (swapped == 0)
    //     {
    //         break;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;


    // Bubble sort in decreasing order

    // int my_arr[] = {7, 4, 8, 5, 3};
    // int n1 = 5;

    // for (int i = n1 - 2; i >= 0; i--)
    // {
    //     // 3,2,1,0 // 4 BAAR CHALEGA OUTER LOOP
    //     bool swapped = 0;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         // ROUND 1  0-1-2-3
    //         // ROUND 2  0-1-2
    //         // ROUND 3  0-1
    //         // ROUND 4  0

    //         if (my_arr[j] < my_arr[j + 1])
    //         {
    //             swapped = 1;
    //             swap(my_arr[j], my_arr[j + 1]);
    //         }
    //     }

    //     if (swapped == 0)
    //     {
    //         break;
    //     }
    // }

    // for (int i = 0; i < n1; i++)
    // {
    //     cout << my_arr[i] << " ";
    // }


    // Bubble sort in increasing order but should swap from the last
    
    int arr2[] = {10,8,2,3,1,4};
    int n = 6;

    for(int i = 0; i <= n-2; i++){
        for(int j = n-1; j>=i; j--){
            if(arr2[j]<arr2[j-1]){
                swap(arr2[j], arr2[j-1]);
            }
        }
    }

    for(int i = 0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
}