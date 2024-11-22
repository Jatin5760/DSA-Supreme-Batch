#include<iostream>
#include<vector>

using namespace std;

int main()
    {
        int row = 3;
        int col = 5;

        vector<vector<int> >arr(row, vector<int>(col, -1));

        for(int i = 0; i<arr.size(); i++)
            {
                for(int j = 0; j<arr[i].size(); j++)
                    {
                        cout<<arr[i][j]<<" ";
                    }
                cout<<endl;
            }


        cout<<endl;

        int r = 5;
        int c = 5;

        vector<vector<int> > arr1(r, vector<int>(c, -8));

        for(int i = 0; i<arr1.size(); i++)
            {
                for(int j = 0; j<arr1[i].size(); j++)
                    {
                        cout<<arr1[i][j]<<" ";
                    }
                cout<<endl;
            }
    }