#include<iostream>
using namespace std;

int main()
    {
        for(int row = 0; row < 4; row++)
            {
                int n = 4;
                
                // Space printing loop
                for(int col = 0; col < row; col++)
                    {
                        cout<<"  ";
                    }
                // star printing loop
                for(int col = 0; col < n-row; col++)
                    {
                        cout<<"* ";
                    }
                
                for(int col = 0; col < n-row; col++)
                    {
                        cout<<"* ";
                    }

                    cout<<endl;
            }
    }