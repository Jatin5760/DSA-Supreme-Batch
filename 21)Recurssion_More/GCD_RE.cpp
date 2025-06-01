#include<iostream>
using namespace std;
void printGCD(int N, int M)
    {
        // Base Case
        if(M == 0)
            {
                cout<<N<<endl;
                return;
            }

        printGCD(M, N % M);
    }
int main()
    {
        int N = 6993;
        int M = 7000;

        printGCD(N, M);


        return 0;
    }