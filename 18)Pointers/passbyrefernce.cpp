#include<iostream>
using namespace std;
void fun(int arr[]){
    cout<<"size of arr in a user defined funtion: "<<sizeof(arr)<<endl;
}
int main(){

    int arr[10] = {1,2,3,4};
    cout<<"Size of Arr in main function: "<<sizeof(arr)<<endl;
    fun(arr);

}

// Why these two values are different because in case of array it is always pass by refernce, so pointer is pass in the function hence, we are not passing the copy inside the function. That's why it gives changes in out actual array.  
