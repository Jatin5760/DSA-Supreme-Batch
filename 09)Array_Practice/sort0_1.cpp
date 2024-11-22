#include<iostream>
using namespace std;
int main()
    {
        int arr[] = {0,1,1,0,1,0,1,0,0};
        int size = 9;

        int start = 0;
        int end = size - 1;
        int i = 0;

        while(start< end)
            {
                if(arr[i] == 0)
                    {
                        swap(arr[start], arr[i]);
                        i++;
                        start++;
                    }
                
                if (arr[i] == 1)
                    {
                        swap(arr[end], arr[i]);
                        end--;
                    }
                
            }

        for(auto value: arr)
            {
                cout<< value<<" ";
            }
            
        return 0;
    }