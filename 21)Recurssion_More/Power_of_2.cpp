#include<iostream>
using namespace std;
int power2(int Num, int N)
    {
        if(N == 1)
            {
                return 2;
            }

        return Num * power2(Num, N - 1);

    }
int main()
    {
        int Num = 2;
        int N;
        cout<<"Enter the value of N: ";
        cin>>N;
        cout<<"Your answer is: "<<power2(Num, N)<<endl;

        return 0;
    }
