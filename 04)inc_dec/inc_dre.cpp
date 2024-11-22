#include<iostream>
using namespace std;
int main()
    {
        // int a = 5;
        // cout<<(++a) * (++a);


        int n;
        cout<<"Enter the value of n"<<endl;
        cin>>n;

        switch (n)
        {
        case 1: cout<<"Jatin Sharma"<<endl;
            break;
        case 2: cout<<"Nupur Shivani"<<endl;
            break;
        default:
        cout<<"Jatin and Nupur"<<endl;
            break;
        }
    }