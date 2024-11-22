#include<iostream>
using namespace std;

int decimalToBinary(int n)
    {
        while(n>0)
            {
                int bit = n % 2;
                cout<<bit<<endl;
                n = n/2;
            }
            return 0;
    }
int main()
    {
        int n;
        cout<<"Enter the number: ";
        cin>>n;

        int binary = decimalToBinary(n);
    
    }