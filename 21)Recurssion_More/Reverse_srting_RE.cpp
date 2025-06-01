#include<iostream>
using namespace std;
void reverseStr(string& str, int first, int last)
    {
        if(last< first)
            {
                return;
            }

        swap(str[first], str[last]);
    
        reverseStr(str, first + 1, last - 1);
    }
int main()
    {
        string str = "Jatin";
        int first = 0;
        int last = str.size() - 1;

        reverseStr(str, first, last);
        cout<<str<<endl;

        return 0;

    }