#include<iostream>
#include<vector>
using namespace std;

int firstOcc(int arr[], int size, int target)  // Pass by reference for efficiency
{
    int s = 0; 
    int e = size - 1;
    int ans = -1;
    
    while(s <= e) {
        int mid = s + (e-s)/2;
        
        if(arr[mid] == target) {
            ans = mid;
            e = mid - 1;  // Look in left half
        }
        else if(arr[mid] < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int size, int target)  // Pass by reference for efficiency
{
    int s = 0;
    int e = size - 1;
    int ans = -1;
    
    while(s <= e) {
        int mid = s + (e-s)/2;
        
        if(arr[mid] == target) {
            ans = mid;
            s = mid + 1;  // Look in right half
        }
        else if(arr[mid] < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[10] = {2,4,4,4,4,4,4,6,8,10};
    int target = 4;
    int size = 10;
    
    int firstIndex = firstOcc(arr, size, target);
    int lastIndex = lastOcc(arr, size, target);
    
    cout << "First occurrence: " << firstIndex << endl;
    cout << "Last occurrence: " << lastIndex << endl;

    cout<<"Total occurrence: "<<lastIndex-firstIndex + 1<<endl;
    
    return 0;
}