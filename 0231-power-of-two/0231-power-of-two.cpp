class Solution {
public:
    bool power(int n){
        if(n <= 0){
            return false;
        }
        if(n == 1){
            return true;
        }
        if(n%2!=0)return false;
       return power(n/2);
    }
    bool isPowerOfTwo(int n) {
        if(n == 1){
            return true;
        }
        return power(n);
    }
};