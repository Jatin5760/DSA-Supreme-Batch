#include<iostream>
using namespace std;

int main()
    {
        for(int row = 0; row < 4; row++)
            {
                int n = 4;
                for(int col = 0; col<n-row-1; col++)
                    {
                        cout<<"  ";
                    }
                
                for(int col = 0;col < row+1; col++)
                    {
                        cout<<"* ";
                    }

                for(int col = 0;col < row+1; col++)
                    {
                        cout<<"* ";
                    }
                    cout<<endl;
            }
    }