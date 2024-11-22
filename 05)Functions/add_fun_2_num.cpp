#include<iostream>
using namespace std;

int getSum(int x,int y)
    {
        int sum = x + y;

        return sum;
    }
int main()
    {
        int a,b;
        cout<<"Enter the number"<<endl;
        cin>>a>>b;

        int addition = getSum(a,b);
        cout<<"Addition of both number is: "<<addition<<endl;
    }