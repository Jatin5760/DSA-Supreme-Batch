#include<iostream>
#include<string>
using namespace std;
void lastOcc(string& s1, int size, char& target, int i, int& ans)
    {
        //base case
        if(i>=size)
            {
                return;
            }
        
        if(s1[i] == target)
            {
                ans = i;
            }
         lastOcc(s1, size, target, i+1, ans);
    }

int main()
    {
         string s1= "abcddedg";
        
        int size = s1.size();
        char target = 'd';
        int i = 0;
        int ans = -1;

        lastOcc(s1, size, target, i, ans);
        cout<<ans<<endl;
    }