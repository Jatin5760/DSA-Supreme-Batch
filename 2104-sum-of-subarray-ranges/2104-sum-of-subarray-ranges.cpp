class Solution {
public:
    vector<int> findNGR(vector<int>& nums){
        int n = nums.size();
        vector<int>ngr(n, n);
        stack<int>st;
        for(int i = n - 1; i >=0; i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            if(!st.empty()){
                ngr[i] = st.top();
            }
            st.push(i);
        }
        return ngr;
    }
    vector<int> findNSR(vector<int>& nums){
        int n = nums.size();
        stack<int>st;
        vector<int>nsr(n, n);
        for(int i = n - 1; i>=0; i--){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            if(!st.empty()){
                nsr[i] = st.top();
            }
            st.push(i);
        }
        return nsr;
    }
    vector<int> findPSL(vector<int>& nums){
        int n = nums.size();
        stack<int>st;
        vector<int>psl(n, -1);
        for(int i = 0; i<n; i++){
            while(!st.empty() && nums[st.top()] > nums[i]){
                st.pop();
            }
            if(!st.empty()){
                psl[i] = st.top();
            }
            st.push(i);
        }
        return psl;
    }
    vector<int> findPGL(vector<int>& nums){
        int n = nums.size();
        stack<int>st;
        vector<int>pgl(n, -1);
        for(int i = 0; i<n; i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }
            if(!st.empty()){
                pgl[i] = st.top();
            }
            st.push(i);
        }
        return pgl;
    }

    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long smallest = 0;
        long long largest = 0;

        vector<int>ngr = findNGR(nums);
        vector<int>nsr = findNSR(nums);
        vector<int>psl = findPSL(nums);
        vector<int>pgl = findPGL(nums);

        for(int i = 0; i < n; i++){
            int previousSmallestLeft = i - psl[i];
            int nextSmallestRight = nsr[i] - i;

            int nextGreatestRight = ngr[i] - i;
            int previousGreatestLeft = i - pgl[i];

            smallest += (nextSmallestRight * previousSmallestLeft)*1LL * nums[i];
            largest += (nextGreatestRight * previousGreatestLeft)*1LL * nums[i];
        }
        return largest - smallest;
    }
};