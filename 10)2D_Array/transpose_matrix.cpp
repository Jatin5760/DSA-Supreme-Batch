#include<iostream>
using namespace std;

void transpose(int arr[][3], int row, int col, int transposearr[][3])
    {
        for(int i = 0; i<row; i++)
            {
                for(int j = 0; j<col; j++)
                    {
                        transposearr[j][i] = arr[i][j];
                    }
            }
    }

void printArray(int arr[][3], int row, int col)
    {
        for(int i = 0; i<row; i++)
            {
                for(int j = 0; j<col; j++)
                    {
                        cout<<arr[i][j]<<" ";
                    }
                cout<<endl;
            }
    }

int main()
    {
        int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        int row = 3;
        int col = 3;

        int transposearr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

        cout<<"Printing the array before transpose"<<endl;
        printArray(arr,3,3);

        cout<<"After transpose"<<endl;
        transpose(arr,3,3, transposearr);
        printArray(transposearr,3,3);


    }