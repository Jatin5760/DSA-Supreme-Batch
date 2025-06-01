#include<iostream>
using namespace std;

int main()
{
    vector<int> s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    s.push_back(4);
    s.push_back(5);
    
    
    stack<char>st;
    for(int i = 0; i<s.size(); i++)
    {   
        st.push(s[i]);
    }

    int i = 0;
    while(!st.empty())
    {
        s[i] = st.top();
        st.pop();
        i++;
    }


    return 0;
}