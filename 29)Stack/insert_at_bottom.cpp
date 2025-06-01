#include<iostream>
using namespace std;
int main()
{
    stack<int> temp;
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }

    st.push(x);
    while(!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }

    return st;

    return 0;
}

