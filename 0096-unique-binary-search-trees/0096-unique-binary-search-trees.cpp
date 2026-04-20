class Solution {
public:
    int solve(int n){
        if (n <= 1) return 1;
        int count = 0;
        for(int i = 1; i <= n; i++){
            int left = solve(i - 1);
            int right = solve(n - i);
            count += left * right;
        }
        return count;
    }
    int numTrees(int n) {
        return solve(n);
    }
};