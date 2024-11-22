/* TWO POINTER APPRAOCH

#include<iostream>
using namespace std;
int main()
    {
        int arr[] = {1,1,3,4,5};
        int size = 5;
        int k = 2;

        int i = 0;
        int j = 1;

        while(j<size)
            {
                int diff = arr[j] - arr[i];
                if(diff == k)
                    {
                        cout<<arr[i]<<" "<<arr[j]<<endl;
                        i++;
                        j++;
                    }
                else if(diff>k)
                    {
                        i++;
                    }
                else
                    {
                        j++;
                    }

                if(i==j) j++;
            }
    }
*/

// SECOND APPROACH BINARY SEARCH

#include<iostream>
using namespace std;
int searchBS(int arr[], int size, int x)
    {
        int s = 0;
        int e = size - 1;
        int mid = s + (e - s) / 2;

        while(s<=e)
            {
                if(arr[mid] == x)
                    {
                        return mid;
                    }
                else if(arr[mid] > x)
                    {
                        e = mid - 1;
                    }
                else
                    {
                        s = mid + 1;
                    }
                mid = s + (e - s) / 2;
            }
        return -1; 
    }

int main()  
    {
        int arr[] = {1,1,3,4,5};
        int size = 5;
        int k = 2; 

        for(int i = 0; i<size; i++)
            {
                if(searchBS(arr,size,arr[i]+k)!= -1)
                    {
                        cout<<arr[i]<<" "<<arr[i]+k<<endl;
                    }
            }
    }