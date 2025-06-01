int count = 0;
        stack<int> st;
        vector<int> ans;
        
        for(int i = 0; i<str.size(); i++)
        {
            // Opening bracket
            if(str[i] == '(')
            {
                count++;
                st.push(count);
                ans.push_back(count);
            }
            
            // Closing bracket
            else if(str[i] == ')')
            {
                ans.push_back(st.top());
                st.pop();
            }
        }
        
        return ans;
        