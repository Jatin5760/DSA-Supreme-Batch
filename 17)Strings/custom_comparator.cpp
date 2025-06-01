#include<iostream>
using namespace std;
bool cmp(char x, char y)
    {
        return x>y;
    }
int main()
    {
        string s = "jatin";

        sort(s.begin(), s.end(), cmp); // Sorted in reverse order.

        cout<<s<<endl;
    }