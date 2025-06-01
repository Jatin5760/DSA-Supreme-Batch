#include<iostream>
#include<string>
using namespace std;
void reverseString(string& s1, int i, int j)
    {
        if(i>j)
            {
                return;
            }

        swap(s1[i], s1[j]);

        reverseString(s1, i+1, j-1);

        
    }
int main()
    {
        string s1 = "abcddedg";
        int size = s1.size();
        int i = 0;
        int j = size - 1;

        reverseString(s1,i,j);

        cout<<s1<<endl;

    }