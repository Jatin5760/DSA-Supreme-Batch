#include<iostream>
using namespace std;
int main()
    {
        int arr[7] = {1, 5, 3, 4, 3, 5, 6};
        int size = 7;

        int index = 0;

        for(int i = 0 ; i <size; i++)
            {
                for(int j = i + 1; j<size; j++)
                    {
                        if(arr[i] == arr[j])
                            {
                                index = i;
                            }
                    }
            }

            cout<<index;
    }