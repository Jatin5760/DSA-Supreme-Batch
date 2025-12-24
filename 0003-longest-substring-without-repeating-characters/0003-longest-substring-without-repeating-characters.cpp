class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;
        int low = 0;
        int high = 0;
        int ans = 0;

        for(int high = 0; high < s.size(); high++){
            freq[s[high]]++;
            int k = high - low + 1;
            while(freq.size() < k){
                freq[s[low]]--;
                if(freq[s[low]] == 0){
                    freq.erase(s[low]);
                }
                low++;
                k = high - low + 1;
            }
            int len = high - low + 1;
            ans = max(ans,len);
        }
        return ans;
    }
};