#include<iostream>
using namespace std;

int main()
    {
        for (int row = 0; row < 5; row++)
            {
                int n = 5;
                int count = 1;

                for(int col = 0; col<n-row; col++)
                    {
                        cout<<count<<" ";
                        count++;
                    }
                cout<<endl;
            }
    }