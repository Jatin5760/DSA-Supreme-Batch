#include<iostream>
using namespace std;
void printArr(int arr[], int n, int i){
    //base condition
    if(i>=n){
        return;
    }

    cout<<arr[i]<<" ";
    printArr(arr, n, i+1);
    
}
int main(){
    int arr[5] = {10,20,30,40,50};
    int n = 5;
    int i = 0;

    printArr(arr, n, i);

    return 0;
}