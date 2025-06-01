#include<iostream>
using namespace std;
int solve(int N, int x, int y, int z)
    {
        if(N == 0)
            {
                return 0;
            }
        if(N < 0)
            {
                return INT_MIN;
            }
        int ans1 = solve(N-x,x,y,z) + 1;
        int ans2 = solve(N-y,x,y,z) + 1;
        int ans3 = solve(N-z,x,y,z) + 1;

        int ans = max(ans1, max(ans2, ans3));
        return ans;
    }
int main()
    {
         int N = 7;
        int x = 5;
        int y = 2;
        int z = 2;
        int ans = solve(N,x,y,z);
        if(ans < 0)
            {
                ans = 0;
            }
        cout<<"Answer is: "<<ans<<endl;
        return 0;
    }