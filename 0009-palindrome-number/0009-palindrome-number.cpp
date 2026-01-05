class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int originalNum = x;
        vector<int>v;
        while(x!=0){
            int digit = x % 10;
            v.push_back(digit);
            x = x / 10;
        }
        long long num = 0;
        for(int i = 0; i < v.size(); i++){
            num = num * 10 + v[i];
        }
        return num == originalNum;
    }
};