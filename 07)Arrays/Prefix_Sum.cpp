#include<iostream>
using namespace std;

int main(){

    int arr[] = {6,4,5,-3,2,8};
    int size = 6;

    vector<int> prefix(size);
    prefix[0] = arr[0];

    for(int i = 1; i<size; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    for(int val: prefix){
        cout<<val<<" ";
    }


    return 0;
}