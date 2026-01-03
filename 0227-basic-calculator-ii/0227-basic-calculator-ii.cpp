class Solution {
public:
    int calculate(string s) {
        stack<int>st; 
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        int n = s.size();
        int num = 0;
        char lastOps = '+';


        for(int i = 0; i < n; i++){
            // it is a number
            if(isdigit(s[i])){
                num = num * 10 + (s[i] - '0');
            }
            // It is a operator
            if((!isdigit(s[i]) || i == n-1)){

                if(lastOps == '+'){
                    st.push(num);
                }
                else if(lastOps == '-'){
                    st.push(-num);
                }

                else if(lastOps == '*'){
                    int top = st.top(); st.pop();
                    st.push(top * num);
                }
                else if(lastOps == '/'){
                    int top = st.top(); st.pop();
                    st.push(top / num);
                }
                lastOps = s[i];
                num = 0;
            }
        }

        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};