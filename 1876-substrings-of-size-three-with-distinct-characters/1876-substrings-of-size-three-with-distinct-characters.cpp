class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        unordered_map<char, int>freq;
        int low = 0;
        int high = 2;
        int count = 0;
        for(int i = low; i <=high; i++){
            freq[s[i]]++;
        }
        if(freq.size() == 3) count++;

        while(high < n - 1){
            
            freq[s[low]]--;
            if(freq[s[low]] == 0){
                freq.erase(s[low]);
            }

            low++;
            high++;
            freq[s[high]]++;

            if(freq.size() == 3) count++;
        }
        return count;
    }
};