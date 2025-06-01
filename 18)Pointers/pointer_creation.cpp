#include<iostream>
using namespace std;
int main()
    {
        // int a = 5;

        // // Pointer create
        // int* ptr = &a;

        // // Access the value ptr is pointing to (dereferencing)
        // cout<< *ptr <<endl;



        // int a = 5;
        // int* p  = &a;

        // cout<<sizeof(p)<<endl;

        // char ch = 'b';
        // char* c  = &ch;

        // cout<<sizeof(c)<<endl;

        // double d = 5.03;
        // double* dtr  = &d;

        // cout<<sizeof(dtr)<<endl;


        // This is bad practice. This is segmentation fault (tum apni memory ko hi access karo hamari memory ko access mat karo).
        // int* ptr;
        // cout<< *ptr <<endl;


        // Creating a null pointer is a good practice.

        // int* ptr = 0;
        // cout<< *ptr <<endl;


        // int a = 5;

        // cout<<a+1<<endl;

        // int* ptr = &a;

        // cout<<ptr+1;// eg 104 + 1 = 108 since int datatype take 4 bytes. 


        // Copying the pointer.
        int a = 5;
        int* ptr = &a;
        int* ptr2 = ptr; // Copy pointer.  Both pointer pointes to a same variable. 

        cout<<*ptr<<endl;
        cout<<*ptr2<<endl;


        
    }