#include<iostream>
using namespace std;
void printEven(int Num, int N)
    {
        if(Num > N)
            {
                return;
            }

        cout<<Num<<endl;
        printEven(Num + 2, N);
        
        
    
    }
int main()
    {
        int Num;
        cout<<"Enter the number: ";
        cin>>Num;

        printEven(Num, 9);
    }