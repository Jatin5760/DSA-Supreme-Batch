class Solution {
public:
    int longestValidParentheses(string s) {
        int lastInvalid = -1;
        int validLen = -1;
        int maxLen = 0;
        stack<int>st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(i);
            }
            else if (s[i] == ')'){
                if(st.empty()){
                    lastInvalid = i;
                }
                else{
                    st.pop();

                    if(st.empty()){
                        maxLen = max(maxLen, i - lastInvalid);
                    }
                    else{
                        maxLen = max(maxLen, i - st.top());
                    }
                }
            }
        }
        return maxLen;
    }
};