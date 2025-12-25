class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> freq;
        int low = 0;
        int high = 0;
        int n = fruits.size();
        int ans = 0;

        for(int high = 0; high < n; high++){
            freq[fruits[high]]++;
            while(freq.size() > 2){
                freq[fruits[low]]--;
                if(freq[fruits[low]] == 0){
                    freq.erase(fruits[low]);
                }
                low++;
            }

            int len = high - low + 1;
            ans = max(ans, len);
        }
        return ans;
    }
};