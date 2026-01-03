class Solution {
public:
    int calculate(string s) {
        stack<int>st; 
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        int n = s.size();
        long long sum = 0;
        int sign = 1;

        for(int i = 0; i < n; i++){

            // Number
            if(isdigit(s[i])){
                long long num = 0; 

                while(n > i && isdigit(s[i])){
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                sum = sum + (num * sign);
                i--;
            }
            else if(s[i] == '+'){
                sign  = 1;
            }
            else if(s[i] == '-'){
                sign = -1;
            }
            else if(s[i] == '('){
                st.push(sum);
                st.push(sign);
                sum = 0;
                sign = 1;
            }
            else if(s[i] == ')'){
                sum = st.top()*sum;
                st.pop();
                sum +=st.top();
                st.pop();
            }
        }
        return sum;
    }
};