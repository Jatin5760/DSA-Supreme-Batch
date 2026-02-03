class Solution {
public:
    bool power(int n){
        if(n <= 0) return false;
        if(n == 1) return true;
        if(n % 4 != 0)return false;

        return power(n/4);
    }
    bool isPowerOfFour(int n) {
        return power(n);
    }
};