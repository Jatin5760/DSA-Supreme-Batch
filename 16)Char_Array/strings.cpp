#include<iostream>
using namespace std;
int main()
    {
        char name[100];

        cout<<"Enter your name: "<<endl;
        //cin>>name; 

        /* 

        Agar ayese input loge toh by default array me input ke baad ek null character a jayega (\O)
        (\O) null character string ke termination ko darshata hai.
        Ascii value null character ki zero hoti hai.
        cin>> tab, space and enter ko print nhi kar sakta.

        */

        //cout<<"Apka naam: "<<name<<" Hai"<<endl;

        char name2[10];
        cin.getline(name2,50);
        cout<<"Apka pura naam: "<<name2<<" Hai"<<endl;


        char arr[50];

        cin>>arr[2];

        cin>>arr[49];

        cin>>arr; 



    }