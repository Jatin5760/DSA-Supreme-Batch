#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "abbaca";
    string ans = "";

    for (int i = 0; i < s1.length(); i++)
    {
        if (ans.length() - 1 >= 0)
        {
            if (ans[ans.length() - 1] == s1[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s1[i]);
            }
        }
        else
        {
            ans.push_back(s1[i]);
        }
    }

       cout<<ans;
}