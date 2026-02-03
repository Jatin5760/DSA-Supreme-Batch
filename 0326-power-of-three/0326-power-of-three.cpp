class Solution {
public:
    bool power(int n){
        // Base cases
        if(n <= 0) return false;
        if(n == 1) return true;
        if(n % 3 != 0) return false;
        return power(n/3);
    }
    bool isPowerOfThree(int n) {
        if(n == 0){
            return false;
        }
        return power(n);
    }
};