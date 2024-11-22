#include<iostream>
using namespace std;
int main()
    {
        int n;
        cout<<"Enter the number"<<endl;
        cin>>n;

        for(int row = 0; row<n; row++)
            {
                // space
                for(int col = 0; col<n-row-1; col++)
                    {
                        cout<<" ";
                    }
                
                // Num
                int start = 1;
                for(int col = 0; col<2*row+1; col++)
                    {
                        if(row == 0 || row == n-1)
                            {
                                if(col%2==0)
                                    {
                                        cout<<start++;
                                    }
                                else
                                    {
                                        cout<<" ";
                                    }   
                            }
                        else
                            {
                                if(col==0)
                                    {
                                        cout<<1;
                                    }
                                else if (col == 2*row)
                                {
                                    cout<<row+1;
                                }
                                else
                                    {
                                        cout<<" ";
                                    }   
                            }       
                    }  
                cout<<endl;
            }
    }