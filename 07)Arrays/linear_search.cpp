#include<iostream>
using namespace std;

int find(int arr[], int size, int key)
    {
        for(int i = 0; i<size; i++)
            {
                if(arr[i] == key)
                    {
                        return 1;
                    }
            }

            return 0;
    }

int main()
    {
        int arr[5] = {1,3,5,7,8};
        int size = 5;

        cout<<"Enter the key to find in array: "<<endl;
        int key;
        cin>>key;

        if(find(arr,5,key)== 1)
            {
                cout<<"Found"<<endl;
            }
        else
            {
                cout<<"Not found"<<endl;
            }


    }