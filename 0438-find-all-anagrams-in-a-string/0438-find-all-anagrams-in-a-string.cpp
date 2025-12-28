class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>freq(26, 0);
        vector<int>ans;

        int n = s.size();
        int k = p.size();
        int low = 0;
        int high = k - 1;
        int start = -1;
        int count = k;

        if(k > n){
            return ans;
        }
        for(int i = 0; i < p.size(); i++){
            freq[p[i] - 'a']++;
        }

        for(int i = low; i<=high; i++){
            if(freq[s[i] - 'a'] > 0){
                count--;
            }
            freq[s[i] - 'a']--;
            if(count == 0){
                start = low;
                ans.push_back(start);
            }
        }
        while(high < s.size() - 1){
            if(freq[s[low] - 'a'] >= 0){
                count++;
            }
            freq[s[low] - 'a']++;
            low++;
            high++;

            if(freq[s[high] - 'a'] > 0){
                count--;
            }
            freq[s[high] - 'a']--;
            if(count == 0){
                start = low;
                ans.push_back(start);
            }
        }

        return ans;
    }
};