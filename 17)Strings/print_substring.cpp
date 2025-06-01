#include<iostream>
#include<string>
using namespace std;

int main()
    {
        string str = "abc";

        for(int i = 0; i<str.length(); i++)
            {
                for(int j = i; j<str.length(); j++)
                    {
                       cout << str.substr(i, j-i+1) <<" ";
                    }
                
            }
    }