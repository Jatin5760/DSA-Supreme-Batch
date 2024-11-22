#include<iostream>
using namespace std;
int bsNearlySorted(int arr[], int size, int target)
    {
        int s = 0;
        int e = size - 1;
        int mid = s + (e - s) / 2;

        while(s<=e)
            {
                if(arr[mid] == target)
                    {
                        return mid;
                    }
                if(mid - 1 >=0 && arr[mid - 1] == target)
                    {
                        return mid - 1;
                    }
                if(mid + 1 < size && arr[mid + 1] == target)  
                    {
                        return mid + 1;
                    }
                
                else if (arr[mid] > target)
                    {
                        e = mid - 2;
                    }
                else
                    {
                        s = mid + 2;
                    }
                mid = s + (e - s) / 2;
            }

        return -1;
    }
int main()
    {
        int arr[] = {10, 3, 40, 20, 50, 80, 70};
        int size = 7;

        int target;
        cout<<"Enter the element: "<<endl;
        cin>>target;

        int ans = bsNearlySorted(arr,size,target);
        cout<<"ThE index of target is: "<<ans<<endl;

        return 0;
    } 