#include<iostream>
using namespace std;
int fact(int num)
    {
        if(num == 1 || num == 0)
            {
                return 1;
            }
        
        return num * fact(num - 1);

    }
int main()
    {
        int num;
        cout<<"Enter the num: ";
        cin>>num;


        int ans = fact(num);
        cout<<ans<<endl;

        return 0;

    }