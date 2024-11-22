#include<iostream>
using namespace std;
int main()
    {
        int arr[5] = {1, 3, 5, 3, 4};
        int size = 5;

        for(int i = 0; i<size; i++)
            {
                int index  = abs(arr[i]);
                if(arr[index - 1] > 0)
                    {
                        arr[index - 1] *= - 1;
                    }
            }


            cout<<"Printing the negaive array"<<endl;
            for(int i = 0; i<size; i++)
                {
                    cout<<arr[i]<<" ";
                }

            cout<<endl;
            for(int i = 0; i<size; i++)
                {
                    if(arr[i]>0)
                    {
                        cout<<"Missing element is: "<<i+1<<" "<<endl;
                    }
                }
    }