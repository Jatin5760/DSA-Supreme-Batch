#include<iostream>
using namespace std;
int main(){

    // Ham pointer ko null par set kar sakte hai but refernce varaible ko null par set nahi kar sakte.
    // Pass by reference ke liye use karte hai. 

    // Reference varible matlab same memory location ko mai different naam se pukkar sakta hu.
    int a = 5;
    int &b = a;

    cout<<a<<endl;
    cout<<b<<endl;

    a++;
    cout<<b<<endl;
}