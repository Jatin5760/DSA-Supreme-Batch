#include<iostream>
using namespace std;
int solve(int dividend, int divisor)
    {
        int s = 0;
        int e = dividend;
        int mid = s + (e - s) / 2;
        int ans = -1;

        while(s<=e)
            {
                if(mid*divisor == dividend)
                    {
                        return mid;
                    }
                else if(mid*divisor<dividend)
                    {
                        ans = mid;
                        s = mid + 1;
                    }
                else
                    {
                        e = mid - 1;
                    }
                mid = s + (e - s) / 2;
            }
        return ans;
    }
int main()  
    {
        int dividend;
        cout<<"Enter the value of dividend"<<endl;
        cin>>dividend;

        int divisor;
        cout<<"Enter the value of divisor"<<endl;
        cin>>divisor;

        int ans = solve(dividend, divisor);

        cout<<"Answer is: "<<ans<<endl;

        int precision;
        cout<<"Enter the number of digit of precision: "<<endl;
        cin>>precision;

        double finalans = ans;
        double step = 0.1;

        for(int i = 0; i<precision; i++)
            {
                for(double j = finalans; j*divisor<=dividend; j = j + step)
                    {
                        finalans = j;
                    }
                step = step / 10;
            }
            
            cout<<"Your final answer is : "<<finalans<<endl;
        
        return 0;
    }