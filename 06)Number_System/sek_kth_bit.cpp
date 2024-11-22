#include<iostream>
using namespace std;
int decimalToBinary(int n)
    {
        int ans = 0;
        int i = 0;
        while(n>0)
            {
                int digit = n % 2;
                ans = digit * pow(10,i++) + ans;
                n = n / 2;
            } 
            return ans;
    }

int setBit(int k, int answer, int n)
    {
        int flag = 1<<k;
        int setAnswer = n | flag;

        return setAnswer;
    }
int main()
    {
        int n;
        cout<<"Enter the number: ";
        cin>>n;

        int k;
        cout<<"Enter the bit to set: ";
        cin>>k;

        int answer = decimalToBinary(n);
        cout<<answer<<endl;

        int answer2 = setBit(k, answer, n);
        cout<<answer2<<endl;
    }