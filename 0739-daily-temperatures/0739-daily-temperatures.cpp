class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int>st;
        vector<int>ngr(n , -1);
        for(int i = n - 1; i >=0; i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(!st.empty()){
                ngr[i] = st.top();
            }
            st.push(i);
        }
        vector<int>ans(n,0);
        for(int i = 0; i < ngr.size(); i++){
            if(ngr[i] == -1){
                ans[i] = 0;
            }
            else{
                ans[i] = ngr[i] - i;
            }
        }
        return ans;
    }
};