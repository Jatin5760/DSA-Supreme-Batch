#include<iostream>
using namespace std;
int fibo(int N)
    {
        if(N == 0)
            {
                return 0;
            }
        if(N == 1)
            {
                return 1;
            }

        return fibo(N - 1) + fibo(N - 2);
    }
int main()
    {
        int N;
        cout<<"Enter the num: ";
        cin>>N;

        cout<<fibo(N)<<endl;

        return 0;
    }