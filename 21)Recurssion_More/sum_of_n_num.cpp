#include<iostream>
using namespace std;
int sumNum(int Num)
    {
        if(Num == 1)
            {
                return 1;
            }

        return Num + sumNum(Num - 1);
    }
int main()
    {
        int Num;
        cout<<"Enter the number: ";
        cin>>Num;
        

        cout<<sumNum(Num)<<endl;
    }