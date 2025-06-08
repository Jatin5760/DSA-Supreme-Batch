#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,3,7,2};
    int size = 4;


    for(int i = 0; i<size; i++){
        for(int j = i; j<size; j++){
            for(int k = i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}