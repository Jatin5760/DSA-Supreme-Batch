#include<iostream>
using namespace std;
void subsequence(string str, string output, int i)
    {
        if(i>=str.length())
            {
                cout<<output<<endl;
                return;
            }

        //exclude
        subsequence(str, output, i + 1);

        //include
        output.push_back(str[i]);
        subsequence(str, output, i + 1);
    }
int main()
    {
        string str = "abc";
        string output = " ";

        int i = 0;

        subsequence(str, output, i);

        return 0;
    }