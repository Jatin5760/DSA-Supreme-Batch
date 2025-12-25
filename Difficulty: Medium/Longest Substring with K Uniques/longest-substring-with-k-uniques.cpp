class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        unordered_map<char, int> freq;
        int low = 0;
        int high = 0;
        int ans = -1;
        int len = 0;
        int n = s.size();

        for(int high = 0; high < n; high++){
            freq[s[high]]++;
            while(freq.size() > k){
                freq[s[low]]--;
                if(freq[s[low]] == 0){
                    freq.erase(s[low]);
                }
                low++;
            }
            
        if(freq.size() == k){
            len = high - low + 1;
            ans = max(ans, len);
            }
        }
        return ans;
    }
};