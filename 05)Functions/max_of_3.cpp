#include<iostream>
using namespace std;


int maxNum(int x, int y, int z)
    {
        if(x>y && x>z)
            {
                return x;
            }
        else if (y>x && y>z)
            {
                return y;
            }
        else
            {
                return z;
            }     
    }
int main()
    {
        int a,b,c;
        cout<<"Enter three numbers"<<endl;
        cin>>a>>b>>c;

        int MAX = maxNum(a,b,c);
        cout<<"Maximum Number is: "<<MAX<<endl;

    }