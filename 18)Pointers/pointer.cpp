#include<iostream>
using namespace std;
int main()
    {
        int a = 5;

        // Here inside memory a block is created jiska naam A hai and usme value 5 padi hui hai.

        // ek data structure hota hai jisme variable name aur address dono ki mapping stored rehti hai 
        // Jaise ki varible A ka address usse mapped hoga and kahi na kahi stored hoga Symbol table mai.


        cout<<a<<endl;
        cout<<&a<<endl;  // Address will be printed in hexadecimal number system.


        int *ptr;

        // Ptr is pointer to interger data.
        // Pointer ek ayesa datatype hai jo ki sirf address ko store karta hai. 

        int* p = &a;

        /*

        int - datatype.
        * - dereferncing operator.
        p - variable name.
        & - address of operator.
        a - variable.

        int * - is a pointer to integer data.

        int *p - p is a pointer to integer data.



        */ 
        

        return 0;
    }