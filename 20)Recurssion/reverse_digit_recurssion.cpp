#include<iostream>
using namespace std;
void printReverse(int n)
    {
        if(n == 0)
            {
                return;
            }

        int digit = n % 10;
        cout<<digit<<" ";

        printReverse(n / 10);
    }
int main()
    {
        int n;
        cout<<"Enter the value of n: "<<endl;
        cin>>n;

        printReverse(n);

        return 0;
    }