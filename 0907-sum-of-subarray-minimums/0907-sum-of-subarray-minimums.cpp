class Solution {
public:
    vector<int> findPsl(vector<int>& arr){
        stack<int>st;
        int n = arr.size();
        vector<int>psl(n, -1);

        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            if(!st.empty()){
                psl[i] = st.top();
            }

            st.push(i);
        }
        return psl;
    }
     vector<int> findNsr(vector<int>& arr){
        stack<int>st; 
        int n = arr.size();
        vector<int>nsr(n, n);
        
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                nsr[i] = st.top();
            }
            st.push(i);
        }
        return nsr;
    }

    int sumSubarrayMins(vector<int>& arr) {
        long long total = 0; 
        long long MOD = 1e9 + 7;

        vector<int> psl = findPsl(arr); // O(n)
        vector<int> nsr = findNsr(arr); // O(n)

        for(int i = 0; i < arr.size(); i++){

            long long left = i - psl[i];
            long long right = nsr[i] - i;

            total = (total + (1LL * arr[i] * left % MOD * right) % MOD) % MOD;
        }
        return total;
    }
};