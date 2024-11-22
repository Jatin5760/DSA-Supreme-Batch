// for repfrence cplusplus.com


#include<iostream>
#include<vector>
using namespace std;

int main()
    {
        // creation of vector
        vector<int> arr;

        cout<<arr.size()<<endl;     // 0  - size wala fun ye batata hai ki kitne elements pade hai.
        cout<<arr.capacity()<<endl; // 0  - kitne element store kar sakta hu.

        int ans = (sizeof(arr)/sizeof(int));
        cout<<ans<<endl;            // 6


        // insert
        arr.push_back(5);
        arr.push_back(7);

        //printing of elements
        for(int i = 0; i<arr.size(); i++)
            {
                cout<<arr[i]<<" ";
            }

        cout<<endl;

        // to remove and delete element.
        arr.pop_back();

        for(int i = 0; i<arr.size(); i++)
            {
                cout<<arr[i]<<" ";
            }
        cout<<endl;


        vector<int>brr(10, -1); // 10 is size and all element is initialized with -1. 
        cout<<"Size: "<<brr.size()<<endl;
        cout<<"Capacity: "<<brr.capacity()<<endl;

        for(int i = 0; i<brr.size(); i++)
            {
                cout<<brr[i]<<" ";
            }

        
        vector<int> crr {10,20,30,40};

        for(int i = 0; i<crr.size(); i++)
            {
                cout<<crr[i]<<" ";
            }
            cout<<endl;
    }