#include<iostream>
using namespace std;
int findSqrt(int n)
    {
        int target = n;
        int s = 0;
        int e = n;
        int mid = s + (e - s) / 2;
        int ans = -1;

        while(s<=e)
            {
                if(mid*mid == target)
                    {
                        return mid;
                    }
                else if(mid*mid > target)
                    {
                        e = mid - 1;
                    }
                else
                    {
                        ans = mid;
                        s = mid + 1;
                    }
                 mid = s + (e - s) / 2;
            } 
        return ans;
    }

int main()
    {
        int n;
        cout<<"Enter the number: "<<endl;
        cin>>n;

        int ans = findSqrt(n);
        cout<<ans<<endl;

        double finalans = ans;
        double step = 0.1;

        int precision;
        cout<<"Enter the number of digit: "<<endl;
        cin>>precision;

        for(int i = 0; i<precision; i++)
            {
                for(double j = finalans; j*j<=n; j = j + step)
                    {
                        finalans = j;
                    }
                    step = step / 10;
            }

            cout<<"Your final answer is : "<<finalans<<endl;


        return 0;
    }