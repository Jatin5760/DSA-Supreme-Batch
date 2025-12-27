class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);

        if(k == 0){
            return ans;
        }

        int low = - 1;
        int high = -1;
        int windowSum = 0;

        if(k > 0){
            low = 1;
            high = k;
        }
        else{
            low = n - abs(k);
            high = n - 1;
        }

        for(int i = low; i <= high; i++){
            windowSum += code[i];
        }

        for(int i = 0; i < n ; i++){
            ans[i] = windowSum;
            windowSum -= code[low% n];
            low++;
            high++;
            windowSum += code[high% n];
        }

        return ans;
    }
};