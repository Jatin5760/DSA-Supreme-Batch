
stack<string> st;

for(int i = 0; v.size(); i++)
{
    if(s.empty())
    {
        s.push(v[i]);
    }
    else if (s.top() == v[i])
    {
        s.pop();
    }
    else
    {
        s.push(v[i]);
    }
    
}