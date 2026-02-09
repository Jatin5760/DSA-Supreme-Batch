class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> st;
        int count = 0;

        // Step 1: traverse from back
        for (int i = s.size() - 1; i >= 0; i--) {

            // Step 3: if 'b' and stack top is 'a'
            if (!st.empty() && s[i] == 'b' && st.top() == 'a') {
                st.pop();
                count++;
            } 
            // Step 2: push element
            else {
                st.push(s[i]);
            }
        }

        // Step 4: return count
        return count;
    }
};
