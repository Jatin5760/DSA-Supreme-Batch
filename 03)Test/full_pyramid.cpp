#include <iostream>
using namespace std;

int main()
    {

        int n = 10;
        for(int row = 0; row<n; row++)
            {
                // space
                for(int col=0; col<n-row-1; col++)
                    {
                        cout<<" ";
                    }
                
                for(int col = 0; col<row+1; col++)
                    {
                        cout<<"* ";
                    }

                    cout<<endl;
            }
    }