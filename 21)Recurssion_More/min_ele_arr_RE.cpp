#include<iostream>
#include<climits> 
using namespace std;
int minEle(int arr[], int index, int n) {
    
    // Base Case
    if(index == n) 
        return INT_MAX;
   
    
    int mini = minEle(arr, index + 1, n);
     
    
    return min(arr[index], mini); 
}

int main() {
    int arr[] = {7, 2, 4, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Min element is: " << minEle(arr, 0, n) << endl;

    return 0;
}