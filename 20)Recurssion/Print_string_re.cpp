#include<iostream>
using namespace std;
void printString(string& s1, int n)
    {
        if(n == 10)
            {
                return;
            }

        cout<<s1<<endl;
        printString(s1, n + 1);
    }
int main()
    {
        string s1 = "Coder Army";
        printString(s1, 0);
    }