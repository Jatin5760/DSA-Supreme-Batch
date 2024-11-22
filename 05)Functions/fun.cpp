#include<iostream>
using namespace std;


void printNumber(int num) // Pass by value matlab copy create karna.
    {
        // Is function me jo int num hai wo copy value hai. aur actual value wala variable main function me hai.
        cout<<num<<endl;
    }
int main()
    {
        int a = 5;
        printNumber(a);
    }
