#include<iostream>
using namespace std;

int maxminNum(int arr[][3], int row, int col)
    {
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i = 0; i < row; i++)
            {
                for(int j = 0; j < col; j++)
                    {
                        
                        if(arr[i][j]>max)
                            {
                                max = arr[i][j];
                            } 
                    }
            }
            return max;
    }
int main()
    {
        int arr[3][3] = {{1,2,3}, {1,3,7}, {4,6,8}};
        int row = 3;
        int col = 3;

        for(int i = 0; i<row; i++)
            {
                for(int j = 0; j<col; j++)
                    {
                        cout<<arr[i][j]<<" ";
                    }
                    cout<<endl;
            }

            cout<<"Maximum number is: "<<maxminNum(arr,3,3)<<endl;
    }