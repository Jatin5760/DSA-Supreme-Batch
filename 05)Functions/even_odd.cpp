#include<iostream>
using namespace std;
int evenorOdd(int r)
    {
        if(r%2==0)
            {
                return 1;
            }
        else
            {
                return 0;
            }
    }
int main()
    {

        int n;
        cout<<"Enter the number: "<<endl;
        cin>>n;

        if(evenorOdd(n)==1)
            {
                cout<<"Number was even: "<<n<<endl;
            }
        else
            {
                cout<<"Number was odd: "<<n<<endl;
            }
    }