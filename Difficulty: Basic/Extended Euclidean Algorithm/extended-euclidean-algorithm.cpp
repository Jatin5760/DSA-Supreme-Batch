

class Solution {
  public:
    int extendedGCD(int a, int b, int& x, int& y){
        // Base case
        if(b == 0){
            x = 1;
            y = 0;
            return a;
        }
        
        int x1, y1;
        int gcd = extendedGCD(b, a % b, x1, y1);
        
        x = y1;
        y = x1 - (a/b) * y1;
        
        return gcd;
    }
    vector<int> gcd(int a, int b) {
        // code here
        int x;
        int y;
        int gcd = extendedGCD(a, b, x, y);
        return {gcd, x, y};
    }
};