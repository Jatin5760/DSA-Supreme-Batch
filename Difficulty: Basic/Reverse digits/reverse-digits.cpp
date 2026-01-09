class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int num = n;
        int ans = 0;
        
        while(num != 0){
            int digit = num % 10;
            ans = ans*10 + digit;
            num = num / 10;
        }
        return ans;
    }
};