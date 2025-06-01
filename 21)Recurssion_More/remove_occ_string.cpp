#include<iostream>
using namespace std;
void removeOcc(string& s1, string& part)
    {
        int found = s1.find(part);
        if(found!=string::npos)
            {
                string left_part = s1.substr(0, found);
                string right_part = s1.substr(found+part.size(), s1.size());
                s1 = left_part + right_part;
                removeOcc(s1,part);
            }
        else
            {
                return;
            }
    }
int main()
    {
        string s1 = "daabcbaabcbc";
        string part = "abc";
        removeOcc(s1,part);

        cout<<"Answer is: "<<s1<<endl;

    







    }