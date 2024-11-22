#include<iostream>
using namespace std;
int sumOfPrime(int n)
    {
        int sum = 0;
        for(int i = 2; i<=sqrt(n); i++)
            {
                if(n%i != 0)
                    {
                        sum = sum + n;
                    }
            }
        return sum;
    }
int main()
    {
        int n;
        cout<<"Enter the value: "<<endl;
        cin>>n;

        int prime_Sum = sumOfPrime(n);
        cout<<prime_Sum;
    }