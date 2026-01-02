class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i = 0; i < tokens.size(); i++){
            // if token is a number
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                int operand = stoi(tokens[i]);
                st.push(operand);
            }
            // if token is not a number
            else{

                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                if(tokens[i] == "+"){
                    st.push(a+b);
                }
                else if(tokens[i] == "-"){
                    st.push(a-b);
                }
                else if(tokens[i] == "*"){
                    st.push(a*b);
                }
                else if(tokens[i] == "/"){
                   st.push(a/b);
                }
            }
        }
        return st.top();
    }
};