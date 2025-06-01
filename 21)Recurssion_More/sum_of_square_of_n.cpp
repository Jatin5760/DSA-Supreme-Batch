#include<iostream>
using namespace std;
int sumSquare(int N)
    {
        if(N == 1)
            {
                return 1;
            }

        return N*N + sumSquare(N - 1);
    }
int main()
    {
        int N;
        cout<<"Enter the number: ";
        cin>>N;

        cout<<"Your answer: "<<sumSquare(N)<<endl;
        return 0;
    }
