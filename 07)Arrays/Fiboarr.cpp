#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of elements in the Fibonacci array: ";
    cin>>n;

    int fib[1000];

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i<=n-1; i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }

    cout<<"Fibonacci array: ";
    for(int i = 0; i<n; i++)
    {
        cout<<fib[i]<<" ";
    }

    return 0;
}