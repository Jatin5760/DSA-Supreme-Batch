#include<iostream>
using namespace std;
void stringAdd(string& s1, string& s2, int p1, int p2, int carry, string& ans)
    {
        // Base Case
        if(p1 < 0 && p2 < 0)
            {
                if(carry!=0)
                    {
                        ans.push_back(carry + '0');
                    }
                return;
            }
        // ek case
        int n1;
        if (p1 >= 0) 
            {         
                n1 = s1[p1] - '0'; 
            } 
        else 
            {
                n1 = 0;            
            }

        int n2;
        if (p2 >= 0) 
            {         
                n2 = s2[p2] - '0'; 
            } 
        else 
            {
                n2 = 0;            
            }


        int csum = n1+n2+carry;
        int digit = csum % 10;
        carry = csum / 10;
        ans.push_back(digit + '0');

        // recurssion
        stringAdd(s1,s2,p1 - 1, p2 - 1,carry, ans);
    }
int main()
    {
        string s1 = "456";
        string s2 = "77";

        string ans = "";

        stringAdd(s1,s2,s1.size() - 1, s2.size() - 1, 0, ans);
        reverse(ans.begin(), ans.end());

        cout<<"Your answer is: "<<ans<<endl;
    }