#include<iostream>
using namespace std;
int countVow(string s1, int index)
    {
        // Base case
        if(index < 0)
            {
                return 0;
            }

        // One Case
        if(s1[index] == 'a' || s1[index] == 'e' || s1[index] == 'i' || s1[index] == 'o' || s1[index] == 'u')
            {
                return 1 + countVow(s1, index - 1);
            }

        else
            {
                return countVow(s1, index - 1);
            }
    }
int main()
    {
        string s1 = "jatiiiin";
        int index = s1.size() - 1;

        cout<<"Your vowel count is : "<<countVow(s1, index)<<endl;


        return 0;
    }