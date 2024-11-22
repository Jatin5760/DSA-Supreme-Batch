#include<iostream>
#include<cmath>
using namespace std;
int numFormation(int n)
    { 
        int ans = 0;
        int i = 0;

        while(n>0)
            {
                int bit = n % 2;
                ans = bit * pow(10,i++) + ans;
                n = n / 2;
            }
        return ans;
    }

int main()
    {
        int n;
        cin>>n;

        int binary = numFormation(n);
        cout<<binary<<endl;
    }
