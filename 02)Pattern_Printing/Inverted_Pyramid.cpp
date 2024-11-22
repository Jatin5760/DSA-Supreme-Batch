#include<iostream>
using namespace std;

int main()
    {
        int p;
        cout<<"Enter the number";
        cin>>p;

        for(int row = 0; row < p; row++)
            {
                int n = p;
                for(int col = 0; col < p-row; col++)
                    {
                        cout<<"* ";

                    }
                cout<<endl;
                
            }
    }