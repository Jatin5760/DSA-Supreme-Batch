#include<iostream>
using namespace std;
int main()
    {
        char name[100];

        cout<<"Enter your name: "<<endl;
        cin>>name; 
        // agar ayese input loge toh by default array me input ke baad ek null character a jayega (\O)
        // (\O) null character string ke termination ko darshata hai.
        // Ascii value null character ki zero hoti hai.
        // cin>> tab, space and enter ko print nhi kar sakta.

        cout<<"Apka naam: "<<name<<" Hai"<<endl;
    }