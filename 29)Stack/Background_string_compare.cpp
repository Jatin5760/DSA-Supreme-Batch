stack<char> st1;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == '#')
            {
                if(!st1.empty())
                {
                    st1.pop();
                }
            }
            else
            {
                st1.push(s[i]);
            }
            
        }

        stack<char> st2;
        for(int i = 0; i<t.size(); i++)
        {
            if(t[i] == '#')
            {
                if(!st2.empty())
                {
                    st2.pop();
                }
            }
            else
            {
                st2.push(t[i]);
            }
            
        }

        string result1;
        while(!st1.empty())
        {
            result1 = st1.top() + result1;
            st1.pop();
        }

        string result2;
        while(!st2.empty())
        {
            result2 = st2.top() + result2;
            st2.pop();
        }

        return result1==result2;