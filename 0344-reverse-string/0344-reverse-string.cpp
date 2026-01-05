class Solution {
public:
    void rev(vector<char>& s, int l , int r){
        if(l>=r){
            return;
        }
        swap(s[l], s[r]);
        rev(s, l + 1, r - 1);
    }

    void reverseString(vector<char>& s) {
    
    // Method - 1 (In place) - Two Pointer 
        
        /* 
        int start = 0;
        int end = s.size() - 1;
        while(start <= end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
        */
    
    // Method - 2 Recurrsion
        rev(s, 0, s.size() - 1);

    }
};