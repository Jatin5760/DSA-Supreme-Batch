class Solution {
public:
    vector<int> findNSR(vector<int>& height){
        int n = height.size();
        stack<int>st;
        vector<int>nsr(n , n);
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && height[st.top()] >= height[i]){
                st.pop();
            }
            if(!st.empty()){
                nsr[i] = st.top();
            }
            st.push(i);
        }
        return nsr;
    }
    vector<int> findPSL(vector<int>& height){
        int n = height.size();
        stack<int>st;
        vector<int>psl(n , -1);
        for(int i = 0; i < n ; i++){
            while(!st.empty() && height[st.top()] > height[i]){
                st.pop();
            }
            if(!st.empty()){
                psl[i] = st.top();
            }
            st.push(i);
        }
        return psl;
    }
    int rectangle(vector<int>& height){
        int n = height.size();
        int maxArea = 0;
        vector<int> nsr = findNSR(height);
        vector<int> psl = findPSL(height);

        for(int i = 0; i < n; i++){
            int width = nsr[i] - psl[i] - 1;
            int area = width * height[i];
            maxArea = max(area, maxArea);
        }
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans = 0;
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int>height(col, 0);
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == '0'){
                    height[j] = 0;
                }
                else{
                    height[j]+=1;
                }
            }
            ans = max(ans, rectangle(height));
        }
        return ans;
    }
};