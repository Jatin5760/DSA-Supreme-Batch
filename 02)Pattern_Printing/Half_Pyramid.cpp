#include<iostream>
using namespace std;

int main()
    {
        cout<<endl;
        for(int row = 0; row < 5; row++)
            {
                for(int col = 0; col < row + 1; col++)
                    {
                        cout<<"* ";
                    }
                cout<<endl;
            }

        cout<<endl;
    }