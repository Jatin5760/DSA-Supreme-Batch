#include<iostream>
using namespace std;
void lowerCase(string& str, int index)
    {
        // Base Case
        if(index < 0)
            {
                return;
            }

        // One Case
        str[index] = 'A'+ str[index] - 'a';
        lowerCase(str, index - 1);
    }
int main()
    {
        string str = "jatin";
        int index = str.size() - 1;

        lowerCase(str, index);

        cout<<str<<endl;


        return 0;
    }