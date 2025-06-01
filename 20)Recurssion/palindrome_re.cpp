#include<iostream>
using namespace std;
bool palindromeCheck(string& s1, int start, int end)
    {
        // Base case

        if(start >= end)
            {
                return true;
            }

        // One case

          if(s1[start] != s1[end])
            {
                return false;
            }

        // Recursion case
        return palindromeCheck(s1, start + 1, end - 1);

    }
int main()
    {
        string s1 = "racecar";
        int start = 0;
        int end = s1.size() - 1;

        bool b = palindromeCheck(s1,start,end);
        cout<<b<<endl;

    }