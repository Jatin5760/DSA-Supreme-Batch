#include<iostream>
using namespace std;

bool Linear_Search(int arr[][3], int row, int col, int key)
    {
        for(int i = 0; i<row; i++)
            {
                for(int j = 0; j<col; j++)
                    {
                        if(arr[i][j] == key)
                            {
                                return true;
                            }
                    }
            }
            return false;
    }

void print2DArray(int arr[][3], int row, int col)
    {
        cout<<" Printing row sum"<<endl;

        for(int i = 0; i<row; i++)
            {
                int sum = 0;
                for(int j = 0; j<col; j++)
                    {
                        sum = sum + arr[i][j];
                    }
                cout<<sum<<endl;
            }
            
    }

int main()
    {
        int arr[3][3];
        int row = 3;
        int col = 3;

        cout<<"Enter the value for 2D Array"<<endl;
        for(int i = 0; i<row; i++)
            {
                for(int j = 0; j<col; j++)
                    {
                        cin>>arr[i][j];
                    }
            }

        cout<<"Printing the Array"<<endl;
        for(int i = 0; i<row; i++)
            {
                for(int j = 0; j<col; j++)
                    {
                        cout<<arr[i][j]<<" ";
                    }
                cout<<endl;
            }


            print2DArray(arr, 3, 3);

            int key;
            cout<<"Enter the key value"<<endl;
            cin>>key;


            if(Linear_Search(arr, 3, 3, key)==1)
                {
                    cout<<"Element Found"<<endl;
                }
            else
                {
                    cout<<"Not Found"<<endl;
            
                }
    }