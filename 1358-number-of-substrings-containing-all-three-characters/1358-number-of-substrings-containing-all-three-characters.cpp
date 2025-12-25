class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> freq;
        int low = 0;
        int high = 0;
        int n = s.size();
        int count = 0;

        for(int high = 0; high < n; high++){
            freq[s[high]]++;
            while(freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0 ){
                count += (n - high);
                freq[s[low]]--;
                if(freq[s[low]] == 0){
                    freq.erase(s[low]);
                }
                low++;
            }
        }
        return count;
    }
};