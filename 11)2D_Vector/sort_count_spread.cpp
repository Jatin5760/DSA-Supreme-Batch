#include<iostream>
using namespace std;
int main()
    {
        int arr[6] = {2,0,2,1,1,0};
        int size = 6;

       int ones,twos,zeros;
        ones = zeros = twos = 0;

        for(int i = 0; i<size; i++)
            {
                if(arr[i] == 0)
                    {
                        zeros++;   
                    }
                else if(arr[i] == 1)
                    {
                        ones++;
                    }
                else
                    {
                        twos++;
                    }
            }

            cout<<"Number of Zeros: "<<zeros<<endl;
            cout<<"Number of Ones: "<<ones<<endl;
            cout<<"Number of Twos: "<<twos<<endl;



        //spread

         int i = 0; 
        while(zeros--)
            {
                arr[i] = 0;
                i++;
            }
        while(ones--)
            {
                arr[i] = 1;
                i++;
            }
        while(twos--)
            {
                arr[i] = 2;
                i++;
            }


        for(int i = 0; i<size; i++)
            {
                cout<<arr[i]<<" ";
            }

            cout<<endl;


    }
