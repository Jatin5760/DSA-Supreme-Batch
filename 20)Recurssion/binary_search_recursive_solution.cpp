#include<iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int& target)
    {
        // base case
        if(s > e) 
        {
            return -1;
        }

        int mid = s + (e - s) / 2;

        // case 1 key found
        if(arr[mid] == target)
            {
                return mid;
            }
        // arr[mid]> key -> e = mid - 1;
        if(arr[mid] > target)
            {
                return binarySearch(arr, s, mid - 1, target);
            }
        
        // arr[mid] < key -> s = mid + 1;
        if(arr[mid] < target)
            {
                return binarySearch(arr, mid + 1, e, target);
            }
    }

int main()
    {
        int arr[] = {15,25,35,45,65,95};

        int n = 6;
        
        int s = 0;

        int e = n - 1;

        int target;
        cout<<"Enter the target to search"<<endl;
        cin>>target;

        int ans = binarySearch(arr, s, e, target);

        cout<<ans<<endl;


        return 0;
    }