#include<iostream>
using namespace std;

int main()
    {
        cout<<endl;
         
        for(int row = 0; row < 3; row = row + 1){
            if(row == 0 || row == 2)
                {
                    for(int col = 0; col < 5; col++)
                        {
                            cout<<"* ";
                        }
                    cout<<endl;
                }
            
            else
                {
                   for(int col = 0; col < 5; col = col + 1)
                    {
                        if(col == 0 || col == 4){
                            cout<<"* ";
                        }

                        else
                            {
                                cout<<"  ";
                            }
                    }
                    cout<<endl;
                }
        }


        cout<<endl;



// 6 star hollow rectangle
        for(int row = 0; row < 6; row++)
            {
                if(row == 0 || row == 5)
                    {
                        for(int col = 0; col < 5; col++)
                            {
                                cout<<"* ";
                            }
                        cout<<endl;
                    }

                else
                    {
                        for(int col = 0; col <5; col++)
                            {
                                if(col == 0 || col == 4)
                                    {
                                        cout<<"* ";
                                    }
                                
                                else
                                    {
                                        cout<<"  ";
                                    }
                            }

                            cout<<endl;

                    }
            }
    }