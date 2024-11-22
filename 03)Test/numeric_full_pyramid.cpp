#include<iostream>
using namespace std;

int main()
    {
        int n;
        cout<<"Enter the element"<<endl;
        cin>>n;
        cout<<endl;

        for(int row = 0; row<n; row++)
            {
                // space

                for(int col = 0; col<n-row-1; col++)
                    {
                        cout<<"  ";
                    }

                // Num 1
                int count = row+1;
                for(int col = 0; col<row+1; col++)
                    {
                        
                        cout<<count++<<" ";
                        
                    }
                
                // Num 2
                int count1 = 2*row;
                for(int col = 0; col<row; col++)
                    {
                        cout<<count1--<<" ";
                    }
                cout<<endl;
            }
    }