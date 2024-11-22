// In this program we will reverse an integer.

#include<iostream>
using namespace std;
int revInt(int n)
    {
        int ans = 0;
        int i = 0;
        while(n>0)
            {
               int digi =  n%10;
               ans = (ans*10)+digi;
               n =  n / 10;

            }
            return ans;
    }
int main()
    {
        int n;
        cin>>n;

        int rev = revInt(n);
        cout<<rev;
    }