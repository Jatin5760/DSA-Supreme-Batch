#include<iostream>
using namespace std;

int main()
    {
        for(int row = 0; row < 5; row++)
            {
                int count = 1;
                for(int col = 0; col< row + 1; col++)
                    {
                        cout<<count<<" ";
                        count++;
                    }
                cout<<endl;
                
            }
           
    }