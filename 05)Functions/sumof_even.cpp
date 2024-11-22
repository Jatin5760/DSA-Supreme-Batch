#include<iostream>
using namespace std;

int sumofEven(int n)
    {
        int sum = 0;
        for(int i = 0; i <= n; i++)
            {
                if(i%2==0)
                    {
                        sum = sum + i;
                    }
            }
            return sum;
    }

int main()
    {
        int n;
        cout<<"Enter the number till which you wanted to find the sum of evens: "<<endl;
        cin>>n;

        int Sum_Even = sumofEven(n);
        cout<<"The sum is: "<<Sum_Even<<endl;
    }