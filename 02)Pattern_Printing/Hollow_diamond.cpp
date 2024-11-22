#include<iostream>
using namespace std;

int main()
    {
        for(int row = 0; row < 4; row++)
            {
                // Spaces
                for(int col = 0; col<4-row-1; col++)
                    {
                        cout<<" ";
                    }
                
                // Stars
                for(int col = 0; col<2*row+1; col++)
                    {
                        if(col==0 || col==2*row)
                        {
                            cout<<"*";
                        }
                        else
                            {
                                cout<<" ";
                            }
                    }
                    cout<<endl;
            }

            

                for(int row = 0; row < 4; row++)
                    {
                        // Space for inverted part

                        for(int col = 0; col<row;col++)
                            {
                                cout<<" ";
                            }

                        // Stars for inverted pyramid
                        for(int col = 0;col<2*4-2*row-1;col++)
                            {
                                if(col==0|| col== 2*4-2*row-2)
                                    {
                                        cout<<"*";
                                    }
                                else
                                    {
                                        cout<<" ";
                                    }
                                
                            }
                            cout<<endl;

                    }
    }