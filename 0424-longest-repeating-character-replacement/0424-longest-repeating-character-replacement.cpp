class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26, 0);
        int n = s.size();
        int low = 0;
        int high = 0;
        int max_freq = 0;
        int max_length = 0;

        for(int high = 0; high < n; high++){
            freq[s[high] - 'A']++;
            max_freq = max(max_freq, freq[s[high] - 'A']);

            if((high - low + 1) - max_freq > k){
                freq[s[low] - 'A']--;
                max_freq = 0;
                for(int i = 0; i < 26; i++){
                    max_freq = max(max_freq, freq[i]);
                }
                low++;
            }

            if((high - low + 1 ) - max_freq <= k){
                max_length = max(max_length, high - low + 1);
            }
        }
        return max_length;
    }
};