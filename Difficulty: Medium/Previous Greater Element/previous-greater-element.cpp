class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        //  code here
        int n = arr.size();
        vector<int>ans(n , -1);
        stack<int>st;
        
        for(int i = 0; i < n; i++){
                while(!st.empty() && arr[i] >= st.top()){
                    st.pop();
                }
                
                if(!st.empty()){
                    ans[i] = st.top();
                }
            
            st.push(arr[i]);
        }
        return ans;
    }
};