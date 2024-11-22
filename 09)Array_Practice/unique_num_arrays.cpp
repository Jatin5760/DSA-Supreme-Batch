#include<iostream>
using namespace std;
void uniqueElement(int arr[], int size)
    {
        int ans = 0;
        int end = size - 1;
        for(int i = 0; i<size; i++) 
            {
                ans = ans^arr[i]; 
            }
        cout<<"Unique element is: "<<ans<<endl;
    }
int main ()
    {
        int arr[11] = {1,2,4,2,1,3,6,5,5,6,4};
        int size = 11;

        uniqueElement(arr,11);

        return 0;
    }