#include<iostream>
using namespace std;
void countingFun(int arr[], int size)
    {
        int ones = 0;
        int zeros = 0;

        for(int i = 0; i < size; i++)
            {
                if(arr[i]== 0)
                    {
                        zeros = zeros + 1;
                    }
                else if (arr[i] == 1)
                    {
                        ones = ones + 1;
                    }
            }

            cout<<"Number of Zeros: "<<zeros<<endl;
            cout<<"Number of Ones: "<<ones<<endl;
    }

int main()
    {
        int arr[10] = {1,0,1,1,1,0,0,1,0,1};
        int size = 10;

        countingFun(arr, 10);


    }