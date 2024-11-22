#include<iostream>
using namespace std;

void spiralPrint(vector<vector<int> > v)
    {
        int m = v.size();
        if (m == 0) return;  // Check if matrix is empty
        int n = v[0].size();
        int total_number = m*n;

        int starting_row = 0;
        int ending_col = n-1;
        int ending_row = m-1;
        int starting_col = 0;

        int count = 0;
        while(count<total_number)
            {
                for(int i = starting_col; i<=ending_col && count < total_number; i++)
                    {
                        cout<<v[starting_row][i]<<" ";
                        count++;
                    }
                    starting_row++;

                for(int i = starting_row; i<=ending_row && count < total_number; i++)
                    {
                        cout<<v[i][ending_col]<<" ";
                        count++;
                    }
                    ending_col--;

                for(int i = ending_col;i>=starting_col && count < total_number;i--)
                    {
                        cout<<v[ending_row][i]<<" ";
                        count++;
                    }
                    ending_row--;
                
                for(int i = ending_row; i>=starting_row && count < total_number;i--)
                    {
                        cout<<v[i][starting_col]<<" ";
                        count++;
                    }
                    starting_col++;
            }
    }

int main()
    {
        vector<vector<int> > v 
            {
                {1,2,3,4,5,6},
                {7,8,9,10,11,12},
                {13,14,15,16,17,18},
                {19,20,21,22,23,24},
                {25,26,27,28,29,30}
            };

            spiralPrint(v);

            return 0;
    }