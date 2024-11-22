#include<iostream>
using namespace std;
int main()
    {
        int n;
        cout<<"Enter the number of rows"<<endl;
        cin>>n;
        //outer loop
        for(int row = 0; row<n; row++)
            {
                // stars of part 1
                for(int col = 0; col<n-row; col++)
                    {
                        cout<<"* ";
                    }  
                // space of part 1
                for(int col = 0; col<row; col++)
                    {
                        cout<<"  ";
                    }
                // space of part 2
                for(int col = 0; col<row; col++)
                    {
                        cout<<"  ";
                    }
                // stars of part 2
                for(int col = 0; col<n-row; col++)
                    {
                        cout<<"* ";
                    }
                cout<<endl;
            }

            for(int row = 0; row<n;row++)
                {
                    // stars
                    for(int col = 0; col<row+1; col++)
                        {
                            cout<<"* ";
                        }
                    // space
                    for(int col = 0; col<n-row-1;col++)
                        {
                            cout<<"  ";
                        }
                    // space
                    for(int col = 0; col<n-row-1;col++)
                        {
                            cout<<"  ";
                        }
                    // stars
                    for(int col = 0; col<row+1; col++)
                        {
                            cout<<"* ";
                        }
                    cout<<endl;
                }
    }
