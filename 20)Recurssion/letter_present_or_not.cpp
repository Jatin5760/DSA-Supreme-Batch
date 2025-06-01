#include<iostream>
using namespace std;
void searchChar(string name, int size, int i, int ch)
    {
        if(i>=size)
            {
                return;
            }
        
        if(name[i] == ch)
            {
                cout<<"Yes ch is present: "<<name[i]<<endl;
            }        
        searchChar(name, size, i+1, ch);

    }
int main()
    {
        string name = "Lovebabbar";
        int size = name.size();

        int i = 0;

        char ch;
        cout<<"Enter the character"<<endl;
        cin>>ch;

        searchChar(name, size, i, ch);
    }