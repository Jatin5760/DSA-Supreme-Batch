class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26, 0);
        int count = s1.size();
        int k = s1.size();
        int low = 0;
        int high = k - 1;

        if (k > s2.size()) return false;
        for (int i = 0; i < s1.size(); i++) {
            freq[s1[i] - 'a']++;
        }

        for (int i = low; i <= high; i++) {
            if (freq[s2[i] - 'a'] > 0) {
                count--;
            }
            freq[s2[i] - 'a']--;
            if (count == 0)
                return true;    
        }

        while (high < s2.size() - 1) {
                
            if (freq[s2[low] - 'a'] >= 0) {
                count++;
            }

            freq[s2[low] - 'a']++;
            low++;
            high++;

            if (freq[s2[high] - 'a'] > 0) {
                count--;
            }
            freq[s2[high] - 'a']--;
            if (count == 0)return true;
        }

        return false;
    }
};