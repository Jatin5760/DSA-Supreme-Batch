class Solution {
public:
    vector<int> findNSR(vector<int>& heights){
        int n = heights.size();
        vector<int>nsr(n , n);
        stack<int>st;
        for(int i = n -1; i>=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(!st.empty()){
                nsr[i] = st.top();
            }
            st.push(i);
        }
        return nsr;
    }

    vector<int> findPSL(vector<int>& heights){
        int n = heights.size();
        vector<int>psl(n , -1);
        stack<int>st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                st.pop();
            }
            if(!st.empty()){
                psl[i] = st.top();
            }
            st.push(i);
        }
        return psl;
    }
    int largestRectangleArea(vector<int>& heights) {
        // Method - 1
        
        /*
        int maxArea = 0;
        int n = heights.size();

        for(int i = 0; i < n; i++){
            int minheight = heights[i];
            for(int j = i; j < n; j++){
                minheight = min(minheight, heights[j]);
                int width = j - i + 1;
                int area = width * minheight;
                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
        */

        // Method - 2 (Monotonic Stack)
        int maxArea = 0;
        int n = heights.size();
        vector<int> nsr = findNSR(heights);
        vector<int> psl = findPSL(heights);

        for(int i = 0; i < n; i++){
            int width = nsr[i] - psl[i] - 1;
            int Area = width * heights[i];
            maxArea = max(maxArea, Area); 
        }
        return maxArea;
    }
};